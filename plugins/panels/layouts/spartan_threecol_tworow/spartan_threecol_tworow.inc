<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Two rows of three regions each, with a top, middle, and footer.'),
  'category' => t('Spartan'),
  'icon' => 'spartan_threecol_tworow.png',
  'theme' => 'spartan_threecol_tworow',
  'admin css' => '../spartan-layout-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'upper_left' => t('Upper Left'),
    'upper_middle' => t('Upper Middle'),
    'upper_right' => t('Upper Right'),
    'middle' => t('Middle'),
    'lower_left' => t('Lower Left'),
    'lower_middle' => t('Lower Middle'),
    'lower_right' => t('Lower Right'),
    'bottom' => t('Bottom'),
  ),
);
