<?php
/**
 * @file
 * bibliomega_frontend.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bibliomega_frontend_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-search-menu:<front>
  $menu_links['menu-search-menu:<front>'] = array(
    'menu_name' => 'menu-search-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Alt',
    'options' => array(
      'attributes' => array(
        'title' => 'Søgning på alle materialer',
      ),
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-search-menu:http://www.dbc.dk/1
  $menu_links['menu-search-menu:http://www.dbc.dk/1'] = array(
    'menu_name' => 'menu-search-menu',
    'link_path' => 'http://www.dbc.dk/1',
    'router_path' => '',
    'link_title' => 'Emneoversigt',
    'options' => array(
      'attributes' => array(
        'title' => 'Færdiglavede søgninger på en lang række emner. ',
      ),
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-search-menu:http://www.dbc.dk/2
  $menu_links['menu-search-menu:http://www.dbc.dk/2'] = array(
    'menu_name' => 'menu-search-menu',
    'link_path' => 'http://www.dbc.dk/2',
    'router_path' => '',
    'link_title' => 'Artikler',
    'options' => array(
      'attributes' => array(
        'title' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit.',
      ),
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: menu-search-menu:http://www.dbc.dk/3
  $menu_links['menu-search-menu:http://www.dbc.dk/3'] = array(
    'menu_name' => 'menu-search-menu',
    'link_path' => 'http://www.dbc.dk/3',
    'router_path' => '',
    'link_title' => 'Bøger',
    'options' => array(
      'attributes' => array(
        'title' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit.',
      ),
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
  );
  // Exported menu link: menu-search-menu:http://www.dbc.dk/4
  $menu_links['menu-search-menu:http://www.dbc.dk/4'] = array(
    'menu_name' => 'menu-search-menu',
    'link_path' => 'http://www.dbc.dk/4',
    'router_path' => '',
    'link_title' => 'Film',
    'options' => array(
      'attributes' => array(
        'title' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit.',
      ),
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
  );
  // Exported menu link: menu-search-menu:http://www.dbc.dk/5
  $menu_links['menu-search-menu:http://www.dbc.dk/5'] = array(
    'menu_name' => 'menu-search-menu',
    'link_path' => 'http://www.dbc.dk/5',
    'router_path' => '',
    'link_title' => 'Musik',
    'options' => array(
      'attributes' => array(
        'title' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit.',
      ),
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: menu-search-menu:http://www.dbc.dk/6
  $menu_links['menu-search-menu:http://www.dbc.dk/6'] = array(
    'menu_name' => 'menu-search-menu',
    'link_path' => 'http://www.dbc.dk/6',
    'router_path' => '',
    'link_title' => 'Net',
    'options' => array(
      'attributes' => array(
        'title' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit.',
      ),
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
  );
  // Exported menu link: menu-search-menu:http://www.dbc.dk/7
  $menu_links['menu-search-menu:http://www.dbc.dk/7'] = array(
    'menu_name' => 'menu-search-menu',
    'link_path' => 'http://www.dbc.dk/7',
    'router_path' => '',
    'link_title' => 'Noder',
    'options' => array(
      'attributes' => array(
        'title' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit.',
      ),
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '7',
  );
  // Exported menu link: menu-search-menu:http://www.dbc.dk/8
  $menu_links['menu-search-menu:http://www.dbc.dk/8'] = array(
    'menu_name' => 'menu-search-menu',
    'link_path' => 'http://www.dbc.dk/8',
    'router_path' => '',
    'link_title' => 'Spil',
    'options' => array(
      'attributes' => array(
        'title' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit.',
      ),
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '8',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Alt');
  t('Artikler');
  t('Bøger');
  t('Emneoversigt');
  t('Film');
  t('Musik');
  t('Net');
  t('Noder');
  t('Spil');


  return $menu_links;
}
