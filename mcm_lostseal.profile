<?php

/**
 * @file
 * Enables modules and site configuration for the Lost Seal site installation.
 */

/**
 * Preprocess the install page variables to add our logo.
 */
function mcm_lostseal_process_maintenance_page(&$variables) {
  $variables['logo'] = drupal_get_path('profile', 'mcm_lostseal') . '/logo.png';
}

