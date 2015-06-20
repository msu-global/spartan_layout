<?php

/**
 * Implements hook_panels_layouts().
 */

// This plugin generates its own containers; use page.tpl override or
// hook_preprocess_page to add a containerless template.
$plugin = array(
  'title' => t('Spartan Three-row Hero'),
  'category' => t('Spartan'),
  'icon' => 'spartan_threerow_hero.png',
  'theme' => 'spartan_threerow_hero',
  'admin css' => '../spartan-layout-admin.css',
  'regions' => array(
    'hero' => t('Hero'),
    'upper' => t('Upper row'),
    'offset' => t('Offset row'),
    'lower' => t('Lower row'),
  ),
);
