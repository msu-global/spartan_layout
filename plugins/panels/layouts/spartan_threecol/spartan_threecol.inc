<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Spartan Three Column'),
  'category' => t('Spartan'),
  'icon' => 'spartan_threecol.png',
  'theme' => 'spartan_threecol',
  'admin css' => '../spartan-layout-admin.css',
  'regions' => array(
    'left' => t('Left'),
    'middle' => t('Middle'),
    'right' => t('Right'),
  ),
);
