<?php
/**
 * @file
 * ellie_layout_templates.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ellie_layout_templates_strongarm() {

  $export = array();

  $siteTemplateVariants = _set_default_site_templates();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_page_manager_handlers';
  $strongarm->value = $siteTemplateVariants; 
  $export['default_page_manager_handlers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_enabled';
  $strongarm->value = TRUE;
  $export['panels_everywhere_site_template_enabled'] = $strongarm;

  return $export;
  
}

function _set_default_site_templates() 
{

  /*
  array(
    'site_template__agency_one' => TRUE,
  );
  */

  $variant_prefix = 'site_template__agency';
  //$variants = array('one','two','three');
  $variants = array('one',);

  $selectedVariant = 'one';

  $defaultHandlers = array();

  /* turn off all site templates by default */
  foreach($variants AS $variant)
  {
    $defaultHandlers[$variant_prefix . '_' . $variant] = TRUE;
  }

  /* turn on only the site template we want */
  $defaultHandlers[$variant_prefix . '_' . $selectedVariant] = FALSE;

  return $defaultHandlers;

}