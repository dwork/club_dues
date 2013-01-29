<?php
/**
 * @file
 * club_dues.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function club_dues_user_default_permissions() {
  $permissions = array();

  // Exported permission: create dues content.
  $permissions['create dues content'] = array(
    'name' => 'create dues content',
    'roles' => array(
      0 => 'Treasurer',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create dues_policy content.
  $permissions['create dues_policy content'] = array(
    'name' => 'create dues_policy content',
    'roles' => array(
      0 => 'Treasurer',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any dues content.
  $permissions['delete any dues content'] = array(
    'name' => 'delete any dues content',
    'roles' => array(
      0 => 'Treasurer',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any dues_policy content.
  $permissions['delete any dues_policy content'] = array(
    'name' => 'delete any dues_policy content',
    'roles' => array(
      0 => 'Treasurer',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own dues content.
  $permissions['delete own dues content'] = array(
    'name' => 'delete own dues content',
    'roles' => array(
      0 => 'Treasurer',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own dues_policy content.
  $permissions['delete own dues_policy content'] = array(
    'name' => 'delete own dues_policy content',
    'roles' => array(
      0 => 'Treasurer',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any dues content.
  $permissions['edit any dues content'] = array(
    'name' => 'edit any dues content',
    'roles' => array(
      0 => 'Treasurer',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any dues_policy content.
  $permissions['edit any dues_policy content'] = array(
    'name' => 'edit any dues_policy content',
    'roles' => array(
      0 => 'Treasurer',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own dues content.
  $permissions['edit own dues content'] = array(
    'name' => 'edit own dues content',
    'roles' => array(
      0 => 'Treasurer',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own dues_policy content.
  $permissions['edit own dues_policy content'] = array(
    'name' => 'edit own dues_policy content',
    'roles' => array(
      0 => 'Treasurer',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
