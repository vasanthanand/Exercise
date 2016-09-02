<?php
/**
 * @file
 * custom_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function custom_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create custom_content_type content'.
  $permissions['create custom_content_type content'] = array(
    'name' => 'create custom_content_type content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own custom_content_type content'.
  $permissions['delete own custom_content_type content'] = array(
    'name' => 'delete own custom_content_type content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any custom_content_type content'.
  $permissions['edit any custom_content_type content'] = array(
    'name' => 'edit any custom_content_type content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own custom_content_type content'.
  $permissions['edit own custom_content_type content'] = array(
    'name' => 'edit own custom_content_type content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
