<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Spartan Three Equal Columns'),
  'category' => t('Spartan'),
  'icon' => 'spartan_threecol_equal.png',
  'theme' => 'spartan_threecol_equal',
  'admin css' => '../spartan-layout-admin.css',
  'regions' => array(
    'left' => t('Left'),
    'middle' => t('Middle'),
    'right' => t('Right'),
  ),
);
