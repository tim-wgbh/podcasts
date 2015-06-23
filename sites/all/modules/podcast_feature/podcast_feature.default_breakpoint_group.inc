<?php
/**
 * @file
 * podcast_feature.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function podcast_feature_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'culture_podcast';
  $breakpoint_group->name = 'Culture Podcast';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.culture_podcast.wide',
    1 => 'breakpoints.theme.culture_podcast.normal',
    2 => 'breakpoints.theme.culture_podcast.narrow',
    3 => 'breakpoints.theme.culture_podcast.mobile',
  );
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['culture_podcast'] = $breakpoint_group;

  return $export;
}
