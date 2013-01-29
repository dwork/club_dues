<?php
/**
 * @file
 * club_dues.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function club_dues_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'dues';
  $view->description = 'Editable view of dues and receivables';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dues Receivable';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_middle_initial' => 'field_middle_initial',
    'field_suffix' => 'field_suffix',
    'nothing' => 'nothing',
    'field_receivable_type' => 'field_receivable_type',
    'field_amount_due' => 'field_amount_due',
    'field_date' => 'field_date',
    'field_date_paid' => 'field_date_paid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_middle_initial' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_suffix' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_receivable_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_amount_due' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_paid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_uid_target_id']['id'] = 'field_uid_target_id';
  $handler->display->display_options['relationships']['field_uid_target_id']['table'] = 'field_data_field_uid';
  $handler->display->display_options['relationships']['field_uid_target_id']['field'] = 'field_uid_target_id';
  $handler->display->display_options['relationships']['field_uid_target_id']['required'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: First Name (hidden) */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_first_name']['ui_name'] = 'First Name (hidden)';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_first_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_first_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_first_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_first_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_first_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_first_name']['field_api_classes'] = 0;
  /* Field: Last Name (hidden) */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_last_name']['ui_name'] = 'Last Name (hidden)';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_last_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_last_name']['field_api_classes'] = 0;
  /* Field: Middle Name (hidden) */
  $handler->display->display_options['fields']['field_middle_initial']['id'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['table'] = 'field_data_field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['field'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_middle_initial']['ui_name'] = 'Middle Name (hidden)';
  $handler->display->display_options['fields']['field_middle_initial']['label'] = '';
  $handler->display->display_options['fields']['field_middle_initial']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_middle_initial']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['field_api_classes'] = 0;
  /* Field: Suffix (hidden) */
  $handler->display->display_options['fields']['field_suffix']['id'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['table'] = 'field_data_field_suffix';
  $handler->display->display_options['fields']['field_suffix']['field'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_suffix']['ui_name'] = 'Suffix (hidden)';
  $handler->display->display_options['fields']['field_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_suffix']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_suffix']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_suffix']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_suffix']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_suffix']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_suffix']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_suffix']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_suffix']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Member';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_first_name] [field_middle_initial] [field_last_name] [field_suffix]
';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Content: Amount Due */
  $handler->display->display_options['fields']['field_amount_due']['id'] = 'field_amount_due';
  $handler->display->display_options['fields']['field_amount_due']['table'] = 'field_data_field_amount_due';
  $handler->display->display_options['fields']['field_amount_due']['field'] = 'field_amount_due';
  $handler->display->display_options['fields']['field_amount_due']['label'] = 'Amount ';
  $handler->display->display_options['fields']['field_amount_due']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_amount_due']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_amount_due']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_amount_due']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_amount_due']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_amount_due']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_amount_due']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_amount_due']['field_api_classes'] = 0;
  /* Field: Content: Meeting/Event Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Amount/Due Date';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['text'] = '[field_amount_due]<BR>
Due: [field_date]';
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Field: Amount Paid */
  $handler->display->display_options['fields']['field_amount_paid']['id'] = 'field_amount_paid';
  $handler->display->display_options['fields']['field_amount_paid']['table'] = 'field_data_field_amount_paid';
  $handler->display->display_options['fields']['field_amount_paid']['field'] = 'field_amount_paid';
  $handler->display->display_options['fields']['field_amount_paid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_amount_paid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_amount_paid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_amount_paid']['type'] = 'editable';
  $handler->display->display_options['fields']['field_amount_paid']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'number_decimal',
    'fallback_settings' => array(
      'thousand_separator' => ',',
      'decimal_separator' => '.',
      'scale' => '2',
      'prefix_suffix' => 1,
    ),
  );
  $handler->display->display_options['fields']['field_amount_paid']['field_api_classes'] = 0;
  /* Field: Field: Date Paid */
  $handler->display->display_options['fields']['field_date_paid']['id'] = 'field_date_paid';
  $handler->display->display_options['fields']['field_date_paid']['table'] = 'field_data_field_date_paid';
  $handler->display->display_options['fields']['field_date_paid']['field'] = 'field_date_paid';
  $handler->display->display_options['fields']['field_date_paid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['text'] = '[field_date_paid]';
  $handler->display->display_options['fields']['field_date_paid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date_paid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date_paid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_date_paid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date_paid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date_paid']['type'] = 'editable';
  $handler->display->display_options['fields']['field_date_paid']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'date_default',
    'fallback_settings' => array(
      'format_type' => 'short',
      'fromto' => 'both',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'show_repeat_rule' => 'show',
    ),
  );
  $handler->display->display_options['fields']['field_date_paid']['field_api_classes'] = 0;
  /* Field: Field: Dues Check# */
  $handler->display->display_options['fields']['field_document']['id'] = 'field_document';
  $handler->display->display_options['fields']['field_document']['table'] = 'field_data_field_document';
  $handler->display->display_options['fields']['field_document']['field'] = 'field_document';
  $handler->display->display_options['fields']['field_document']['label'] = 'Amount/Check#';
  $handler->display->display_options['fields']['field_document']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_document']['alter']['text'] = 'Amount: [field_amount_paid]
