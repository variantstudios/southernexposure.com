<?php
/**
 * @file
 * quotes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function quotes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function quotes_node_info() {
  $items = array(
    'quotes' => array(
      'name' => t('Quotes'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Quote By'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
