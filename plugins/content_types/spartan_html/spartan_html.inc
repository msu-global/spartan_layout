<?php
/**
 * @file: contains Spartan HTML CTools content type plugin.
 * This plugin exists to avoid dumping custom HTML content in the Panels UI,
 * or in blocks.
**/

$plugin = array(
  'title' => t('Spartan HTML'),
  'description' => t('Select the custom HTML you would like to display in this pane.  These HTML fragments are defined in spartan_html.inc within the plugins directory for the spartan_layout module.'),
  'single' => TRUE,
  'category' => t('Spartan'),
  'edit form' => 'spartan_layout_html_edit_form',
  'render callback' => 'spartan_layout_html_render',
);

/**
 * Ctools edit form.
 *
 * @param $form
 * @param $form_state
 * @return mixed
 */
function spartan_layout_html_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['html'] = array(
    '#type' => 'select',
    '#title' => t('HTML'),
    '#options' => drupal_map_assoc(array('blog', 'forum', 'library')),
    '#description' => t('The custom HTML content to display.'),
    '#default_value' => !empty($conf['html']) ? $conf['html'] : key($options),
  );

  return $form;
}

/**
 * Ctools edit form submit handler.
 *
 * @param $form
 * @param $form_state
 */
function spartan_layout_html_edit_form_submit($form, &$form_state) {
  foreach (array('html') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

/**
 * Render callback function.
 *
 * @param $subtype
 * @param $conf
 * @param $args
 * @param $context
 * @return stdClass
 */
function spartan_layout_html_render($subtype, $conf, $args, $context) {
  $block = new stdClass();

  $selection = $conf['html'];
  $html = array();

  $html['blog'] = <<<EOT
<i class="fa fa-newspaper-o"></i>
<h2><a href="//google.com">Current Events</a></h2>
<p>A knowledge platform is built around a community, and here you can learn the latest news and advice from the individuals that make up this community.  This is placeholder text that can be changed to anything.  This is placeholder text that can be changed to anything.</p>
EOT;

  $html['forum'] = <<<EOT
<i class="fa fa-comments-o"></i>
<h2><a href="//google.com">Forums</a></h2>
<p>Discussion is a vital part of what we do.  Within the knowledge platform, our discussions are integrated with the toolset to accomplish useful work.  This is placeholder text that can be changed to anything.  This is placeholder text that can be changed to anything.</p>
EOT;

  $html['library'] = <<<EOT
  <i class="fa fa-book"></i>
  <h2><a href="//google.com">Document Library</a></h2>
  <p>Part of our work revolves around reviewing scholarly documents, and the knowledge platform provides a place for this to happen.  This is placeholder text that can be changed to anything.  This is placeholder text that can be changed to anything.</p>
EOT;

  $block->content = $html[$selection];

  return $block;
}
