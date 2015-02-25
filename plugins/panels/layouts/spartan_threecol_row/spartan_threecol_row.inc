<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Spartan Three-Column Row'),
  'category' => t('Spartan'),
  'icon' => 'spartan_threecol_row.png',
  'theme' => 'spartan_threecol_row',
  'admin css' => '../spartan-layout-admin.css',
  'regions' => array(
    'left' => t('Left'),
    'middle' => t('Middle'),
    'right' => t('Right'),
  ),
);
