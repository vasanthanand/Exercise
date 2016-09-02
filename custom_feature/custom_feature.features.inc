<?php
/**
 * @file
 * custom_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function custom_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
