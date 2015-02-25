<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Spartan One Column'),
  'category' => t('Spartan'),
  'icon' => 'spartan_onecol.png',
  'theme' => 'spartan_onecol',
  'admin css' => '../spartan-layout-admin.css',
  'regions' => array(
    'main' => t('Main'),
  ),
);
