<?php
/**
 * @file
 * pro_101_about_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pro_101_about_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-Professionals-pro_team_block' => array(
          'module' => 'views',
          'delta' => 'Professionals-pro_team_block',
          'region' => 'content',
          'weight' => '30',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'single_column',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['about'] = $context;

  return $export;
}
