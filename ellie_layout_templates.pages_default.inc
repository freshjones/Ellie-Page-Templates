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
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__blank';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Blank',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => 'html logged-in no-sidebars',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'tester*',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->uuid = 'ef0ad9f2-4aa6-4f19-b6c9-cc5fe3902bda';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ec039870-439f-474c-b2b8-9c2bbdfdad99';
  $pane->panel = 'middle';
  $pane->type = 'page_content';
  $pane->subtype = 'page_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_page_content_1',
    'override_title' => 1,
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
  $pane->uuid = 'ec039870-439f-474c-b2b8-9c2bbdfdad99';
  $display->content['new-ec039870-439f-474c-b2b8-9c2bbdfdad99'] = $pane;
  $display->panels['middle'][0] = 'new-ec039870-439f-474c-b2b8-9c2bbdfdad99';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ec039870-439f-474c-b2b8-9c2bbdfdad99';
  $handler->conf['display'] = $display;

  $export['site_template__blank'] = $handler;


  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__agency-one';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Agency One',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => 'html logged-in no-sidebars page-node page-node- page-node-%node:nid node-type-pages',
    'body_classes_to_add' => 'site-theme-one',
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
  $pane->pid = 'new-43691954-303e-4e14-a3cd-e8143be472a9';
  $pane->panel = 'middle';
  $pane->type = 'ellie_site_logo';
  $pane->subtype = 'ellie_site_logo';
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
  $pane->uuid = '43691954-303e-4e14-a3cd-e8143be472a9';
  $display->content['new-43691954-303e-4e14-a3cd-e8143be472a9'] = $pane;
  $display->panels['middle'][0] = 'new-43691954-303e-4e14-a3cd-e8143be472a9';
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
  $display->title_pane = '0';
  $handler->conf['display'] = $display;

  $export['site_template__agency-one'] = $handler;

 

  
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__agency-two';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Agency Two',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => 'html logged-in no-sidebars page-node page-node- page-node-%node:nid node-type-pages',
    'body_classes_to_add' => 'site-theme-two',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'agency-two',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b1a0c23f-52ff-44f5-8ef0-b4712f02d3ec';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f9ebdf14-0a01-42fd-97cc-8324db70be21';
  $pane->panel = 'middle';
  $pane->type = 'ellie_site_logo';
  $pane->subtype = 'ellie_site_logo';
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
  $pane->uuid = 'f9ebdf14-0a01-42fd-97cc-8324db70be21';
  $display->content['new-f9ebdf14-0a01-42fd-97cc-8324db70be21'] = $pane;
  $display->panels['middle'][0] = 'new-f9ebdf14-0a01-42fd-97cc-8324db70be21';
  $pane = new stdClass();
  $pane->pid = 'new-70dd77e1-8f8e-469a-9e64-e04c0020f3b3';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'system-main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
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
  $pane->uuid = '70dd77e1-8f8e-469a-9e64-e04c0020f3b3';
  $display->content['new-70dd77e1-8f8e-469a-9e64-e04c0020f3b3'] = $pane;
  $display->panels['middle'][1] = 'new-70dd77e1-8f8e-469a-9e64-e04c0020f3b3';
  $pane = new stdClass();
  $pane->pid = 'new-44b0eab4-6894-4ef3-be4c-bf033c1c420a';
  $pane->panel = 'middle';
  $pane->type = 'pane_messages';
  $pane->subtype = 'pane_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '44b0eab4-6894-4ef3-be4c-bf033c1c420a';
  $display->content['new-44b0eab4-6894-4ef3-be4c-bf033c1c420a'] = $pane;
  $display->panels['middle'][2] = 'new-44b0eab4-6894-4ef3-be4c-bf033c1c420a';
  $pane = new stdClass();
  $pane->pid = 'new-00503900-1d05-40ec-b7a5-88856081112d';
  $pane->panel = 'middle';
  $pane->type = 'page_content';
  $pane->subtype = 'page_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_page_content_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '00503900-1d05-40ec-b7a5-88856081112d';
  $display->content['new-00503900-1d05-40ec-b7a5-88856081112d'] = $pane;
  $display->panels['middle'][3] = 'new-00503900-1d05-40ec-b7a5-88856081112d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;

  $export['site_template__agency-two'] = $handler;




  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__agency-three';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Agency Three',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => 'html logged-in no-sidebars page-node page-node- page-node-%node:nid node-type-pages',
    'body_classes_to_add' => 'site-theme-three',
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
  $pane->pid = 'new-c908cb9f-0e58-46ee-ba8b-313242d85870';
  $pane->panel = 'middle';
  $pane->type = 'ellie_site_logo';
  $pane->subtype = 'ellie_site_logo';
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
  $pane->uuid = 'c908cb9f-0e58-46ee-ba8b-313242d85870';
  $display->content['new-c908cb9f-0e58-46ee-ba8b-313242d85870'] = $pane;
  $display->panels['middle'][0] = 'new-c908cb9f-0e58-46ee-ba8b-313242d85870';
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
  $display->title_pane = '0';
  $handler->conf['display'] = $display;

  $export['site_template__agency-three'] = $handler;


  return $export;
}