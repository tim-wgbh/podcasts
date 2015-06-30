<?php
/**
 * @file
 * podcast_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function podcast_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-copyright_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'copyright_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ideas_unleashed' => array(
        'region' => 'footerc',
        'status' => 1,
        'theme' => 'ideas_unleashed',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
