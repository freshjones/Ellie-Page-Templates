<?php
/**
 * @file
 * ellie_layout_templates.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ellie_layout_templates_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__agency-one';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Agency One',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'agency-one',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b1a0c23f-52ff-44f5-8ef0-b4712f02d3ec';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3342666f-9ac1-4ffa-a381-8bfdf1e0cd3c';
  $pane->panel = 'middle';
  $pane->type = 'page_logo';
  $pane->subtype = 'page_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3342666f-9ac1-4ffa-a381-8bfdf1e0cd3c';
  $display->content['new-3342666f-9ac1-4ffa-a381-8bfdf1e0cd3c'] = $pane;
  $display->panels['middle'][0] = 'new-3342666f-9ac1-4ffa-a381-8bfdf1e0cd3c';
  $pane = new stdClass();
  $pane->pid = 'new-00503900-1d05-40ec-b7a5-88856081112d';
  $pane->panel = 'middle';
  $pane->type = 'page_content';
  $pane->subtype = 'page_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_page_content_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '00503900-1d05-40ec-b7a5-88856081112d';
  $display->content['new-00503900-1d05-40ec-b7a5-88856081112d'] = $pane;
  $display->panels['middle'][1] = 'new-00503900-1d05-40ec-b7a5-88856081112d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3342666f-9ac1-4ffa-a381-8bfdf1e0cd3c';
  $handler->conf['display'] = $display;
  $export['site_template__agency-one'] = $handler;

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__agency-three';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Agency Three',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'agency-three',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b1a0c23f-52ff-44f5-8ef0-b4712f02d3ec';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3342666f-9ac1-4ffa-a381-8bfdf1e0cd3c';
  $pane->panel = 'middle';
  $pane->type = 'page_logo';
  $pane->subtype = 'page_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3342666f-9ac1-4ffa-a381-8bfdf1e0cd3c';
  $display->content['new-3342666f-9ac1-4ffa-a381-8bfdf1e0cd3c'] = $pane;
  $display->panels['middle'][0] = 'new-3342666f-9ac1-4ffa-a381-8bfdf1e0cd3c';
  $pane = new stdClass();
  $pane->pid = 'new-00503900-1d05-40ec-b7a5-88856081112d';
  $pane->panel = 'middle';
  $pane->type = 'page_content';
  $pane->subtype = 'page_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_page_content_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '00503900-1d05-40ec-b7a5-88856081112d';
  $display->content['new-00503900-1d05-40ec-b7a5-88856081112d'] = $pane;
  $display->panels['middle'][1] = 'new-00503900-1d05-40ec-b7a5-88856081112d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3342666f-9ac1-4ffa-a381-8bfdf1e0cd3c';
  $handler->conf['display'] = $display;
  $export['site_template__agency-three'] = $handler;

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__agency-two';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Agency Two',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'agency-two',
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b1a0c23f-52ff-44f5-8ef0-b4712f02d3ec';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-00503900-1d05-40ec-b7a5-88856081112d';
  $pane->panel = 'left';
  $pane->type = 'page_content';
  $pane->subtype = 'page_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_page_content_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '00503900-1d05-40ec-b7a5-88856081112d';
  $display->content['new-00503900-1d05-40ec-b7a5-88856081112d'] = $pane;
  $display->panels['left'][0] = 'new-00503900-1d05-40ec-b7a5-88856081112d';
  $pane = new stdClass();
  $pane->pid = 'new-3342666f-9ac1-4ffa-a381-8bfdf1e0cd3c';
  $pane->panel = 'right';
  $pane->type = 'page_logo';
  $pane->subtype = 'page_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3342666f-9ac1-4ffa-a381-8bfdf1e0cd3c';
  $display->content['new-3342666f-9ac1-4ffa-a381-8bfdf1e0cd3c'] = $pane;
  $display->panels['right'][0] = 'new-3342666f-9ac1-4ffa-a381-8bfdf1e0cd3c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3342666f-9ac1-4ffa-a381-8bfdf1e0cd3c';
  $handler->conf['display'] = $display;
  $export['site_template__agency-two'] = $handler;

  return $export;
}
