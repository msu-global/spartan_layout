<?php

/**
 * Implements hook_panels_layouts().
 */

// This plugin generates its own containers; use page.tpl override or
// hook_preprocess_page to add a containerless template.
$plugin = array(
  'title' => t('Spartan Two-Column Hero'),
  'category' => t('Spartan'),
  'icon' => 'spartan_twocol_hero.png',
  'theme' => 'spartan_twocol_hero',
  'admin css' => '../spartan-layout-admin.css',
  'regions' => array(
    'hero' => t('Hero'),
    'left' => t('Footer Middle'),
    'right' => t('Footer right'),
  ),
);
