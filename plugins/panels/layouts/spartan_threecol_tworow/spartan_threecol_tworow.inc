<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Spartan Three Column, Two Row'),
  'category' => t('Spartan'),
  'icon' => 'spartan_threecol_tworow.png',
  'theme' => 'spartan_threecol_tworow',
  'admin css' => '../spartan-layout-admin.css',
  'regions' => array(
    'upper_left' => t('Left'),
    'upper_middle' => t('Middle'),
    'upper_right' => t('Right'),
    'lower_left' => t('Lower Left'),
    'lower_middle' => t('Lower Middle'),
    'lower_right' => t('Lower Right'),
  ),
);
