<?php
/**
 * @file
 * bibdk_search_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function bibliomega_frontend_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-search-menu
  $menus['menu-search-menu'] = array(
    'menu_name' => 'menu-search-menu',
    'title' => 'Bibliotek.dk search menu',
    'description' => 'Links for the search pages',
    'language' => 'und',
    'i18n_mode' => '5',
  );

  // Exported menu: menu-bibliotek-dk-meta-menu
  $menus['menu-bibliotek-dk-meta-menu'] = array(
    'menu_name' => 'menu-bibliotek-dk-meta-menu',
    'title' => 'Bibliotek.dk meta menu',
    'description' => 'Bibliotek.dk links for about, sitemap and other meta pages.',
    'language' => 'und',
    'i18n_mode' => '5',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Bibliotek.dk meta menu');

  // Translatables
  // Included for use with string extractors like potx.
  t('Bibliotek.dk search menu');

  return $menus;
}
