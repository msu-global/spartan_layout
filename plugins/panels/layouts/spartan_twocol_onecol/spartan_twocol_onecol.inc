<?php

/**
 * Implements hook_panels_layouts().
 */
$plugin = array(
  'title' => t('Spartan Two Column, One Column'),
  'category' => t('Spartan'),
  'icon' => 'spartan_twocol_onecol.png',
  'theme' => 'spartan_twocol_onecol',
  'admin css' => '../spartan-layout-admin.css',
  'regions' => array(
    'left' => t('Left'),
    'right' => t('Right'),
    'main' => t('Main'),
  ),
);
