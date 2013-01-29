<?php
/**
 * @file
 * club_dues.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function club_dues_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'menu-menu-dues' => array(
      'delta' => 'menu-dues',
      'module' => 'menu',
    ),
  );

  // omega_network
  $theme = array();

  $theme['menu-menu-dues'] = array(
    'module' => 'menu',
    'delta' => 'menu-dues',
    'theme' => 'omega_network',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['omega_network'] = $theme;

  // professional_theme
  $theme = array();

  $theme['menu-menu-dues'] = array(
    'module' => 'menu',
    'delta' => 'menu-dues',
    'theme' => 'professional_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['professional_theme'] = $theme;

  // seven
  $theme = array();

  $theme['menu-menu-dues'] = array(
    'module' => 'menu',
    'delta' => 'menu-dues',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
