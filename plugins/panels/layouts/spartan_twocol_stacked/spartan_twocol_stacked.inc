<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Two Columns Stacked'),
  'category' => t('Spartan'),
  'icon' => 'spartan_twocol_stacked.png',
  'theme' => 'spartan_twocol_stacked',
  'admin css' => '../spartan-layout-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left'),
    'right' => t('Right'),
    'bottom' => t('Bottom'),
  ),
);
