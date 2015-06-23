<?php
/**
 * @file
 * podcast_feature.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function podcast_feature_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Page Splash';
  $picture_mapping->machine_name = 'page_splash';
  $picture_mapping->breakpoint_group = 'culture_podcast';
  $picture_mapping->mapping = array(
    'breakpoints.theme.culture_podcast.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'page_splash_wide',
      ),
    ),
    'breakpoints.theme.culture_podcast.normal' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'page_splash_normal',
      ),
    ),
    'breakpoints.theme.culture_podcast.narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'page_splash_narrow',
      ),
    ),
    'breakpoints.theme.culture_podcast.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'page_splash_mobile',
      ),
    ),
  );
  $export['page_splash'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'People';
  $picture_mapping->machine_name = 'people';
  $picture_mapping->breakpoint_group = 'culture_podcast';
  $picture_mapping->mapping = array(
    'breakpoints.theme.culture_podcast.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'person_grid_wide',
      ),
    ),
    'breakpoints.theme.culture_podcast.normal' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'person_grid_normal',
      ),
    ),
    'breakpoints.theme.culture_podcast.narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'person_grid_normal',
      ),
    ),
    'breakpoints.theme.culture_podcast.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'person_grid_mobile',
      ),
    ),
  );
  $export['people'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Podcast Grid';
  $picture_mapping->machine_name = 'podcast_grid';
  $picture_mapping->breakpoint_group = 'culture_podcast';
  $picture_mapping->mapping = array(
    'breakpoints.theme.culture_podcast.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'podcast_grid_wide_1x',
      ),
    ),
    'breakpoints.theme.culture_podcast.normal' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'podcast_grid_normal_1x',
      ),
    ),
    'breakpoints.theme.culture_podcast.narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'podcast_grid_narrow_1x',
      ),
    ),
    'breakpoints.theme.culture_podcast.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'podcast_grid_mobile_1x',
      ),
    ),
  );
  $export['podcast_grid'] = $picture_mapping;

  return $export;
}
