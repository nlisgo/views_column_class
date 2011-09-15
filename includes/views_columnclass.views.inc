<?php
/**
 * @file
 * Settings for the style of this plugin
 */

/**
 * Implements hook_views_plugins().
 */
function views_columnclass_views_plugins() {

  return array(
    'style' => array(
      'views_columnclass' => array(
        'title' => t('Views Column Class'),
        'theme' => 'views_view_columnclass',
        'theme path' => drupal_get_path('module', 'views_columnclass') . '/includes',
        'help' => t('Assign classes to row items relevant to their position in the column structure as determined by your css.'),
        'handler' => 'views_columnclass_style_plugin',
        'uses row plugin' => TRUE,
        'uses row class' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
        'help topic' => 'style-columnclass',
      ),
    ),
  );
}