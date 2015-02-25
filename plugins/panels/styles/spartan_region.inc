<?php

/**
 * @file
 * Definition of the 'list' panel style.
 */

// Plugin definition
$plugin = array(
  'title' => t('Spartan Column'),
  'description' => t('Bootstrap markup for columns.'),
  'render region' => 'spartan_layout_style_region_render',
  'settings form' => 'spartan_layout_style_region_settings_form',
);

/**
 * Render region callback.
 *
 * @ingroup themeable
 */
function theme_spartan_layout_style_region_render($vars) {
  $display = $vars['display'];
  $panes = $vars['panes'];
  $settings = $vars['settings'];

  $layouts = array(
    'spartan_homepage',
    'spartan_twocol',
    'spartan_threecol_row',
    'spartan_threecol_stacked',
    'spartan_threecol_tworow',
  );

  if (in_array($display->layout, $layouts) && $panes) {
    $classes = array('panel-panel', 'panel-region-' . $vars['region_id']);

    $screen_sizes = array('xs','sm','md','lg');

    foreach ( $screen_sizes as $screen_size) {
      // #tree seems to be TRUE, which is why we need to add the fieldset key.
      if (!empty($settings[$screen_size]['grid_width'])) {
        $classes[] = 'col-'. $screen_size . '-' . $settings[$screen_size]['grid_width'];
      }
      if (!empty($settings[$screen_size]['offset'])) {
        $classes[] = 'col-'. $screen_size . '-offset-' . $settings[$screen_size]['offset'];
      }
    }

    $classes = implode(' ', $classes);
    $html = implode('', $panes);

    return "<div class='$classes'>$html</div>";
  }
}

/**
 * Region settings form callback.
 */
function spartan_layout_style_region_settings_form($style_settings, $display, $pid, $type, $form_state) {
  $options = drupal_map_assoc(range(0,12));

  $form['xs'] = array(
    '#title' => t('Extra-small width and up'),
    '#type' => 'fieldset',
  );

  $form['xs']['grid_width'] = array(
    '#type' => 'select',
    '#title' => t('Column size for tiny width and wider'),
    '#options' => $options,
    '#empty_option' => t('None'),
  );

  $form['xs']['offset'] = array(
    '#type' => 'select',
    '#title' => t('Offset size for tiny width and wider'),
    '#options' => $options,
    '#empty_option' => t('None'),
  );

  $form['sm'] = array(
    '#title' => t('Small width and up'),
    '#type' => 'fieldset',
  );

  $form['sm']['grid_width'] = array(
    '#type' => 'select',
    '#title' => t('Column size for small width and wider'),
    '#options' => $options,
    '#empty_option' => t('None'),
  );

  $form['sm']['offset'] = array(
    '#type' => 'select',
    '#title' => t('Offset size for small width and wider'),
    '#options' => $options,
    '#empty_option' => t('None'),
  );

  $form['md'] = array(
    '#title' => t('Medium width and up'),
    '#type' => 'fieldset',
  );

  $form['md']['grid_width'] = array(
    '#type' => 'select',
    '#title' => t('Column size for medium width and wider'),
    '#options' => $options,
    '#empty_option' => t('None'),
  );

  $form['md']['offset'] = array(
    '#type' => 'select',
    '#title' => t('Offset size for medium width and wider'),
    '#options' => $options,
    '#empty_option' => t('None'),
  );

  $form['lg'] = array(
    '#title' => t('Large width and up'),
    '#type' => 'fieldset',
  );

  $form['lg']['grid_width'] = array(
    '#type' => 'select',
    '#title' => t('Column size for large width and wider'),
    '#options' => $options,
    '#empty_option' => t('None'),
  );

  $form['lg']['offset'] = array(
    '#type' => 'select',
    '#title' => t('Offset size for large width and wider'),
    '#options' => $options,
    '#empty_option' => t('None'),
  );

  return $form;
}
