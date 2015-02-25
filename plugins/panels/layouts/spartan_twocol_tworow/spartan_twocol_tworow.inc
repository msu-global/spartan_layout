<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Spartan Two Column, Two Row'),
  'category' => t('Spartan'),
  'icon' => 'spartan_twocol_tworow.png',
  'theme' => 'spartan_twocol_tworow',
  'admin css' => '../spartan-layout-admin.css',
  'regions' => array(
    'upper_left' => t('Upper Left'),
    'upper_right' => t('Upper Right'),
    'lower_left' => t('Lower Left'),
    'lower_right' => t('Lower Right'),
  ),
);
