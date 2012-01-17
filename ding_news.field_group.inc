<?php
/**
 * @file
 * ding_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ding_news_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_display|node|ding_news|form';
  $field_group->group_name = 'group_display';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Display settings',
    'weight' => '9',
    'children' => array(
      0 => 'field_display',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Display settings',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_display|node|ding_news|form'] = $field_group;

  return $export;
}
