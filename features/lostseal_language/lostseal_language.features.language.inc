<?php
/**
 * @file
 * lostseal_language.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function lostseal_language_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => '',
    'weight' => 0,
    'lingotek_enabled' => 1,
    'lingotek_locale' => 'en_US',
  );
  return $languages;
}
