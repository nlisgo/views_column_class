<?php
/**
 * @file
 * Demonstrate the actual plugin options.
 */



/**
  * Implementation of views_plugin_style().
  */
class views_columnclass_style_plugin extends views_plugin_style {
  /**
   * Set default options
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['type'] = array('default' => 'ul');
    $options['columns'] = array('default' => '4');
    $options['column_class_prefix'] = array('default' => 'column-');
    $options['class_column_left'] = array('default' => 'alpha');
    $options['class_column_right'] = array('default' => 'omega');
    $options['class'] = array('default' => '');
    $options['wrapper_class'] = array('default' => '');
    $options['advanced_classes'] = array('default' => '');

    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['columns'] = array(
      '#type' => 'textfield',
      '#title' => t('Number of columns'),
      '#default_value' => $this->options['columns'],
    );
    $form['column_class_prefix'] = array(
      '#type' => 'textfield',
      '#description' => t('(e.g. Set to column- to add class column-1, column-2, column-3, column-1 etc to relevant rows).'),
      '#title' => t('Column class prefix'),
      '#default_value' => $this->options['column_class_prefix'],
    );
    $form['class_column_left'] = array(
      '#type' => 'textfield',
      '#title' => t('Class for left column'),
      '#default_value' => $this->options['class_column_left'],
    );
    $form['class_column_right'] = array(
      '#type' => 'textfield',
      '#title' => t('Class for right column'),
      '#default_value' => $this->options['class_column_right'],
    );
    $form['type'] = array(
      '#type' => 'radios',
      '#title' => t('List type'),
      '#options' => array('ul' => t('Unordered list'), 'ol' => t('Ordered list')),
      '#default_value' => $this->options['type'],
    );
    $form['wrapper_class'] = array(
      '#title' => t('Wrapper class'),
      '#description' => t('The class to provide on the wrapper, outside the list.'),
      '#type' => 'textfield',
      '#size' => '30',
    );
    $form['class'] = array(
      '#title' => t('List class'),
      '#description' => t('The class to provide on the list element itself.'),
      '#type' => 'textfield',
      '#size' => '30',
    );
    $form['advanced_classes'] = array(
      '#title' => t('Advanced classes'),
      '#description' => t('Entries one per line and in the format <em>columns|class_column_left|class_column_right|column_class_prefix</em>.'),
      '#type' => 'textarea',
      '#rows' => 5,
    );
  }
}