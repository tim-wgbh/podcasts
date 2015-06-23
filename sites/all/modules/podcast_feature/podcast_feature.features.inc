<?php
/**
 * @file
 * podcast_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function podcast_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function podcast_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function podcast_feature_image_default_styles() {
  $styles = array();

  // Exported image style: page_splash_mobile.
  $styles['page_splash_mobile'] = array(
    'label' => 'page_splash_mobile',
    'effects' => array(
      12 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: page_splash_narrow.
  $styles['page_splash_narrow'] = array(
    'label' => 'page_splash_narrow',
    'effects' => array(
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: page_splash_normal.
  $styles['page_splash_normal'] = array(
    'label' => 'page_splash_normal',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1024,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: page_splash_wide.
  $styles['page_splash_wide'] = array(
    'label' => 'page_splash_wide',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: person_grid_mobile.
  $styles['person_grid_mobile'] = array(
    'label' => 'person_grid_mobile',
    'effects' => array(
      15 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: person_grid_normal.
  $styles['person_grid_normal'] = array(
    'label' => 'person_grid_normal',
    'effects' => array(
      14 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 250,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: person_grid_wide.
  $styles['person_grid_wide'] = array(
    'label' => 'person_grid_wide',
    'effects' => array(
      13 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: podcast_grid_mobile_1x.
  $styles['podcast_grid_mobile_1x'] = array(
    'label' => 'podcast_grid_mobile_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: podcast_grid_narrow_1x.
  $styles['podcast_grid_narrow_1x'] = array(
    'label' => 'podcast_grid_narrow_1x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: podcast_grid_normal_1x.
  $styles['podcast_grid_normal_1x'] = array(
    'label' => 'podcast_grid_normal_1x',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 400,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: podcast_grid_wide_1x.
  $styles['podcast_grid_wide_1x'] = array(
    'label' => 'podcast_grid_wide_1x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 500,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function podcast_feature_node_info() {
  $items = array(
    'episode' => array(
      'name' => t('Episode'),
      'base' => 'node_content',
      'description' => t('A single podcast episode'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'series' => array(
      'name' => t('Series'),
      'base' => 'node_content',
      'description' => t('A collection of podcast episodes'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
