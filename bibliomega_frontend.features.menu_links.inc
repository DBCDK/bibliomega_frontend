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

  // Exported menu link: menu-bibliotek-dk-meta-menu:http://www.dbc.dk/1
  $menu_links['menu-bibliotek-dk-meta-menu:http://www.dbc.dk/1'] = array(
    'menu_name' => 'menu-bibliotek-dk-meta-menu',
    'link_path' => 'http://www.dbc.dk/1',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'en',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-bibliotek-dk-meta-menu:http://www.dbc.dk/2
  $menu_links['menu-bibliotek-dk-meta-menu:http://www.dbc.dk/2'] = array(
    'menu_name' => 'menu-bibliotek-dk-meta-menu',
    'link_path' => 'http://www.dbc.dk/2',
    'router_path' => '',
    'link_title' => 'Press room',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'en',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Exported menu link: menu-bibliotek-dk-meta-menu:http://www.dbc.dk/3
  $menu_links['menu-bibliotek-dk-meta-menu:http://www.dbc.dk/3'] = array(
    'menu_name' => 'menu-bibliotek-dk-meta-menu',
    'link_path' => 'http://www.dbc.dk/3',
    'router_path' => '',
    'link_title' => 'Blog',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
  );
  // Exported menu link: menu-bibliotek-dk-meta-menu:http://www.dbc.dk/4
  $menu_links['menu-bibliotek-dk-meta-menu:http://www.dbc.dk/4'] = array(
    'menu_name' => 'menu-bibliotek-dk-meta-menu',
    'link_path' => 'http://www.dbc.dk/4',
    'router_path' => '',
    'link_title' => 'Sitemap',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
  );
  // Exported menu link: menu-bibliotek-dk-meta-menu:http://www.dbc.dk/5
  $menu_links['menu-bibliotek-dk-meta-menu:http://www.dbc.dk/5'] = array(
    'menu_name' => 'menu-bibliotek-dk-meta-menu',
    'link_path' => 'http://www.dbc.dk/5',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'en',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '8',
  );
  // Exported menu link: menu-bibliotek-dk-meta-menu:http://www.dbc.dk/6
  $menu_links['menu-bibliotek-dk-meta-menu:http://www.dbc.dk/6'] = array(
    'menu_name' => 'menu-bibliotek-dk-meta-menu',
    'link_path' => 'http://www.dbc.dk/6',
    'router_path' => '',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'en',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Exported menu link: menu-bibliotek-dk-meta-menu:http://www.dbc.dk/da/1
  $menu_links['menu-bibliotek-dk-meta-menu:http://www.dbc.dk/da/1'] = array(
    'menu_name' => 'menu-bibliotek-dk-meta-menu',
    'link_path' => 'http://www.dbc.dk/da/1',
    'router_path' => '',
    'link_title' => 'Om bibliotek.dk',
    'options' => array(
      'attributes' => array(
        'title' => '',
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
  // Exported menu link: menu-bibliotek-dk-meta-menu:http://www.dbc.dk/da/2
  $menu_links['menu-bibliotek-dk-meta-menu:http://www.dbc.dk/da/2'] = array(
    'menu_name' => 'menu-bibliotek-dk-meta-menu',
    'link_path' => 'http://www.dbc.dk/da/2',
    'router_path' => '',
    'link_title' => 'Presserum',
    'options' => array(
      'attributes' => array(
        'title' => '',
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
  // Exported menu link: menu-bibliotek-dk-meta-menu:http://www.dbc.dk/da/5
  $menu_links['menu-bibliotek-dk-meta-menu:http://www.dbc.dk/da/5'] = array(
    'menu_name' => 'menu-bibliotek-dk-meta-menu',
    'link_path' => 'http://www.dbc.dk/da/5',
    'router_path' => '',
    'link_title' => 'Kontakt',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '9',
  );
  // Exported menu link: menu-bibliotek-dk-meta-menu:http://www.dbc.dk/da/6
  $menu_links['menu-bibliotek-dk-meta-menu:http://www.dbc.dk/da/6'] = array(
    'menu_name' => 'menu-bibliotek-dk-meta-menu',
    'link_path' => 'http://www.dbc.dk/da/6',
    'router_path' => '',
    'link_title' => 'Hjælp',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '11',
  );
  // Exported menu link: menu-bibliotek-dk-search-menu:http://www.dbc.dk/1
  $menu_links['menu-bibliotek-dk-search-menu:http://www.dbc.dk/1'] = array(
    'menu_name' => 'menu-bibliotek-dk-search-menu',
    'link_path' => 'http://www.dbc.dk/1',
    'router_path' => '',
    'link_title' => 'All',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'en',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-bibliotek-dk-search-menu:http://www.dbc.dk/9
  $menu_links['menu-bibliotek-dk-search-menu:http://www.dbc.dk/9'] = array(
    'menu_name' => 'menu-bibliotek-dk-search-menu',
    'link_path' => 'http://www.dbc.dk/9',
    'router_path' => '',
    'link_title' => 'Games',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'en',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '16',
  );
  // Exported menu link: menu-bibliotek-dk-search-menu:http://www.dbc.dk/da/1
  $menu_links['menu-bibliotek-dk-search-menu:http://www.dbc.dk/da/1'] = array(
    'menu_name' => 'menu-bibliotek-dk-search-menu',
    'link_path' => 'http://www.dbc.dk/da/1',
    'router_path' => '',
    'link_title' => 'Alt',
    'options' => array(
      'attributes' => array(
        'title' => '',
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
  // Exported menu link: menu-bibliotek-dk-search-menu:http://www.dbc.dk/da/2
  $menu_links['menu-bibliotek-dk-search-menu:http://www.dbc.dk/da/2'] = array(
    'menu_name' => 'menu-bibliotek-dk-search-menu',
    'link_path' => 'http://www.dbc.dk/da/2',
    'router_path' => '',
    'link_title' => 'Emneoversigt',
    'options' => array(
      'attributes' => array(
        'title' => '',
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
  // Exported menu link: menu-bibliotek-dk-search-menu:http://www.dbc.dk/da/3
  $menu_links['menu-bibliotek-dk-search-menu:http://www.dbc.dk/da/3'] = array(
    'menu_name' => 'menu-bibliotek-dk-search-menu',
    'link_path' => 'http://www.dbc.dk/da/3',
    'router_path' => '',
    'link_title' => 'Artikler',
    'options' => array(
      'attributes' => array(
        'title' => '',
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
  // Exported menu link: menu-bibliotek-dk-search-menu:http://www.dbc.dk/da/4
  $menu_links['menu-bibliotek-dk-search-menu:http://www.dbc.dk/da/4'] = array(
    'menu_name' => 'menu-bibliotek-dk-search-menu',
    'link_path' => 'http://www.dbc.dk/da/4',
    'router_path' => '',
    'link_title' => 'Bøger',
    'options' => array(
      'attributes' => array(
        'title' => '',
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
  // Exported menu link: menu-bibliotek-dk-search-menu:http://www.dbc.dk/da/5
  $menu_links['menu-bibliotek-dk-search-menu:http://www.dbc.dk/da/5'] = array(
    'menu_name' => 'menu-bibliotek-dk-search-menu',
    'link_path' => 'http://www.dbc.dk/da/5',
    'router_path' => '',
    'link_title' => 'Film',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '9',
  );
  // Exported menu link: menu-bibliotek-dk-search-menu:http://www.dbc.dk/da/6
  $menu_links['menu-bibliotek-dk-search-menu:http://www.dbc.dk/da/6'] = array(
    'menu_name' => 'menu-bibliotek-dk-search-menu',
    'link_path' => 'http://www.dbc.dk/da/6',
    'router_path' => '',
    'link_title' => 'Musik',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '11',
  );
  // Exported menu link: menu-bibliotek-dk-search-menu:http://www.dbc.dk/da/7
  $menu_links['menu-bibliotek-dk-search-menu:http://www.dbc.dk/da/7'] = array(
    'menu_name' => 'menu-bibliotek-dk-search-menu',
    'link_path' => 'http://www.dbc.dk/da/7',
    'router_path' => '',
    'link_title' => 'Net',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '13',
  );
  // Exported menu link: menu-bibliotek-dk-search-menu:http://www.dbc.dk/da/8
  $menu_links['menu-bibliotek-dk-search-menu:http://www.dbc.dk/da/8'] = array(
    'menu_name' => 'menu-bibliotek-dk-search-menu',
    'link_path' => 'http://www.dbc.dk/da/8',
    'router_path' => '',
    'link_title' => 'Noder',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '15',
  );
  // Exported menu link: menu-bibliotek-dk-search-menu:http://www.dbc.dk/da/9
  $menu_links['menu-bibliotek-dk-search-menu:http://www.dbc.dk/da/9'] = array(
    'menu_name' => 'menu-bibliotek-dk-search-menu',
    'link_path' => 'http://www.dbc.dk/da/9',
    'router_path' => '',
    'link_title' => 'Spil',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '17',
  );
  // Exported menu link: menu-bibliotek-dk-user-menu:http://www.dbc.dk/1
  $menu_links['menu-bibliotek-dk-user-menu:http://www.dbc.dk/1'] = array(
    'menu_name' => 'menu-bibliotek-dk-user-menu',
    'link_path' => 'http://www.dbc.dk/1',
    'router_path' => '',
    'link_title' => 'User profile',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'en',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-bibliotek-dk-user-menu:http://www.dbc.dk/2
  $menu_links['menu-bibliotek-dk-user-menu:http://www.dbc.dk/2'] = array(
    'menu_name' => 'menu-bibliotek-dk-user-menu',
    'link_path' => 'http://www.dbc.dk/2',
    'router_path' => '',
    'link_title' => 'Basket',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'en',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
  );
  // Exported menu link: menu-bibliotek-dk-user-menu:http://www.dbc.dk/3
  $menu_links['menu-bibliotek-dk-user-menu:http://www.dbc.dk/3'] = array(
    'menu_name' => 'menu-bibliotek-dk-user-menu',
    'link_path' => 'http://www.dbc.dk/3',
    'router_path' => '',
    'link_title' => 'Search history',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'en',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: menu-bibliotek-dk-user-menu:http://www.dbc.dk/da/1
  $menu_links['menu-bibliotek-dk-user-menu:http://www.dbc.dk/da/1'] = array(
    'menu_name' => 'menu-bibliotek-dk-user-menu',
    'link_path' => 'http://www.dbc.dk/da/1',
    'router_path' => '',
    'link_title' => 'Min profil',
    'options' => array(
      'attributes' => array(
        'title' => '',
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
  // Exported menu link: menu-bibliotek-dk-user-menu:http://www.dbc.dk/da/2
  $menu_links['menu-bibliotek-dk-user-menu:http://www.dbc.dk/da/2'] = array(
    'menu_name' => 'menu-bibliotek-dk-user-menu',
    'link_path' => 'http://www.dbc.dk/da/2',
    'router_path' => '',
    'link_title' => 'Min kurv',
    'options' => array(
      'attributes' => array(
        'title' => '',
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
  // Exported menu link: menu-bibliotek-dk-user-menu:http://www.dbc.dk/da/3
  $menu_links['menu-bibliotek-dk-user-menu:http://www.dbc.dk/da/3'] = array(
    'menu_name' => 'menu-bibliotek-dk-user-menu',
    'link_path' => 'http://www.dbc.dk/da/3',
    'router_path' => '',
    'link_title' => 'Mine søgninger',
    'options' => array(
      'attributes' => array(
        'title' => '',
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
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('All');
  t('Alt');
  t('Artikler');
  t('Basket');
  t('Blog');
  t('Bøger');
  t('Contact');
  t('Emneoversigt');
  t('Film');
  t('Games');
  t('Help');
  t('Hjælp');
  t('Kontakt');
  t('Min kurv');
  t('Min profil');
  t('Mine søgninger');
  t('Musik');
  t('Net');
  t('Noder');
  t('Om bibliotek.dk');
  t('Press room');
  t('Presserum');
  t('Search history');
  t('Sitemap');
  t('Spil');
  t('User profile');


  return $menu_links;
}
