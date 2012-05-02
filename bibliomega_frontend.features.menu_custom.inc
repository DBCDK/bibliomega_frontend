<?php
/**
 * @file
 * bibliomega_frontend.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function bibliomega_frontend_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-bibliotek-dk-meta-menu
  $menus['menu-bibliotek-dk-meta-menu'] = array(
    'menu_name' => 'menu-bibliotek-dk-meta-menu',
    'title' => 'Bibliotek.dk meta menu',
    'description' => 'Links for about, sitemap and other meta pages.',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-bibliotek-dk-search-menu
  $menus['menu-bibliotek-dk-search-menu'] = array(
    'menu_name' => 'menu-bibliotek-dk-search-menu',
    'title' => 'Bibliotek.dk search menu',
    'description' => 'Links for the search pages',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Exported menu: menu-bibliotek-dk-user-menu
  $menus['menu-bibliotek-dk-user-menu'] = array(
    'menu_name' => 'menu-bibliotek-dk-user-menu',
    'title' => 'Bibliotek.dk user menu',
    'description' => 'User profile, basket & search history',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Bibliotek.dk meta menu');
  t('Bibliotek.dk search menu');
  t('Bibliotek.dk user menu');
  t('Links for about, sitemap and other meta pages.');
  t('Links for the search pages');
  t('User profile, basket & search history');


  return $menus;
}
