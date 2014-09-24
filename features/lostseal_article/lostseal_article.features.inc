<?php
/**
 * @file
 * lostseal_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lostseal_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function lostseal_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Art'),
      'base' => 'node_content',
      'description' => t('<em>Lost Seal Art</em> contributed by school children.  Use this to capture each art piece, and to document appropriately, including the name of the student, school, and country where this piece was originated. Please, write down a title for the art piece, and if possible, the description as provided by the student.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
