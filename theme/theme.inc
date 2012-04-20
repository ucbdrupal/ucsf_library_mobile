<?php 
/**
 * @file
 * 
 * Theme functions for the UCSF Library Mobile module.
 *
 * @copyright Copyright (c) 2012 UC Regents 
 */

/**
 * Custom theme function.
 * Themes a given page menu.
 * @ingroup themeable
 * @param $menu an associative array representing a page menu, containing these elements:
 * 'title' ... The page menu title
 * 'menu_items' ... a nested array of menu items
 * @return the themed page navigation menu 
 */
function theme_ucsf_library_mobile_page_menu ($menu = array()) {
  if (! empty($menu) && ! empty($menu['menu_items'])) {
    // require MWF components 
    require_once UCSF_LIBRARY_MOBILE_MWF_APP_DIR . '/root/assets/lib/decorator.class.php';
    require_once UCSF_LIBRARY_MOBILE_MWF_APP_DIR . '/root/assets/config.php';
    
    $menu_decorator = Site_Decorator::menu($menu['title'])->set_padded()->set_detailed();
    foreach ($menu['menu_items'] as $label => $menu_item) {
      $link = $menu_item['link'];
      if (empty($link['localized_options'])) {
      	$link['localized_options'] = array('attributes' => array());
      }

      $menu_decorator->add_item($menu_item['link']['link_title'], 
        check_url(url($menu_item['link']['href'], $link['localized_options'])),
      	array(),
      	$link['localized_options']['attributes']
      );
    }
    $output =  $menu_decorator->render(true);
    return $output;
  }
  return '';
}