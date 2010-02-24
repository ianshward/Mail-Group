<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _mailgroup_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'spaces-feature-mailgroup';
  $context->description = 'Mailgroup';
  $context->tag = 'Mailgroup';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'mailgroup' => 'mailgroup',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'mailgroup-info' => array(
          'module' => 'mailgroup',
          'delta' => 'info',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'mailgroup',
  );
  $context->condition_mode = 1;

  $translatables['spaces-feature-mailgroup'] = array(
    t('Mailgroup'),
  );

  $export['spaces-feature-mailgroup'] = $context;
  return $export;
}

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
