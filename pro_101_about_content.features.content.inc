<?php
/**
 * @file
 * pro_101_about_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function pro_101_about_content_content_defaults() {
  $content = array();

  $content['about'] = (object) array(
    'exported_path' => 'about',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/about',
      'router_path' => 'node/%',
      'link_title' => 'About',
      'options' => array(),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '0',
      'identifier' => 'main-menu:node-name/about',
    ),
    'title' => 'About',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1335936740',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'about',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<div id="about_graphic"><img alt="" class="media-image attr__typeof__foaf:Image img__fid__9 img__view_mode__teaser attr__format__teaser" src="http://pro101b.platdev.info/sites/pro101b.platdev.info/files/styles/medium/public/default_images/phoenix-the-legendary-bird.jpg" style="width: 220px; height: 220px;" title="" typeof="foaf:Image" /></div>

<h2 class="node-title">Why you should choose us to represent you.</h2>

<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
  );

  $content['about_masthead'] = (object) array(
    'exported_path' => 'block/about-masthead',
    'title' => 'About Masthead',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'block',
    'language' => 'und',
    'created' => '1360192914',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'about_masthead',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<div id="about_graphic">
	<img alt="" class="media-image attr__typeof__foaf:Image img__fid__53 img__view_mode__teaser attr__format__teaser" height="216" src="http://pro101a.platdev.info/sites/pro101a.platdev.info/files/styles/medium/public/natasja1.jpg" title="" typeof="foaf:Image" width="220" />
</div>

<h2 class="node-title">
	Why you should choose us to represent you.
</h2>

<p>
	Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.
</p>
',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
  );

return $content;
}
