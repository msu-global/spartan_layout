<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Spartan Homepage'),
  'category' => t('Spartan'),
  'icon' => 'spartan_homepage.png',
  'theme' => 'spartan_homepage',
  'admin css' => '../spartan-layout-admin.css',
  'regions' => array(
    'slogan' => t('Slogan'),
    'hero' => t('Hero'),
    'upper_left' => t('Upper left'),
    'upper_middle' => t('Upper middle'),
    'upper_right' => t('Upper right'),
    'break' => t('Full-width page break'),
  ),
);
