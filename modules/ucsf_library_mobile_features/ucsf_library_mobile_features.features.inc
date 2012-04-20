<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ucsf_library_mobile_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ucsf_library_mobile_features_node_info() {
  $items = array(
    'mobile_page' => array(
      'name' => t('Mobile Page'),
      'module' => 'features',
      'description' => t('a generic content page in the mobile application.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'ucsf_library_floorplan' => array(
      'name' => t('Library Floorplan'),
      'module' => 'features',
      'description' => t('Represents a floor within the UCSF Library building.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Rooms and Sections'),
      'min_word_count' => '0',
      'help' => t('Rooms and Sections:
------------------------
List one room or section per line.
Separate name of the room/section and its indicator on the map with a colon.
Example: "Study Room : A15"'),
    ),
    'ucsf_library_location' => array(
      'name' => t('Library Location'),
      'module' => 'features',
      'description' => t('Represents a library location on the UCSF campuses.'),
      'has_title' => '1',
      'title_label' => t('Location'),
      'has_body' => '1',
      'body_label' => t('Address'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ucsf_library_mobile_features_views_api() {
  return array(
    'api' => '2',
  );
}
