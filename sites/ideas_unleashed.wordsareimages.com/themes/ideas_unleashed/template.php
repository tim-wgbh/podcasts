<?php
  drupal_add_js('/sites/caught.wordsareimages.com/themes/caught/caught.js');
  drupal_add_css('sites/all/wgbh_links/wgbh_links.css');

function ideas_unleashed_preprocess_page(&$vars) {
  if (preg_match('/admin/', current_path()) || preg_match('/node\/add/', current_path())) {
    $vars['admin_page'] = true;
  } else {
    $vars['admin_page'] = false;
  }
}
?>
