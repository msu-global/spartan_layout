<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Spartan Two Column'),
  'category' => t('Spartan'),
  'icon' => 'spartan_twocol.png',
  'theme' => 'spartan_twocol',
  'admin css' => '../spartan-layout-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left'),
    'right' => t('Right'),
  ),
);
