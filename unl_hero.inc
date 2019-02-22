<?php

/**
 * Used in unl_hero_install() during module installation
 * and in unl_hero_node_type_insert() when a new content type is created.
 */
function _unl_hero_field_create_instances($bundle) {

  if (!field_info_instance('node', 'field_unl_hero_size', $bundle)) {
    $instance = array(
      'field_name' => 'field_unl_hero_size',
      'bundle' => $bundle,
      'entity_type' => 'node',
      'label' => t('Hero size'),
      'description' => t('This is the hero size.'),
      'required' => FALSE,
      'display' => array(
        'default' => array('label' => 'hidden'),
      ),
      'widget' => array(
        'type' => 'options_select',
      ),
    );
    field_create_instance($instance);
  }

  if (!field_info_instance('node', 'field_unl_hero_title', $bundle)) {
    $instance = array(
      'field_name' => 'field_unl_hero_title',
      'bundle' => $bundle,
      'entity_type' => 'node',
      'label' => t('Hero title'),
      'description' => t('This is the hero title.'),
      'required' => FALSE,
      'display' => array(
        'default' => array('label' => 'hidden'),
      ),
    );
    field_create_instance($instance);
  }

  if (!field_info_instance('node', 'field_unl_hero_subhead1', $bundle)) {
    $instance = array(
      'field_name' => 'field_unl_hero_subhead1',
      'bundle' => $bundle,
      'entity_type' => 'node',
      'label' => t('Hero subhead (above)'),
      'description' => t('This is the hero subhead.'),
      'required' => FALSE,
      'display' => array(
        'default' => array('label' => 'hidden'),
      ),
    );
    field_create_instance($instance);
  }

  if (!field_info_instance('node', 'field_unl_hero_subhead2', $bundle)) {
    $instance = array(
      'field_name' => 'field_unl_hero_subhead2',
      'bundle' => $bundle,
      'entity_type' => 'node',
      'label' => t('Hero subhead (below)'),
      'description' => t('This is the hero subhead.'),
      'required' => FALSE,
      'display' => array(
        'default' => array('label' => 'hidden'),
      ),
    );
    field_create_instance($instance);
  }

  if (!field_info_instance('node', 'field_unl_hero_image', $bundle)) {
    $instance = array(
      'field_name' => 'field_unl_hero_image',
      'bundle' => $bundle,
      'entity_type' => 'node',
      'label' => t('Hero image'),
      'description' => t('This is the hero image.'),
      'required' => FALSE,
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array('image_style' => 'large', 'image_link' => ''),
        ),
      ),
      'settings' => array(
        'file_directory' => 'images/hero',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '3 MB',
        'max_resolution' => '',
        'min_resolution' => '',
        'alt_field' => TRUE,
        'title_field' => FALSE,
      ),
    );
    field_create_instance($instance);
  }

  if (!field_info_instance('node', 'field_unl_hero_photo_credit', $bundle)) {
    $instance = array(
      'field_name' => 'field_unl_hero_photo_credit',
      'bundle' => $bundle,
      'entity_type' => 'node',
      'label' => t('Photo credit'),
      'required' => FALSE,
      'display' => array(
        'default' => array('label' => 'hidden'),
      ),
    );
    field_create_instance($instance);
  }

}
