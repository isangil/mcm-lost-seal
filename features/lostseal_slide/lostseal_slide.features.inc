<?php
/**
 * @file
 * lostseal_slide.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function lostseal_slide_image_default_styles() {
  $styles = array();

  // Exported image style: flexwide.
  $styles['flexwide'] = array(
    'name' => 'flexwide',
    'label' => 'flexwide',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1000,
          'height' => 330,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function lostseal_slide_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => t('A slide that is shown in a cycling gallery, carrousel or slide show'),
      'has_title' => '1',
      'title_label' => t('Slide Title'),
      'help' => t('Upload an image, provide a title and description.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
