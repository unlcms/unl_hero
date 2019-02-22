<?php

/**
 * Used in unl_hero_install() during module installation
 * and in unl_hero_node_type_insert() when a new content type is created.
 */
function _unl_hero_field_create_instances($bundle) {
  if (!field_info_instance('node', 'field_unl_hero_title', $bundle)) {
    $instance = array(
      'field_name' => 'field_unl_hero_title',
      'bundle' => $bundle,
      'entity_type' => 'node',
      'label' => t('Hero title'),
      'description' => t('This is the hero title.'),
      'required' => FALSE,
    );
    field_create_instance($instance);
  }

  if (!field_info_instance('node', 'field_unl_hero_subhead', $bundle)) {
    $instance = array(
      'field_name' => 'field_unl_hero_subhead',
      'bundle' => $bundle,
      'entity_type' => 'node',
      'label' => t('Hero subhead'),
      'description' => t('This is the hero subhead.'),
      'required' => FALSE,
    );
    field_create_instance($instance);
  }
}
