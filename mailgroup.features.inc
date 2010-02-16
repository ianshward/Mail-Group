<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mailgroup_ctools_plugin_api() {
  module_load_include('inc', 'mailgroup', 'mailgroup.defaults');
  $args = func_get_args();
  return call_user_func_array('_mailgroup_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function mailgroup_menu_default_items() {
  module_load_include('inc', 'mailgroup', 'mailgroup.defaults');
  $args = func_get_args();
  return call_user_func_array('_mailgroup_menu_default_items', $args);
}
