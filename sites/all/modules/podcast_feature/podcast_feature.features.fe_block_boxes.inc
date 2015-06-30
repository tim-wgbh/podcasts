<?php
/**
 * @file
 * podcast_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function podcast_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'WGBH Copyright';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'copyright_block';
  $fe_block_boxes->body = '<div class="copyright">&copy; 2015 WGBH</div>';

  $export['copyright_block'] = $fe_block_boxes;

  return $export;
}
