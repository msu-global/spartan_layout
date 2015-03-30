<?php
/**
 * @file
 * Contains hooks for Views.
 */

/**
 * Implements hook_views_plugins().
 */
function spartan_layout_views_plugins() {
  $module_path = drupal_get_path('module', 'spartan_layout');
  $plugins = array(
    'style' => array(
      'views_spartan_grid_plugin_style' => array(
        'title' => t('Spartan Grid'),
        'help' => t('Spartan Grid Style'),
        'path' => $module_path . '/plugins/views/spartan_grid',
        'handler' => 'ViewsSpartanGridPluginStyle',
        'parent' => 'default',
        'theme' => 'spartan_grid_plugin_style',
        'theme path' => $module_path . '/templates/spartan_grid',
        'theme file' => 'theme.inc',
        'uses row plugin' => TRUE,
        'uses grouping' => FALSE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
      'views_spartan_table_plugin_style' => array(
        'title' => t('Spartan Table'),
        'help' => t('Spartan Table Style'),
        'path' => $module_path . '/plugins/views/spartan_table',
        'handler' => 'ViewsSpartanTablePluginStyle',
        'parent' => 'table',
        'theme' => 'spartan_table_plugin_style',
        'theme path' => $module_path . '/templates/spartan_table',
        'theme file' => 'theme.inc',
        'uses row plugin' => FALSE,
        'uses row class' => TRUE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );

  return $plugins;
}
