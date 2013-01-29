<?php
/**
 * @file
 * club_dues.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function club_dues_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-dues.
  $menus['menu-dues'] = array(
    'menu_name' => 'menu-dues',
    'title' => 'Dues',
    'description' => 'Dues and reporting',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Dues');
  t('Dues and reporting');


  return $menus;
}
