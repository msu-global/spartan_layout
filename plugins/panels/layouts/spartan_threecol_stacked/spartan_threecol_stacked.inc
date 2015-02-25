<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('One row of three regions, with a header and a footer.'),
  'category' => t('Spartan'),
  'icon' => 'spartan_threecol_stacked.png',
  'theme' => 'spartan_threecol_stacked',
  'admin css' => '../spartan-layout-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'middle' => t('Middle column'),
    'right' => t('Right side'),
    'bottom' => t('Bottom'),
  ),
);
