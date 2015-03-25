<?php
/**
 * @file
 * feature_manage_relationships_vbo.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_manage_relationships_vbo_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'manage_relationships';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_relationship';
  $view->human_name = 'manage_relationships';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage relationships';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: CiviCRM Relationships: Contact ID A */
  $handler->display->display_options['relationships']['contact_id_a_']['id'] = 'contact_id_a_';
  $handler->display->display_options['relationships']['contact_id_a_']['table'] = 'civicrm_relationship';
  $handler->display->display_options['relationships']['contact_id_a_']['field'] = 'contact_id_a_';
  /* Relationship: CiviCRM Relationships: Contact ID B */
  $handler->display->display_options['relationships']['contact_id_b_']['id'] = 'contact_id_b_';
  $handler->display->display_options['relationships']['contact_id_b_']['table'] = 'civicrm_relationship';
  $handler->display->display_options['relationships']['contact_id_b_']['field'] = 'contact_id_b_';
  /* Field: Bulk operations: CiviCRM Relationship */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_check_relationship_list_for_trainer' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_check_relationship_list_for_volunteer' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Modify relationship',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'end_date' => 'end_date',
          'is_active' => 'is_active',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_relationship_end_date' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CiviCRM Relationships: Relationship ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: CiviCRM Contacts: Display Name */
  $handler->display->display_options['fields']['display_name']['id'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['display_name']['field'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['relationship'] = 'contact_id_a_';
  $handler->display->display_options['fields']['display_name']['label'] = 'Contact A';
  $handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 1;
  /* Field: CiviCRM Relationships: Relationship Type A-to-B */
  $handler->display->display_options['fields']['relationship_type']['id'] = 'relationship_type';
  $handler->display->display_options['fields']['relationship_type']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['relationship_type']['field'] = 'relationship_type';
  /* Field: CiviCRM Contacts: Display Name */
  $handler->display->display_options['fields']['display_name_1']['id'] = 'display_name_1';
  $handler->display->display_options['fields']['display_name_1']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['display_name_1']['field'] = 'display_name';
  $handler->display->display_options['fields']['display_name_1']['relationship'] = 'contact_id_b_';
  $handler->display->display_options['fields']['display_name_1']['label'] = 'Contact B';
  $handler->display->display_options['fields']['display_name_1']['link_to_civicrm_contact'] = 1;
  /* Field: CiviCRM Relationships: Relationship Type ID */
  $handler->display->display_options['fields']['relationship_type_id']['id'] = 'relationship_type_id';
  $handler->display->display_options['fields']['relationship_type_id']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['relationship_type_id']['field'] = 'relationship_type_id';
  $handler->display->display_options['fields']['relationship_type_id']['separator'] = '';
  /* Field: CiviCRM Relationships: Contact ID A */
  $handler->display->display_options['fields']['contact_id_a_']['id'] = 'contact_id_a_';
  $handler->display->display_options['fields']['contact_id_a_']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['contact_id_a_']['field'] = 'contact_id_a_';
  $handler->display->display_options['fields']['contact_id_a_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id_a_']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_id_a_']['alter']['path'] = 'civicrm/contact/view?cid=[contact_id_a_]';
  /* Field: CiviCRM Relationships: Contact ID B */
  $handler->display->display_options['fields']['contact_id_b_']['id'] = 'contact_id_b_';
  $handler->display->display_options['fields']['contact_id_b_']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['contact_id_b_']['field'] = 'contact_id_b_';
  $handler->display->display_options['fields']['contact_id_b_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id_b_']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_id_b_']['alter']['path'] = 'civicrm/contact/view?cid=[contact_id_b_]';
  /* Field: CiviCRM Relationships: Is Relationship Active */
  $handler->display->display_options['fields']['is_active']['id'] = 'is_active';
  $handler->display->display_options['fields']['is_active']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['is_active']['field'] = 'is_active';
  $handler->display->display_options['fields']['is_active']['not'] = 0;
  /* Field: CiviCRM Relationships: Start Date */
  $handler->display->display_options['fields']['start_date']['id'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['start_date']['field'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['date_format'] = 'short';
  $handler->display->display_options['fields']['start_date']['second_date_format'] = 'privatemsg_current_day';
  /* Field: CiviCRM Relationships: End Date */
  $handler->display->display_options['fields']['end_date']['id'] = 'end_date';
  $handler->display->display_options['fields']['end_date']['table'] = 'civicrm_relationship';
  $handler->display->display_options['fields']['end_date']['field'] = 'end_date';
  $handler->display->display_options['fields']['end_date']['date_format'] = 'short';
  $handler->display->display_options['fields']['end_date']['second_date_format'] = 'privatemsg_current_day';
  /* Filter criterion: CiviCRM Contacts: Display Name */
  $handler->display->display_options['filters']['display_name']['id'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['display_name']['field'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['relationship'] = 'contact_id_a_';
  $handler->display->display_options['filters']['display_name']['operator'] = 'contains';
  $handler->display->display_options['filters']['display_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['display_name']['expose']['operator_id'] = 'display_name_op';
  $handler->display->display_options['filters']['display_name']['expose']['label'] = 'Contact A';
  $handler->display->display_options['filters']['display_name']['expose']['operator'] = 'display_name_op';
  $handler->display->display_options['filters']['display_name']['expose']['identifier'] = 'display_name';
  $handler->display->display_options['filters']['display_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    37 => 0,
    39 => 0,
    36 => 0,
    15 => 0,
    6 => 0,
    4 => 0,
    11 => 0,
    12 => 0,
    43 => 0,
    41 => 0,
    42 => 0,
    13 => 0,
    3 => 0,
    30 => 0,
    18 => 0,
    5 => 0,
    32 => 0,
    33 => 0,
    44 => 0,
    7 => 0,
    40 => 0,
    29 => 0,
    31 => 0,
    17 => 0,
    34 => 0,
    16 => 0,
    38 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
  );
  /* Filter criterion: CiviCRM Contacts: Display Name */
  $handler->display->display_options['filters']['display_name_1']['id'] = 'display_name_1';
  $handler->display->display_options['filters']['display_name_1']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['display_name_1']['field'] = 'display_name';
  $handler->display->display_options['filters']['display_name_1']['relationship'] = 'contact_id_b_';
  $handler->display->display_options['filters']['display_name_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['display_name_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['display_name_1']['expose']['operator_id'] = 'display_name_1_op';
  $handler->display->display_options['filters']['display_name_1']['expose']['label'] = 'Contact B';
  $handler->display->display_options['filters']['display_name_1']['expose']['operator'] = 'display_name_1_op';
  $handler->display->display_options['filters']['display_name_1']['expose']['identifier'] = 'display_name_1';
  $handler->display->display_options['filters']['display_name_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    37 => 0,
    39 => 0,
    36 => 0,
    15 => 0,
    6 => 0,
    4 => 0,
    11 => 0,
    12 => 0,
    43 => 0,
    41 => 0,
    42 => 0,
    13 => 0,
    3 => 0,
    30 => 0,
    18 => 0,
    5 => 0,
    32 => 0,
    33 => 0,
    44 => 0,
    7 => 0,
    40 => 0,
    29 => 0,
    31 => 0,
    17 => 0,
    34 => 0,
    16 => 0,
    38 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
  );
  /* Filter criterion: CiviCRM Relationships: End Date */
  $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['table'] = 'civicrm_relationship';
  $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['exposed'] = TRUE;
  $handler->display->display_options['filters']['end_date']['expose']['operator_id'] = 'end_date_op';
  $handler->display->display_options['filters']['end_date']['expose']['label'] = 'End Date';
  $handler->display->display_options['filters']['end_date']['expose']['operator'] = 'end_date_op';
  $handler->display->display_options['filters']['end_date']['expose']['identifier'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    37 => 0,
    39 => 0,
    36 => 0,
    15 => 0,
    6 => 0,
    4 => 0,
    11 => 0,
    12 => 0,
    43 => 0,
    41 => 0,
    42 => 0,
    13 => 0,
    3 => 0,
    30 => 0,
    18 => 0,
    5 => 0,
    32 => 0,
    33 => 0,
    44 => 0,
    7 => 0,
    40 => 0,
    29 => 0,
    31 => 0,
    17 => 0,
    34 => 0,
    16 => 0,
    38 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
  );
  /* Filter criterion: CiviCRM Relationships: Is Relationship Active */
  $handler->display->display_options['filters']['is_active']['id'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['table'] = 'civicrm_relationship';
  $handler->display->display_options['filters']['is_active']['field'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['value'] = 'All';
  $handler->display->display_options['filters']['is_active']['exposed'] = TRUE;
  $handler->display->display_options['filters']['is_active']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['is_active']['expose']['label'] = 'True';
  $handler->display->display_options['filters']['is_active']['expose']['operator'] = 'is_active_op';
  $handler->display->display_options['filters']['is_active']['expose']['identifier'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    37 => 0,
    39 => 0,
    36 => 0,
    15 => 0,
    6 => 0,
    4 => 0,
    11 => 0,
    12 => 0,
    43 => 0,
    41 => 0,
    42 => 0,
    13 => 0,
    3 => 0,
    30 => 0,
    18 => 0,
    5 => 0,
    32 => 0,
    33 => 0,
    44 => 0,
    7 => 0,
    40 => 0,
    29 => 0,
    31 => 0,
    17 => 0,
    34 => 0,
    16 => 0,
    38 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
  );
  /* Filter criterion: CiviCRM Relationships: Relationship Type A-to-B */
  $handler->display->display_options['filters']['relationship_type']['id'] = 'relationship_type';
  $handler->display->display_options['filters']['relationship_type']['table'] = 'civicrm_relationship';
  $handler->display->display_options['filters']['relationship_type']['field'] = 'relationship_type';
  $handler->display->display_options['filters']['relationship_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['relationship_type']['expose']['operator_id'] = 'relationship_type_op';
  $handler->display->display_options['filters']['relationship_type']['expose']['label'] = 'Relationship Type A-to-B';
  $handler->display->display_options['filters']['relationship_type']['expose']['operator'] = 'relationship_type_op';
  $handler->display->display_options['filters']['relationship_type']['expose']['identifier'] = 'relationship_type';
  $handler->display->display_options['filters']['relationship_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    37 => 0,
    39 => 0,
    36 => 0,
    15 => 0,
    6 => 0,
    4 => 0,
    11 => 0,
    12 => 0,
    43 => 0,
    41 => 0,
    42 => 0,
    13 => 0,
    3 => 0,
    30 => 0,
    18 => 0,
    5 => 0,
    32 => 0,
    33 => 0,
    44 => 0,
    7 => 0,
    40 => 0,
    29 => 0,
    31 => 0,
    17 => 0,
    34 => 0,
    16 => 0,
    38 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
  );
  /* Filter criterion: CiviCRM Relationships: Relationship Type ID */
  $handler->display->display_options['filters']['relationship_type_id']['id'] = 'relationship_type_id';
  $handler->display->display_options['filters']['relationship_type_id']['table'] = 'civicrm_relationship';
  $handler->display->display_options['filters']['relationship_type_id']['field'] = 'relationship_type_id';
  $handler->display->display_options['filters']['relationship_type_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['relationship_type_id']['expose']['operator_id'] = 'relationship_type_id_op';
  $handler->display->display_options['filters']['relationship_type_id']['expose']['label'] = 'Relationship Type ID';
  $handler->display->display_options['filters']['relationship_type_id']['expose']['operator'] = 'relationship_type_id_op';
  $handler->display->display_options['filters']['relationship_type_id']['expose']['identifier'] = 'relationship_type_id';
  $handler->display->display_options['filters']['relationship_type_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    37 => 0,
    39 => 0,
    36 => 0,
    15 => 0,
    6 => 0,
    4 => 0,
    11 => 0,
    12 => 0,
    43 => 0,
    41 => 0,
    42 => 0,
    13 => 0,
    3 => 0,
    30 => 0,
    18 => 0,
    5 => 0,
    32 => 0,
    33 => 0,
    44 => 0,
    7 => 0,
    40 => 0,
    29 => 0,
    31 => 0,
    17 => 0,
    34 => 0,
    16 => 0,
    38 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
  );
  /* Filter criterion: CiviCRM Relationships: Start Date */
  $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['table'] = 'civicrm_relationship';
  $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start Date';
  $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14 => 0,
    45 => 0,
    46 => 0,
    47 => 0,
    37 => 0,
    39 => 0,
    36 => 0,
    15 => 0,
    6 => 0,
    4 => 0,
    11 => 0,
    12 => 0,
    43 => 0,
    41 => 0,
    42 => 0,
    13 => 0,
    3 => 0,
    30 => 0,
    18 => 0,
    5 => 0,
    32 => 0,
    33 => 0,
    44 => 0,
    7 => 0,
    40 => 0,
    29 => 0,
    31 => 0,
    17 => 0,
    34 => 0,
    16 => 0,
    38 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'manage_relationships';
  $translatables['manage_relationships'] = array(
    t('Master'),
    t('Manage relationships'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('CiviCRM Contact A'),
    t('CiviCRM Contact B'),
    t('CiviCRM Relationship'),
    t('- Choose an operation -'),
    t('Modify relationship'),
    t('Relationship ID'),
    t('.'),
    t('Contact A'),
    t('Relationship Type A-to-B'),
    t('Contact B'),
    t('Relationship Type ID'),
    t('Contact ID A'),
    t('Contact ID B'),
    t('Is Relationship Active'),
    t('Start Date'),
    t('End Date'),
    t('True'),
    t('Page'),
  );
  $export['manage_relationships'] = $view;

  return $export;
}
