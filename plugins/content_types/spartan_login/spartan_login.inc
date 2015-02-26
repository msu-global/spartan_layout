<?php
/**
 * @file: contains Spartan Login CTools content type plugin.  We want this to be
 * a CTools plugin, and not a block, so that we can pass it a "context"
 * depending on which page it's being viewed on.
 *
 * Don't use this right now; this is a work in progress.
**/

$plugin = array(
  'title' => t('Spartan Login'),
  'description' => t('A custom login form for the Spartan theme.  Currently broken; use the Spartan Login block instead.'),
  'single' => TRUE,
  'category' => t('Spartan'),
  'render callback' => 'spartan_layout_login_render',
);

/**
 * Render callback function.
 *
 * @param $subtype
 * @param $conf
 * @param $args
 * @param $context
 * @return stdClass
 */
function spartan_layout_login_render($subtype, $conf, $args, $context) {
  global $user;
  $block = new stdClass();

  // If we are already logged on, go to the user page instead.
  if (user_is_logged_in()) {
    $form['message'] = array(
      '#markup' => '<p>Welcome ' . $user->name . ', you are logged in.  <a href="/user/logout">Log out</a></p>'
    );
  }
  else {
    $form = array(
      '#action' => url(current_path(), array('query' => drupal_get_destination(), 'external' => FALSE)),
      '#id' => 'user-login-form',
      '#validate' => user_login_default_validators(),
      'msu_login' => array(
        '#markup' => '<p><em>Michigan State University users login <a href="https://gcfsiknowledge.msu.edu/Shibboleth.sso/Login?target=https%3A%2F%2Fgcfsiknowledge.msu.edu%2F%3Fq%3Dshib_login%2Fnode">here</a></em></p>',
      ),
      'drupal_login' => array(
        'name' => array('#type' => 'textfield',
          '#title' => t('Username'),
          '#maxlength' => USERNAME_MAX_LENGTH,
          '#size' => 15,
          '#required' => TRUE,
        ),
        'pass' =>array('#type' => 'password',
          '#title' => t('Password'),
          '#size' => 15,
          '#required' => TRUE,
        ),
        'actions' => array(
          '#type' => 'actions',
          'submit' => array(
            '#type' => 'submit',
            '#value' => t('Log in'),
          ),
        ),
      ),
    );
    $form['#submit'][] = 'user_login_submit';


    $items = array();
    if (variable_get('user_register', USER_REGISTER_VISITORS_ADMINISTRATIVE_APPROVAL)) {
      $items[] = l(t('Create new account'), 'user/register', array('attributes' => array('title' => t('Create a new user account.'))));
    }
    $items[] = l(t('Request new password'), 'user/password', array('attributes' => array('title' => t('Request new password via e-mail.'))));
    $form['links'] = array('#markup' => theme('item_list', array('items' => $items)));
    return;
  }

  $block->content = $form;

  return $block;
}
