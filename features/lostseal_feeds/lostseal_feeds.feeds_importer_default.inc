<?php
/**
 * @file
 * lostseal_feeds.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function lostseal_feeds_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'art_importer';
  $feeds_importer->config = array(
    'name' => 'Art Importer',
    'description' => 'import art from schools',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
        'encoding' => 'UTF-8',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'FIRST_NAME',
            'target' => 'field_author',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'DESCRIPTION',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'PATH',
            'target' => 'field_image',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 's',
            'target' => 'title_field',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 's',
            'target' => 'title',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'LANG',
            'target' => 'language',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'SCHOOL',
            'target' => 'field_country_school',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'COUNTRY',
            'target' => 'field_country_school',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'article',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['art_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'book_published_art_importer';
  $feeds_importer->config = array(
    'name' => 'Book Published Art Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
        'encoding' => 'UTF-8',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'FIRST_NAME',
            'target' => 'field_author',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'DESCRIPTION',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'PATH',
            'target' => 'field_image',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 's',
            'target' => 'title_field',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 's',
            'target' => 'title',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'LANG',
            'target' => 'language',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'COUNTRY',
            'target' => 'field_country_school',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'TAG',
            'target' => 'field_tags',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'article',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['book_published_art_importer'] = $feeds_importer;

  return $export;
}
