<?php
/**
 * @file
 * club_dues.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function club_dues_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: menu-dues:dues
  $menu_links['menu-dues:dues'] = array(
    'menu_name' => 'menu-dues',
    'link_path' => 'dues',
    'router_path' => 'dues',
    'link_title' => 'Dues Receivable',
    'options' => array(
      'attributes' => array(
        'title' => 'Display Dues Receivable',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-dues:dues-history
  $menu_links['menu-dues:dues-history'] = array(
    'menu_name' => 'menu-dues',
    'link_path' => 'dues-history',
    'router_path' => 'dues-history',
    'link_title' => 'Dues History',
    'options' => array(
      'attributes' => array(
        'title' => 'Display Dues Receivable History',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-dues:view-dues-policy
  $menu_links['menu-dues:view-dues-policy'] = array(
    'menu_name' => 'menu-dues',
    'link_path' => 'view-dues-policy',
    'router_path' => 'view-dues-policy',
    'link_title' => 'Dues Policies',
    'options' => array(
      'attributes' => array(
        'title' => 'Display membership dues policies for all chapters',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Dues History');
  t('Dues Policies');
  t('Dues Receivable');


  return $menu_links;
}
