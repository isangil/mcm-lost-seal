<?php
/**
 * @file
 * lostseal_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function lostseal_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:node/1
  $menu_links['main-menu_about:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_about:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_abrir-sesin:user/login
  $menu_links['main-menu_abrir-sesin:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Abrir Sesión',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_abrir-sesin:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_arbury:arbury-art
  $menu_links['main-menu_arbury:arbury-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'arbury-art',
    'router_path' => 'arbury-art',
    'link_title' => 'Arbury',
    'options' => array(
      'identifier' => 'main-menu_arbury:arbury-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_uk:uk-art',
  );
  // Exported menu link: main-menu_argentina:argentina-art
  $menu_links['main-menu_argentina:argentina-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'argentina-art',
    'router_path' => 'argentina-art',
    'link_title' => 'Argentina',
    'options' => array(
      'identifier' => 'main-menu_argentina:argentina-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_browse-art:node/5261',
  );
  // Exported menu link: main-menu_australia:australia-art
  $menu_links['main-menu_australia:australia-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'australia-art',
    'router_path' => 'australia-art',
    'link_title' => 'Australia',
    'options' => array(
      'identifier' => 'main-menu_australia:australia-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_browse-art:node/5261',
  );
  // Exported menu link: main-menu_balmaceda:balmaceda-art
  $menu_links['main-menu_balmaceda:balmaceda-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'balmaceda-art',
    'router_path' => 'balmaceda-art',
    'link_title' => 'Balmaceda',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_balmaceda:balmaceda-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_chile:chile-art',
  );
  // Exported menu link: main-menu_belle-valley:belle-valley-art
  $menu_links['main-menu_belle-valley:belle-valley-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'belle-valley-art',
    'router_path' => 'belle-valley-art',
    'link_title' => 'Belle Valley',
    'options' => array(
      'identifier' => 'main-menu_belle-valley:belle-valley-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_usa:usa-art',
  );
  // Exported menu link: main-menu_bixby:bixby-art
  $menu_links['main-menu_bixby:bixby-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'bixby-art',
    'router_path' => 'bixby-art',
    'link_title' => 'Bixby',
    'options' => array(
      'identifier' => 'main-menu_bixby:bixby-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_usa:usa-art',
  );
  // Exported menu link: main-menu_bluffsview:bluffsview-art
  $menu_links['main-menu_bluffsview:bluffsview-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'bluffsview-art',
    'router_path' => 'bluffsview-art',
    'link_title' => 'Bluffsview',
    'options' => array(
      'identifier' => 'main-menu_bluffsview:bluffsview-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_usa:usa-art',
  );
  // Exported menu link: main-menu_browse-art:node/5261
  $menu_links['main-menu_browse-art:node/5261'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5261',
    'router_path' => 'node/%',
    'link_title' => 'Browse Art',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_browse-art:node/5261',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_buckingham:buckingham-art
  $menu_links['main-menu_buckingham:buckingham-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'buckingham-art',
    'router_path' => 'buckingham-art',
    'link_title' => 'Buckingham',
    'options' => array(
      'identifier' => 'main-menu_buckingham:buckingham-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_usa:usa-art',
  );
  // Exported menu link: main-menu_carlton:carlton-north-primary-school-art
  $menu_links['main-menu_carlton:carlton-north-primary-school-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'carlton-north-primary-school-art',
    'router_path' => 'carlton-north-primary-school-art',
    'link_title' => 'Carlton',
    'options' => array(
      'identifier' => 'main-menu_carlton:carlton-north-primary-school-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_australia:australia-art',
  );
  // Exported menu link: main-menu_cerrar-sesin:user/logout
  $menu_links['main-menu_cerrar-sesin:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Cerrar Sesión',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_cerrar-sesin:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_chile:chile-art
  $menu_links['main-menu_chile:chile-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'chile-art',
    'router_path' => 'chile-art',
    'link_title' => 'Chile',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_chile:chile-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_browse-art:node/5261',
  );
  // Exported menu link: main-menu_combe:combe-art
  $menu_links['main-menu_combe:combe-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'combe-art',
    'router_path' => 'combe-art',
    'link_title' => 'Combe',
    'options' => array(
      'identifier' => 'main-menu_combe:combe-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_uk:uk-art',
  );
  // Exported menu link: main-menu_corbridge:corbridge-art
  $menu_links['main-menu_corbridge:corbridge-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'corbridge-art',
    'router_path' => 'corbridge-art',
    'link_title' => 'Corbridge',
    'options' => array(
      'identifier' => 'main-menu_corbridge:corbridge-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_uk:uk-art',
  );
  // Exported menu link: main-menu_creative-environ:creative-environment-art
  $menu_links['main-menu_creative-environ:creative-environment-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'creative-environment-art',
    'router_path' => 'creative-environment-art',
    'link_title' => 'Creative Environ',
    'options' => array(
      'identifier' => 'main-menu_creative-environ:creative-environment-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_usa:usa-art',
  );
  // Exported menu link: main-menu_cristoforo:art-cristoforo-colombo
  $menu_links['main-menu_cristoforo:art-cristoforo-colombo'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'art-cristoforo-colombo',
    'router_path' => 'art-cristoforo-colombo',
    'link_title' => 'Cristoforo',
    'options' => array(
      'identifier' => 'main-menu_cristoforo:art-cristoforo-colombo',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_argentina:argentina-art',
  );
  // Exported menu link: main-menu_featured-art:featured-art
  $menu_links['main-menu_featured-art:featured-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'featured-art',
    'router_path' => 'featured-art',
    'link_title' => 'Featured Art',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_featured-art:featured-art',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_flossmoor:flossmoor-montessori-art
  $menu_links['main-menu_flossmoor:flossmoor-montessori-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'flossmoor-montessori-art',
    'router_path' => 'flossmoor-montessori-art',
    'link_title' => 'Flossmoor',
    'options' => array(
      'identifier' => 'main-menu_flossmoor:flossmoor-montessori-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_usa:usa-art',
  );
  // Exported menu link: main-menu_german-school:german-school-punta-arenas-art
  $menu_links['main-menu_german-school:german-school-punta-arenas-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'german-school-punta-arenas-art',
    'router_path' => 'german-school-punta-arenas-art',
    'link_title' => 'German School',
    'options' => array(
      'identifier' => 'main-menu_german-school:german-school-punta-arenas-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_chile:chile-art',
  );
  // Exported menu link: main-menu_home:home
  $menu_links['main-menu_home:home'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:home',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_kings:kings-highway-art
  $menu_links['main-menu_kings:kings-highway-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'kings-highway-art',
    'router_path' => 'kings-highway-art',
    'link_title' => 'Kings',
    'options' => array(
      'identifier' => 'main-menu_kings:kings-highway-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_usa:usa-art',
  );
  // Exported menu link: main-menu_kws-prep:kws-prep-art
  $menu_links['main-menu_kws-prep:kws-prep-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'kws-prep-art',
    'router_path' => 'kws-prep-art',
    'link_title' => 'KWS Prep',
    'options' => array(
      'identifier' => 'main-menu_kws-prep:kws-prep-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_australia:australia-art',
  );
  // Exported menu link: main-menu_leongatha:leongatha-primary-art
  $menu_links['main-menu_leongatha:leongatha-primary-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'leongatha-primary-art',
    'router_path' => 'leongatha-primary-art',
    'link_title' => 'Leongatha',
    'options' => array(
      'identifier' => 'main-menu_leongatha:leongatha-primary-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_australia:australia-art',
  );
  // Exported menu link: main-menu_liberty:liberty-art
  $menu_links['main-menu_liberty:liberty-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'liberty-art',
    'router_path' => 'liberty-art',
    'link_title' => 'Liberty',
    'options' => array(
      'identifier' => 'main-menu_liberty:liberty-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_usa:usa-art',
  );
  // Exported menu link: main-menu_login:user/login
  $menu_links['main-menu_login:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_logout:user/logout
  $menu_links['main-menu_logout:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_margate:margate-primary-art
  $menu_links['main-menu_margate:margate-primary-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'margate-primary-art',
    'router_path' => 'margate-primary-art',
    'link_title' => 'Margate',
    'options' => array(
      'identifier' => 'main-menu_margate:margate-primary-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_australia:australia-art',
  );
  // Exported menu link: main-menu_new-zealand:new-zealand-school-art
  $menu_links['main-menu_new-zealand:new-zealand-school-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'new-zealand-school-art',
    'router_path' => 'new-zealand-school-art',
    'link_title' => 'New Zealand',
    'options' => array(
      'identifier' => 'main-menu_new-zealand:new-zealand-school-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_browse-art:node/5261',
  );
  // Exported menu link: main-menu_ocean:ocean-shore-art
  $menu_links['main-menu_ocean:ocean-shore-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ocean-shore-art',
    'router_path' => 'ocean-shore-art',
    'link_title' => 'Ocean',
    'options' => array(
      'identifier' => 'main-menu_ocean:ocean-shore-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_usa:usa-art',
  );
  // Exported menu link: main-menu_schenectady:schenectady-art
  $menu_links['main-menu_schenectady:schenectady-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'schenectady-art',
    'router_path' => 'schenectady-art',
    'link_title' => 'Schenectady',
    'options' => array(
      'identifier' => 'main-menu_schenectady:schenectady-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_usa:usa-art',
  );
  // Exported menu link: main-menu_search-for-art:vignettes
  $menu_links['main-menu_search-for-art:vignettes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'vignettes',
    'router_path' => 'vignettes',
    'link_title' => 'Search for Art',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_search-for-art:vignettes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_shorewood:shorewood-art
  $menu_links['main-menu_shorewood:shorewood-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shorewood-art',
    'router_path' => 'shorewood-art',
    'link_title' => 'Shorewood',
    'options' => array(
      'identifier' => 'main-menu_shorewood:shorewood-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_usa:usa-art',
  );
  // Exported menu link: main-menu_south-wales:new-south-wales-art-exhibition
  $menu_links['main-menu_south-wales:new-south-wales-art-exhibition'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'new-south-wales-art-exhibition',
    'router_path' => 'new-south-wales-art-exhibition',
    'link_title' => 'South Wales',
    'options' => array(
      'identifier' => 'main-menu_south-wales:new-south-wales-art-exhibition',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_australia:australia-art',
  );
  // Exported menu link: main-menu_tarras:tarras-art
  $menu_links['main-menu_tarras:tarras-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tarras-art',
    'router_path' => 'tarras-art',
    'link_title' => 'Tarras',
    'options' => array(
      'identifier' => 'main-menu_tarras:tarras-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_new-zealand:new-zealand-school-art',
  );
  // Exported menu link: main-menu_uk:uk-art
  $menu_links['main-menu_uk:uk-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uk-art',
    'router_path' => 'uk-art',
    'link_title' => 'UK',
    'options' => array(
      'identifier' => 'main-menu_uk:uk-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_browse-art:node/5261',
  );
  // Exported menu link: main-menu_usa:usa-art
  $menu_links['main-menu_usa:usa-art'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'usa-art',
    'router_path' => 'usa-art',
    'link_title' => 'USA',
    'options' => array(
      'identifier' => 'main-menu_usa:usa-art',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_browse-art:node/5261',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Abrir Sesión');
  t('Arbury');
  t('Argentina');
  t('Australia');
  t('Balmaceda');
  t('Belle Valley');
  t('Bixby');
  t('Bluffsview');
  t('Browse Art');
  t('Buckingham');
  t('Carlton');
  t('Cerrar Sesión');
  t('Chile');
  t('Combe');
  t('Corbridge');
  t('Creative Environ');
  t('Cristoforo');
  t('Featured Art');
  t('Flossmoor');
  t('German School');
  t('Home');
  t('KWS Prep');
  t('Kings');
  t('Leongatha');
  t('Liberty');
  t('Margate');
  t('New Zealand');
  t('Ocean');
  t('Schenectady');
  t('Search for Art');
  t('Shorewood');
  t('South Wales');
  t('Tarras');
  t('UK');
  t('USA');
  t('login');
  t('logout');


  return $menu_links;
}
