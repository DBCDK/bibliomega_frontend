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
  // Translatables
  // Included for use with string extractors like potx.
  t('Bibliotek.dk search menu');
  t('Links for the search pages');


  return $menus;
}
