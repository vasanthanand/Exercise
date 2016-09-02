<?php
/**
 * @file
 * custom_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function custom_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-custom_content_type-custom_content_type_select'
  $field_instances['node-custom_content_type-custom_content_type_select'] = array(
    'bundle' => 'custom_content_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select an option from the list.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'custom_content_type_select',
    'label' => 'You Selected',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Select an option from the list.');
  t('You Selected');

  return $field_instances;
}
