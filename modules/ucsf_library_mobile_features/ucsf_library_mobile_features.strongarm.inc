<?php

/**
 * Implementation of hook_strongarm().
 */
function ucsf_library_mobile_features_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_mobile_page';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '0',
    'author' => '1',
    'options' => '2',
    'menu' => '-4',
    'path' => '4',
    'path_redirect' => '3',
  );
  $export['content_extra_weights_mobile_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ucsf_library_floorplan';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '0',
    'revision_information' => '1',
    'author' => '2',
    'options' => '3',
    'menu' => '-4',
    'path' => '5',
    'path_redirect' => '4',
  );
  $export['content_extra_weights_ucsf_library_floorplan'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ucsf_library_location';
  $strongarm->value = array(
    'title' => '-3',
    'body_field' => '-2',
    'revision_information' => '3',
    'author' => '2',
    'options' => '4',
    'menu' => '1',
    'path' => '5',
    'path_redirect' => '6',
  );
  $export['content_extra_weights_ucsf_library_location'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_mobile_page';
  $strongarm->value = array();
  $export['node_options_mobile_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ucsf_library_floorplan';
  $strongarm->value = array();
  $export['node_options_ucsf_library_floorplan'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ucsf_library_location';
  $strongarm->value = array();
  $export['node_options_ucsf_library_location'] = $strongarm;

  return $export;
}
