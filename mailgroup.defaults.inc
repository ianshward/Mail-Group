<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _mailgroup_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _mailgroup_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Mail Group',
    'path' => 'mailgroup',
    'weight' => '0',
  );
  // Translatables
  array(
    t('Mail Group'),
  );


  return $items;
}
