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
    '#options' => drupal_map_assoc(array('blog', 'forum', 'library', 'services', 'about', 'partners', 'mission', 'services-hero', 'services-websites', 'services-apps', 'services-legacy')),
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
  global $base_url;
  $block = new stdClass();

  $selection = $conf['html'];
  $html = array();

  $html['blog'] = <<<EOT
<i class="fa fa-newspaper-o"></i>
<h2><a href="$base_url/blog">Current Events</a></h2>
<p>A knowledge platform is built around a community, and here you can learn the latest news and advice from the individuals that make up this community.  The Knowledge Platform features several blogs from our staff writers.</p>
EOT;

  $html['forum'] = <<<EOT
<i class="fa fa-comments-o"></i>
<h2><a href="$base_url/forum">Forums</a></h2>
<p>The Knowledge Platform provides several forums related to the GCFSI mission.  These forums can be used as a place for discussion, and also tied in with other resources within the Knowledge Platform.</p>
EOT;

  $html['library'] = <<<EOT
  <i class="fa fa-book"></i>
  <h2><a href="$base_url/library">Document Library</a></h2>
  <p>The Knowledge Platform intelligently stores resources in many different formats.  These could be scholarly documents, videos, pictures, or links to other resources on the Internet.  The Knowledge Platform has built-in support to reuse these resources in many of the other tools we offer.</p>
EOT;

  $html['services'] = <<<EOT
  <i class="fa fa-gears"></i>
  <h2><a href="$base_url/services">Web Services</a></h2>
  <p>The Knowledge Platform provides a convenient back-end for mobile apps, web sites, and other web services through the use of a powerful entity system and a clever services framework.  Security, storage, and performance are ready out-of-the-box, as well as many server-side RESTful features.</p>
EOT;

  $html['about'] = <<<EOT
  <h2><i class="fa fa-pencil"></i> About the Knowledge Platform</h2>
  <p>The Knowledge Platform is an open-source technology platform leveraging the stregths of modern web technologies.  It provides a technical framework to store data, collaborate, and communicate.</p>
EOT;

  $html['partners'] = <<<EOT
  <h2><i class="fa fa-users"></i> Our partners</h2>
  <p>The Knowledge Platform is made possible by federal grants, private donations, and participation from the GCFSI's consortium partners.</p>
EOT;

  $html['mission'] = <<<EOT
  <h2><i class="fa fa-graduation-cap"></i> Our Mission</h2>
  <p>To provide a technological platform for the GCFSI to create, test, and enable scaling of effective solutions and evidence-based approaches to a defined set of future critical global trends impacting food systems.</p>
EOT;

  $html['services-hero'] = <<<EOT
  <div class="service-hero text-center">
    <i class="fa fa-cog fa-spin"></i>&nbsp;&nbsp;&nbsp;&nbsp;<i class="fa fa-cog fa-spin"></i>&nbsp;&nbsp;&nbsp;&nbsp;<i class="fa fa-cog fa-spin"></i>
    <h1>Knowledge Platform Web Services</h1>
    <h2>Turning knowledge into tools.</h2>
  </div>
EOT;

  $html['services-websites'] = <<<EOT
  <div class="service-purpose">
    <i class="fa fa-cubes"></i>
    <h2>Connect your data to other websites.</h2>
    <p>The Knowledge Platform functions as a secure, robust date source for other websites.  As you work within the Knowledge Platform, the results of your work can be automatically shared with other websites and apps.  The way in which this is done is important, too&mdash;all resources are exposed using a full-featured, industry-standard interface that nearly every website can consume easily.</p>
  </div>
EOT;

  $html['services-apps'] = <<<EOT
  <div class="service-purpose">
    <i class="fa fa-mobile"></i>
    <h2>Power a smartphone app.</h2>
    <p>The Knowledge Platform web services are bi-directional, meaning that a smartphone app can both contribute and consume content.  This can be a useful option, when the interaction with the Knowledge Platform is just too complex for a web page.  This could also enable you to combine data from the Knowledge Platform with data in other apps or services.</p>
  </div>
EOT;

  $html['services-legacy'] = <<<EOT
  <div class="service-purpose">
    <i class="fa fa-desktop"></i>
    <h2>Integrate with a legacy system</h2>
    <p>There's plenty of stable, mature software solutions already in the marketplace.  With the Knowledge Platform's web services, any application that understands HTTP can connect to them.  In cases where the Knowledge Platform is being used in conjunction with a legacy desktop app, this can cut down on double-entry and limit the time spent maintaining two separate systems.</p>
  </div>
EOT;

  $block->content = $html[$selection];

  return $block;
}
