<?php
/**
 * @file
 * club_dues.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function club_dues_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function club_dues_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function club_dues_node_info() {
  $items = array(
    'dues' => array(
      'name' => t('Dues'),
      'base' => 'node_content',
      'description' => t('Membership dues history, including current due'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dues_policy' => array(
      'name' => t('Dues Policy'),
      'base' => 'node_content',
      'description' => t('Membership Dues policy defines how dues are collected and reported'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
