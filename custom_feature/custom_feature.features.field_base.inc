<?php
/**
 * @file
 * custom_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function custom_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'custom_content_type_select'
  $field_bases['custom_content_type_select'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'custom_content_type_select',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'label' => 'Select an option from the list',
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_function' => '_custom_content_type_options_list',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  return $field_bases;
}
