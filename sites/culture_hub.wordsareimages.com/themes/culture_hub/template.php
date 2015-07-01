<?php
  drupal_add_js('/sites/culture_hub.wordsareimages.com/themes/culture_hub/culture_hub.js');
  drupal_add_css('sites/all/wgbh_links/wgbh_links.css');

function culture_hub_preprocess_html(&$vars) {
  global $user;
  dpm ($user);
  // $vars['classes_array'][] = ['is_admin'];
}
function culture_hub_preprocess_page(&$vars) {
  if (preg_match('/admin/', current_path()) || preg_match('/node\/add/', current_path())) {
    $vars['admin_page'] = true;
  } else {
    $vars['admin_page'] = false;
  }
}
    
?>
