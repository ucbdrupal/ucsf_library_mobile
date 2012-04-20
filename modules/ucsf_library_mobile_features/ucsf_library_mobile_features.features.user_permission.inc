<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ucsf_library_mobile_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer UCSF library mobile site settings
  $permissions['administer UCSF library mobile site settings'] = array(
    'name' => 'administer UCSF library mobile site settings',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
