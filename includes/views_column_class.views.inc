<?php
/**
 * @file
 * Settings for the style of this plugin
 */

/**
 * Implements hook_views_plugins().
 */
function views_column_class_views_plugins() {

  return array(
    'style' => array(
      'views_column_class' => array(
        'title' => t('Views Column Class'),
        'theme' => 'views_view_column_class',
        'theme path' => drupal_get_path('module', 'views_column_class') . '/includes',
        'help' => t('Assign classes to row items relevant to their position in the column structure as determined by your css.'),
        'handler' => 'views_column_class_style_plugin',
        'uses row plugin' => TRUE,
        'uses row class' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
        'help topic' => 'style-column-class',
      ),
    ),
  );
}