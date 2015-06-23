<?php
/**
 * @file
 * podcast_feature.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function podcast_feature_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.culture_podcast.mobile';
  $breakpoint->name = 'mobile';
  $breakpoint->breakpoint = '(min-width: 0px)';
  $breakpoint->source = 'culture_podcast';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 3;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.culture_podcast.mobile'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.culture_podcast.narrow';
  $breakpoint->name = 'narrow';
  $breakpoint->breakpoint = '(min-width: 740px)';
  $breakpoint->source = 'culture_podcast';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.culture_podcast.narrow'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.culture_podcast.normal';
  $breakpoint->name = 'normal';
  $breakpoint->breakpoint = '(min-width: 980px)';
  $breakpoint->source = 'culture_podcast';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.culture_podcast.normal'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.culture_podcast.wide';
  $breakpoint->name = 'wide';
  $breakpoint->breakpoint = '(min-width: 1220px)';
  $breakpoint->source = 'culture_podcast';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.culture_podcast.wide'] = $breakpoint;

  return $export;
}