CK#: [field_document]';
  $handler->display->display_options['fields']['field_document']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_document']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_document']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_document']['type'] = 'editable';
  $handler->display->display_options['fields']['field_document']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  $handler->display->display_options['fields']['field_document']['field_api_classes'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Chapter/Club (field_chapter) */
  $handler->display->display_options['arguments']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['arguments']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_options']['code'] = 'if (function_exists(\'club_base_get_chapter\')) { 
  return club_base_get_chapter();
} else {
  drupal_set_message(t(\'Error: function "club_base_get_chapter" not found; make sure "club_base" module is installed and activated\'));
}';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_chapter_target_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_chapter_target_id']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dues' => 'dues',
  );
  /* Filter criterion: Dues Payable Range */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['ui_name'] = 'Dues Payable Range';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Dues Payment Range';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-3:+0';
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$node = node_load($row->nid);
if (isset($node->field_amount_paid[\'und\']) && isset($node->field_amount_due[\'und\'])) {
   if ($node->field_amount_due[\'und\'][0][\'value\'] == $node->field_amount_paid[\'und\'][0][\'value\']) {
      return TRUE;
   }
}
return FALSE;
';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'dues';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Dues Receivable';
  $handler->display->display_options['menu']['description'] = 'Display Dues Receivable';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-dues';
  $handler->display->display_options['menu']['context'] = 0;
  $export['dues'] = $view;

  $view = new view;
  $view->name = 'dues_history';
  $view->description = 'Editable view of dues and receivables';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dues History';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dues History';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_middle_initial' => 'field_middle_initial',
    'field_suffix' => 'field_suffix',
    'nothing' => 'nothing',
    'field_receivable_type' => 'field_receivable_type',
    'field_amount_due' => 'field_amount_due',
    'field_date' => 'field_date',
    'field_date_paid' => 'field_date_paid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_middle_initial' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_suffix' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_receivable_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_amount_due' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_paid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_uid_target_id']['id'] = 'field_uid_target_id';
  $handler->display->display_options['relationships']['field_uid_target_id']['table'] = 'field_data_field_uid';
  $handler->display->display_options['relationships']['field_uid_target_id']['field'] = 'field_uid_target_id';
  $handler->display->display_options['relationships']['field_uid_target_id']['required'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: First Name (hidden) */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_first_name']['ui_name'] = 'First Name (hidden)';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_first_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_first_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_first_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_first_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_first_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_first_name']['field_api_classes'] = 0;
  /* Field: Last Name (hidden) */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_last_name']['ui_name'] = 'Last Name (hidden)';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_last_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_last_name']['field_api_classes'] = 0;
  /* Field: Middle Name (hidden) */
  $handler->display->display_options['fields']['field_middle_initial']['id'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['table'] = 'field_data_field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['field'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_middle_initial']['ui_name'] = 'Middle Name (hidden)';
  $handler->display->display_options['fields']['field_middle_initial']['label'] = '';
  $handler->display->display_options['fields']['field_middle_initial']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_middle_initial']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['field_api_classes'] = 0;
  /* Field: Suffix (hidden) */
  $handler->display->display_options['fields']['field_suffix']['id'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['table'] = 'field_data_field_suffix';
  $handler->display->display_options['fields']['field_suffix']['field'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['fields']['field_suffix']['ui_name'] = 'Suffix (hidden)';
  $handler->display->display_options['fields']['field_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_suffix']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_suffix']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_suffix']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_suffix']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_suffix']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_suffix']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_suffix']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_suffix']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Member';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_first_name] [field_middle_initial] [field_last_name] [field_suffix]
';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Content: Amount Due */
  $handler->display->display_options['fields']['field_amount_due']['id'] = 'field_amount_due';
  $handler->display->display_options['fields']['field_amount_due']['table'] = 'field_data_field_amount_due';
  $handler->display->display_options['fields']['field_amount_due']['field'] = 'field_amount_due';
  $handler->display->display_options['fields']['field_amount_due']['label'] = 'Amount ';
  $handler->display->display_options['fields']['field_amount_due']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_amount_due']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_amount_due']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_amount_due']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_amount_due']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_amount_due']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_amount_due']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_amount_due']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_amount_due']['field_api_classes'] = 0;
  /* Field: Content: Meeting/Event Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = 'Amount/Due Date';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['text'] = '[field_amount_due]<BR>
Due: [field_date]';
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Field: Amount Paid */
  $handler->display->display_options['fields']['field_amount_paid']['id'] = 'field_amount_paid';
  $handler->display->display_options['fields']['field_amount_paid']['table'] = 'field_data_field_amount_paid';
  $handler->display->display_options['fields']['field_amount_paid']['field'] = 'field_amount_paid';
  $handler->display->display_options['fields']['field_amount_paid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_amount_paid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_amount_paid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_amount_paid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_amount_paid']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_amount_paid']['field_api_classes'] = 0;
  /* Field: Field: Date Paid */
  $handler->display->display_options['fields']['field_date_paid']['id'] = 'field_date_paid';
  $handler->display->display_options['fields']['field_date_paid']['table'] = 'field_data_field_date_paid';
  $handler->display->display_options['fields']['field_date_paid']['field'] = 'field_date_paid';
  $handler->display->display_options['fields']['field_date_paid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_paid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['text'] = '[field_date_paid]';
  $handler->display->display_options['fields']['field_date_paid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date_paid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date_paid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_date_paid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date_paid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date_paid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_date_paid']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date_paid']['field_api_classes'] = 0;
  /* Field: Field: Dues Check# */
  $handler->display->display_options['fields']['field_document']['id'] = 'field_document';
  $handler->display->display_options['fields']['field_document']['table'] = 'field_data_field_document';
  $handler->display->display_options['fields']['field_document']['field'] = 'field_document';
  $handler->display->display_options['fields']['field_document']['label'] = 'Amount/Check#';
  $handler->display->display_options['fields']['field_document']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_document']['alter']['text'] = '[field_amount_paid]<BR>
Date: [field_date_paid] <BR>
CK#: [field_document]';
  $handler->display->display_options['fields']['field_document']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_document']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_document']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_document']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  $handler->display->display_options['fields']['field_document']['field_api_classes'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'STATUS';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
   $node=node_load($row->nid);
   if (isset($node->field_amount_paid[\'und\'])) {
      if ($node->field_amount_paid[\'und\'][0][\'value\'] < $node->field_amount_due[\'und\'][0][\'value\']) {
         print "UNPAID";
     }
      if ($node->field_amount_paid[\'und\'][0][\'value\'] > $node->field_amount_due[\'und\'][0][\'value\']) {
         print "OVERPAID";
     }
      if ($node->field_amount_paid[\'und\'][0][\'value\'] == $node->field_amount_due[\'und\'][0][\'value\']) {
         print "PAID";
     }
  } else {
    print "UNPAID";
  }
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Chapter/Club (field_chapter) */
  $handler->display->display_options['arguments']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['arguments']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_options']['code'] = 'if (function_exists(\'club_base_get_chapter\')) { 
  return club_base_get_chapter();
} else {
  drupal_set_message(t(\'Error: function "club_base_get_chapter" not found; make sure "club_base" module is installed and activated\'));
}';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_chapter_target_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_chapter_target_id']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dues' => 'dues',
  );
  /* Filter criterion: Content: Meeting/Event Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date Due';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-3:+0';
  /* Filter criterion: Field: Last Name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'field_uid_target_id';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last Name (or part)';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'dues-history';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Dues History';
  $handler->display->display_options['menu']['description'] = 'Display Dues Receivable History';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-dues';
  $handler->display->display_options['menu']['context'] = 0;
  $export['dues_history'] = $view;

  $view = new view;
  $view->name = 'dues_policy';
  $view->description = 'Display membership policy for Chapter/Club';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dues Policy';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dues Policies';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_chapter' => 'field_chapter',
    'title_1' => 'title_1',
    'title' => 'title',
    'field_policy_date_range' => 'field_policy_date_range',
    'field_dues' => 'field_dues',
    'field_initiation_fee' => 'field_initiation_fee',
    'field_dues_application_date' => 'field_dues_application_date',
    'field_dues_period' => 'field_dues_period',
    'edit_node' => 'edit_node',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_chapter' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_policy_date_range' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dues' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_initiation_fee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_dues_application_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dues_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['relationships']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['relationships']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  $handler->display->display_options['relationships']['field_chapter_target_id']['required'] = 1;
  /* Field: nid (hidden) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'nid (hidden)';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Club/Chapter (hidden) */
  $handler->display->display_options['fields']['field_chapter']['id'] = 'field_chapter';
  $handler->display->display_options['fields']['field_chapter']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['fields']['field_chapter']['field'] = 'field_chapter';
  $handler->display->display_options['fields']['field_chapter']['ui_name'] = 'Club/Chapter (hidden)';
  $handler->display->display_options['fields']['field_chapter']['label'] = '';
  $handler->display->display_options['fields']['field_chapter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_chapter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_chapter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_chapter']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_chapter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_chapter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chapter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_chapter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_chapter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_chapter']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_chapter']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_chapter']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_chapter_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Chapter/Club';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Policy Title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Policy Date Range */
  $handler->display->display_options['fields']['field_policy_date_range']['id'] = 'field_policy_date_range';
  $handler->display->display_options['fields']['field_policy_date_range']['table'] = 'field_data_field_policy_date_range';
  $handler->display->display_options['fields']['field_policy_date_range']['field'] = 'field_policy_date_range';
  $handler->display->display_options['fields']['field_policy_date_range']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_policy_date_range']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_policy_date_range']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_policy_date_range']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_policy_date_range']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_policy_date_range']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_policy_date_range']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_policy_date_range']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_policy_date_range']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_policy_date_range']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_policy_date_range']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_policy_date_range']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_policy_date_range']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_policy_date_range']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_policy_date_range']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_policy_date_range']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_policy_date_range']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_policy_date_range']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_policy_date_range']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_policy_date_range']['field_api_classes'] = 0;
  /* Field: Content: Dues */
  $handler->display->display_options['fields']['field_dues']['id'] = 'field_dues';
  $handler->display->display_options['fields']['field_dues']['table'] = 'field_data_field_dues';
  $handler->display->display_options['fields']['field_dues']['field'] = 'field_dues';
  $handler->display->display_options['fields']['field_dues']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dues']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dues']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dues']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dues']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dues']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dues']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dues']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dues']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dues']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_dues']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dues']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dues']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dues']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_dues']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dues']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dues']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dues']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dues']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dues']['field_api_classes'] = 0;
  /* Field: Content: Initiation Fee */
  $handler->display->display_options['fields']['field_initiation_fee']['id'] = 'field_initiation_fee';
  $handler->display->display_options['fields']['field_initiation_fee']['table'] = 'field_data_field_initiation_fee';
  $handler->display->display_options['fields']['field_initiation_fee']['field'] = 'field_initiation_fee';
  $handler->display->display_options['fields']['field_initiation_fee']['label'] = 'Initiation';
  $handler->display->display_options['fields']['field_initiation_fee']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_initiation_fee']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_initiation_fee']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_initiation_fee']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_initiation_fee']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_initiation_fee']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_initiation_fee']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_initiation_fee']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_initiation_fee']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_initiation_fee']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_initiation_fee']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_initiation_fee']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_initiation_fee']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_initiation_fee']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_initiation_fee']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_initiation_fee']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_initiation_fee']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_initiation_fee']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_initiation_fee']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_initiation_fee']['field_api_classes'] = 0;
  /* Field: Content: Renewal Approval */
  $handler->display->display_options['fields']['field_renewal_approval']['id'] = 'field_renewal_approval';
  $handler->display->display_options['fields']['field_renewal_approval']['table'] = 'field_data_field_renewal_approval';
  $handler->display->display_options['fields']['field_renewal_approval']['field'] = 'field_renewal_approval';
  $handler->display->display_options['fields']['field_renewal_approval']['label'] = 'Renewal';
  $handler->display->display_options['fields']['field_renewal_approval']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_renewal_approval']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_renewal_approval']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_renewal_approval']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_renewal_approval']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_renewal_approval']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_renewal_approval']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_renewal_approval']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_renewal_approval']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_renewal_approval']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_renewal_approval']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_renewal_approval']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_renewal_approval']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_renewal_approval']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_renewal_approval']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_renewal_approval']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_renewal_approval']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_renewal_approval']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_renewal_approval']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_renewal_approval']['field_api_classes'] = 0;
  /* Field: Content: Dues Application Rule */
  $handler->display->display_options['fields']['field_dues_application_date']['id'] = 'field_dues_application_date';
  $handler->display->display_options['fields']['field_dues_application_date']['table'] = 'field_data_field_dues_application_date';
  $handler->display->display_options['fields']['field_dues_application_date']['field'] = 'field_dues_application_date';
  $handler->display->display_options['fields']['field_dues_application_date']['label'] = 'Renew By';
  $handler->display->display_options['fields']['field_dues_application_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dues_application_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dues_application_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dues_application_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dues_application_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dues_application_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dues_application_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dues_application_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dues_application_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dues_application_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_dues_application_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dues_application_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dues_application_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dues_application_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_dues_application_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dues_application_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dues_application_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dues_application_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dues_application_date']['field_api_classes'] = 0;
  /* Field: Content: Dues Period */
  $handler->display->display_options['fields']['field_dues_period']['id'] = 'field_dues_period';
  $handler->display->display_options['fields']['field_dues_period']['table'] = 'field_data_field_dues_period';
  $handler->display->display_options['fields']['field_dues_period']['field'] = 'field_dues_period';
  $handler->display->display_options['fields']['field_dues_period']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dues_period']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dues_period']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dues_period']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dues_period']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dues_period']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dues_period']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dues_period']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dues_period']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dues_period']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_dues_period']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dues_period']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dues_period']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dues_period']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_dues_period']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dues_period']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dues_period']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dues_period']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dues_period']['field_api_classes'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Field: Clone */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Clone';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Clone';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/clone';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Sort criterion: Field: Chapter/Club (field_chapter) */
  $handler->display->display_options['sorts']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['sorts']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['sorts']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dues_policy' => 'dues_policy',
  );
  /* Filter criterion: Superuser or Policies for this admin only */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['ui_name'] = 'Superuser or Policies for this admin only';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'global $user;
$usernode = user_load($user->uid);
if ($user->uid == 1) {
  return FALSE;    // display ALL records
} else {
  $node = node_load($data->nid);
  if ($node->field_chapter[\'und\'][0][\'target_id\'] == $usernode->field_chapter[\'und\'][0][\'target_id\']) {
    return FALSE;
  }
}
return TRUE;';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view-dues-policy';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Dues Policies';
  $handler->display->display_options['menu']['description'] = 'Display membership dues policies for all chapters';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-dues';
  $handler->display->display_options['menu']['context'] = 0;
  $export['dues_policy'] = $view;

  return $export;
}
