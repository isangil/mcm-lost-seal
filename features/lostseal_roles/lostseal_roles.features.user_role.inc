<?php
/**
 * @file
 * lostseal_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function lostseal_roles_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 2,
  );

  return $roles;
}
