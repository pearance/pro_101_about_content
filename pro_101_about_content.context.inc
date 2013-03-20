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
        'nodeblock-about_title' => array(
          'module' => 'nodeblock',
          'delta' => 'about_title',
          'region' => 'impact_1',
          'weight' => 0,
        ),
        'nodeblock-about_masthead' => array(
          'module' => 'nodeblock',
          'delta' => 'about_masthead',
          'region' => 'pre_1',
          'weight' => 0,
        ),
        'nodeblock-about_image' => array(
          'module' => 'nodeblock',
          'delta' => 'about_image',
          'region' => 'pre_2',
          'weight' => 0,
        ),
        'views-Professionals-pro_team_block' => array(
          'module' => 'views',
          'delta' => 'Professionals-pro_team_block',
          'region' => 'content',
          'weight' => 1,
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'i_beam_layout',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['about'] = $context;

  return $export;
}
