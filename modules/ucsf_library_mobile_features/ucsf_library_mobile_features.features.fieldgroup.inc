<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function ucsf_library_mobile_features_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_legend
  $groups['ucsf_library_floorplan-group_legend'] = array(
    'group_type' => 'standard',
    'type_name' => 'ucsf_library_floorplan',
    'group_name' => 'group_legend',
    'label' => 'Legend',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-1',
    'fields' => array(
      '0' => 'field_legend_computers',
      '1' => 'field_legend_elevators',
      '2' => 'field_legend_photocopiers',
      '3' => 'field_legend_reshelving',
      '4' => 'field_legend_restrooms',
      '5' => 'field_legend_stairs',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Legend');

  return $groups;
}
