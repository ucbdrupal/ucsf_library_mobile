<?php
/**
 * @file
 * 
 * Administrative page callbacks for the ucsf_library_mobile module.
 * 
 * @copyright Copyright (c) 2012 UC Regents
 */

/**
 * Menu callback.
 * Builds the module's administrative settings form.
 *  
 * @ingroup forms
 * @see system_settings_form
 
 */
function ucsf_library_mobile_admin_settings() {
  $form = array();
  $form['ucsf_library_mobile_menu'] = array(
    '#type' => 'radios',
  	'#title' => t('Mobile Menu'),
  	'#default_value' => variable_get('ucsf_library_mobile_menu', 'primary-links'),
  	'#options' => _ucsf_library_mobile_admin_settings_menu_options(),
  	'#description' => t('Select the menu that will be used on Mobile Pages.')
  );
  return system_settings_form($form);
}

/**
 * Retrieves the title and name of all menus in the site.
 * Used to populate admin settings form.
 * @return an associative array with key/value pairs of menu-name/menu-title values.
 * @see ucsf_library_mobile_admin_settings
 */
function _ucsf_library_mobile_admin_settings_menu_options() {
	$result = db_query("SELECT * FROM {menu_custom} ORDER BY title");
	$options = array();
	while (false !== ($menu = db_fetch_array($result))) {
		$options[$menu['menu_name']] = filter_xss_admin($menu['title']);
	}
	return $options;
}