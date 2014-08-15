<?php
/**
 * @file
 * lostseal_article.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function lostseal_article_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['global']['default'] = array(
  'additional_settings__active_tab_article' => 'edit-submission',
  'admin_theme' => 'seven',
  'at_browscap_detect' => FALSE,
  'at_detection' => FALSE,
  'at_mobile_detect' => FALSE,
  'clean_url' => 1,
  'color_pixture_reloaded_files' => array(
    0 => 'public://color/pixture_reloaded-6add37cc/bullet-round.png',
    1 => 'public://color/pixture_reloaded-6add37cc/bullet-sm-arrow-right.png',
    2 => 'public://color/pixture_reloaded-6add37cc/bullet-sm-arrow-down.png',
    3 => 'public://color/pixture_reloaded-6add37cc/button.gif',
    4 => 'public://color/pixture_reloaded-6add37cc/button-o.gif',
    5 => '/home/isangil/WWW/lostseal/sites/default/files/color/pixture_reloaded-6add37cc/header.png',
    6 => '/home/isangil/WWW/lostseal/sites/default/files/color/pixture_reloaded-6add37cc/header-tile.png',
    7 => '/home/isangil/WWW/lostseal/sites/default/files/color/pixture_reloaded-6add37cc/menu-tile.png',
    8 => '/home/isangil/WWW/lostseal/sites/default/files/color/pixture_reloaded-6add37cc/bg-footer.png',
    9 => '/home/isangil/WWW/lostseal/sites/default/files/color/pixture_reloaded-6add37cc/bg-footer-tile.png',
    10 => '/home/isangil/WWW/lostseal/sites/default/files/color/pixture_reloaded-6add37cc/bg-menu.png',
    11 => '/home/isangil/WWW/lostseal/sites/default/files/color/pixture_reloaded-6add37cc/bg-title.png',
    12 => '/home/isangil/WWW/lostseal/sites/default/files/color/pixture_reloaded-6add37cc/bg-wall.png',
    13 => '/home/isangil/WWW/lostseal/sites/default/files/color/pixture_reloaded-6add37cc/bg-bar-lite.png',
    14 => '/home/isangil/WWW/lostseal/sites/default/files/color/pixture_reloaded-6add37cc/bg-bar.png',
    15 => '/home/isangil/WWW/lostseal/sites/default/files/color/pixture_reloaded-6add37cc/bg-lbar-lite.png',
    16 => '/home/isangil/WWW/lostseal/sites/default/files/color/pixture_reloaded-6add37cc/bg-lbar.png',
    17 => '/home/isangil/WWW/lostseal/sites/default/files/color/pixture_reloaded-6add37cc/sf-hover-tile.png',
    18 => 'public://color/pixture_reloaded-6add37cc/colors.css',
  ),
  'color_pixture_reloaded_logo' => 'public://color/pixture_reloaded-6add37cc/logo.png',
  'color_pixture_reloaded_palette' => array(
    'base' => '#e8eaea',
    'page' => '#ffffff',
    'sitename' => '#b7b7b7',
    'slogan' => '#fefefe',
    'header' => '#fdfdfd',
    'mmenu' => '#7885b6',
    'link' => '#4d637a',
    'top' => '#ffffff',
    'bottom' => '#fefefe',
    'ftop' => '#ffffff',
    'fbottom' => '#ffffff',
    'text' => '#555555',
    'blockh' => '#e0e9f0',
    'blockht' => '#103356',
    'blockbg' => '#efeff0',
    'borders' => '#f5f4f4',
    'sticky' => '#f7f7f7',
  ),
  'color_pixture_reloaded_stylesheets' => array(
    0 => 'public://color/pixture_reloaded-6add37cc/colors.css',
  ),
  'comment_anonymous_article' => 0,
  'comment_article' => 1,
  'comment_default_mode_article' => 1,
  'comment_default_per_page_article' => 50,
  'comment_form_location_article' => 1,
  'comment_page' => 0,
  'comment_preview_article' => 1,
  'comment_subject_field_article' => 1,
  'config' => array(
    'lingotek_translate_config_blocks' => 'lingotek_translate_config_blocks',
    'lingotek_translate_config_taxonomies' => 'lingotek_translate_config_taxonomies',
    'lingotek_translate_config_menus' => 'lingotek_translate_config_menus',
    'lingotek_translate_config_fields' => 'lingotek_translate_config_fields',
    'lingotek_translate_config_builtins' => 'lingotek_translate_config_builtins',
    'lingotek_translate_config_misc' => 'lingotek_translate_config_misc',
    'lingotek_translate_config_views' => 0,
  ),
  'context_block_rebuild_needed' => TRUE,
  'cron_key' => 'UBA1OggcWObhIe7k4nSbqRZJGm-iddtRyRgzgCsx3T0',
  'cron_last' => 1408107826,
  'css_js_query_string' => 'nacmy3',
  'ctools_last_cron' => 1408106013,
  'date_default_timezone' => 'America/Denver',
  'default_feeds_tamper' => array(
    'art_importer-s-truncate_text' => FALSE,
  ),
  'default_nodes_main' => 1,
  'drupal_http_request_fails' => FALSE,
  'drupal_private_key' => 'Uo5sNCbWIpfXiLCTaqeeQKThnQnbmySuK5u-Dlw7lFE',
  'facetapi:block_cache:search_api@default_node_index' => -1,
  'facetapi:block_cache:search_api@image_index' => -1,
  'facetapi:block_cache:search_api@taxonomy_contry_school' => -1,
  'facetapi:block_cache:search_api@terms_from_school_country_vocab' => -1,
  'features_ignored_orphans' => array(),
  'feeds_reschedule' => FALSE,
  'field_bundle_settings_file__image' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => -10,
        ),
        'preview' => array(
          'weight' => -5,
        ),
      ),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => 0,
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  ),
  'field_bundle_settings_node__article' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => 6,
        ),
        'path' => array(
          'weight' => 7,
        ),
      ),
      'display' => array(
        'language' => array(
          'teaser' => array(
            'weight' => 12,
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => 1,
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => 15,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  ),
  'file_temporary_path' => '/tmp',
  'filter_fallback_format' => 'plain_text',
  'forum_containers' => array(),
  'forum_nav_vocabulary' => 2,
  'i18n_node_extended_article' => 1,
  'i18n_node_options_article' => array(),
  'i18n_string_allowed_formats' => array(
    'filtered_html' => 'filtered_html',
    'full_html' => 'full_html',
    'plain_text' => 'plain_text',
  ),
  'i18n_sync_node_type_article' => array(),
  'image_jpeg_quality' => 90,
  'image_toolkit' => 'gd',
  'install_profile' => 'standard',
  'install_task' => 'done',
  'install_time' => 1403905726,
  'javascript_parsed' => array(
    0 => 'misc/drupal.js',
    1 => 'misc/jquery.js',
    2 => 'misc/jquery.once.js',
    3 => 'misc/ui/jquery.ui.core.min.js',
    4 => 'misc/ui/jquery.ui.widget.min.js',
    5 => 'misc/ui/jquery.ui.mouse.min.js',
    6 => 'misc/ui/jquery.ui.draggable.min.js',
    7 => 'misc/ui/jquery.ui.droppable.min.js',
    8 => 'misc/ui/jquery.ui.sortable.min.js',
    9 => 'sites/all/modules/plugins/context_reaction_block.js',
    10 => 'sites/all/modules/ctools/js/dropbutton.js',
    11 => 'misc/jquery.cookie.js',
    12 => 'sites/all/modules/module_filter/js/module_filter.js',
    13 => 'sites/all/modules/module_filter/js/modules.js',
    14 => 'misc/jquery.ba-bbq.js',
    15 => 'sites/all/modules/module_filter/js/module_filter_tab.js',
    16 => 'sites/all/modules/module_filter/js/dynamic_position.js',
    17 => 'misc/tableheader.js',
    18 => 'sites/all/modules/admin_menu/admin_menu.js',
    19 => 'sites/all/modules/admin_menu/admin_menu_toolbar/admin_menu_toolbar.js',
    'refresh:es' => 'waiting',
    20 => 'modules/contextual/contextual.js',
    21 => 'sites/all/libraries/superfish/jquery.hoverIntent.minified.js',
    22 => 'sites/all/libraries/superfish/sfsmallscreen.js',
    23 => 'sites/all/libraries/superfish/supposition.js',
    24 => 'sites/all/libraries/superfish/supersubs.js',
    25 => 'sites/all/libraries/superfish/superfish.js',
    26 => 'sites/all/modules/superfish/superfish.js',
    27 => 'sites/all/modules/views/js/views-contextual.js',
    28 => 'misc/form.js',
    29 => 'misc/collapse.js',
    30 => 'misc/states.js',
    31 => 'sites/all/modules/features/features.js',
    32 => 'misc/vertical-tabs.js',
    33 => 'misc/machine-name.js',
    34 => 'misc/autocomplete.js',
    35 => 'misc/jquery.form.js',
    36 => 'misc/progress.js',
    37 => 'misc/ajax.js',
    38 => 'misc/ui/jquery.ui.button.min.js',
    39 => 'misc/ui/jquery.ui.position.min.js',
    40 => 'misc/ui/jquery.ui.resizable.min.js',
    41 => 'misc/ui/jquery.ui.dialog.min.js',
    42 => 'sites/all/modules/views/js/jquery.ui.dialog.patch.js',
  ),
  'job_scheduler_rebuild_all' => FALSE,
  'language_content_type_article' => 1,
  'language_content_type_forum' => 1,
  'language_content_type_page' => 1,
  'language_count' => 2,
  'language_negotiation_language' => array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-browser' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_browser',
      ),
      'file' => 'includes/locale.inc',
      'cache' => 0,
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  ),
  'language_negotiation_language_content' => array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  ),
  'language_negotiation_language_url' => array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  ),
  'language_types' => array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  ),
  'lingotek_account_plan_type' => 'standard',
  'lingotek_activation_email' => 'isangil@lternet.edu',
  'lingotek_activation_first_name' => 'Inigo',
  'lingotek_activation_last_name' => 'San GIl',
  'lingotek_advanced_parsing' => TRUE,
  'lingotek_advanced_xml_config1' => 'assumeWellformed: false
preserve_whitespace: true
global_cdata_subfilter: okf_html
attributes:
  xml:lang:
    ruleTypes: [ATTRIBUTE_WRITABLE]
  xml:id:
    ruleTypes: [ATTRIBUTE_ID]
  id:
    ruleTypes: [ATTRIBUTE_ID]
  xml:space:
    ruleTypes: [ATTRIBUTE_PRESERVE_WHITESPACE]
    preserve: [\'xml:space\', EQUALS, preserve]
    default: [\'xml:space\', EQUALS, default]
elements:
  template:
    ruleTypes: [ATTRIBUTES_ONLY]
    translatableAttributes: [displayName]
  pre:
    ruleTypes: [PRESERVE_WHITESPACE]
  bean:
    ruleTypes: [EXCLUDE]
',
  'lingotek_advanced_xml_config2' => 'assumeWellformed: false
preserve_whitespace: true
useCodeFinder: false
attributes:
  dir:
    ruleTypes: [ATTRIBUTE_WRITABLE]
    allElementsExcept: [base, basefront, head, html, meta, param, script]
  title:
    ruleTypes: [ATTRIBUTE_TRANS]
    allElementsExcept: [base, basefront, head, html, meta, param, script, title]
  lang:
    ruleTypes: [ATTRIBUTE_WRITABLE]
  xml:lang:
    ruleTypes: [ATTRIBUTE_WRITABLE]
elements:
  meta:
    ruleTypes: [ATTRIBUTES_ONLY]
    translatableAttributes:
      content:
      - [http-equiv, EQUALS, keywords]
      - - name
        - EQUALS
        - [keywords, description]
    writableLocalizableAttributes:
      content:
      - http-equiv
      - EQUALS
      - [content-language, content-type]
      charset: null
    readOnlyLocalizableAttributes:
      content:
      - name
      - EQUALS
      - [generator, author, progid, date]
  area:
    ruleTypes: [ATTRIBUTES_ONLY]
    translatableAttributes: [accesskey, area, alt]
  isindex:
    ruleTypes: [ATTRIBUTES_ONLY]
    translatableAttributes: [prompt]
  option:
    ruleTypes: [ATTRIBUTES_ONLY]
    translatableAttributes: [label, value]
  optgroup:
    ruleTypes: [ATTRIBUTES_ONLY]
    translatableAttributes: [label]
  address:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  drupalvar:
    ruleTypes: [INLINE, EXCLUDE]
  dt:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  h1:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  h2:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  h3:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  h4:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  h5:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  h6:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  legend:
    ruleTypes: [TEXTUNIT]
    translatableAttributes: [accesskey]
    idAttributes: [id]
  li:
    ruleTypes: [TEXTUNIT]
    translatableAttributes: [value]
    idAttributes: [id]
  marquee:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  p:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
    elementType: paragraph
  pre:
    ruleTypes: [TEXTUNIT, PRESERVE_WHITESPACE]
    idAttributes: [id]
  td:
    ruleTypes: [TEXTUNIT]
    translatableAttributes: [abbr]
    idAttributes: [id]
  th:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
    translatableAttributes: [abbr]
  title:
    ruleTypes: [TEXTUNIT]
    idAttributes: [id]
  a:
    ruleTypes: [INLINE]
    elementType: link
    translatableAttributes: [title, accesskey, alt]
  abbr:
    ruleTypes: [INLINE]
  acronym:
    ruleTypes: [INLINE]
  applet:
    ruleTypes: [INLINE]
    translatableAttributes: [alt]
  b:
    ruleTypes: [INLINE]
    elementType: bold
  bdo:
    ruleTypes: [INLINE]
  big:
    ruleTypes: [INLINE]
  blink:
    ruleTypes: [INLINE]
  br:
    ruleTypes: [INLINE]
  button:
    ruleTypes: [INLINE]
    translatableAttributes: [accesskey, value]
  cite:
    ruleTypes: [INLINE]
  code:
    ruleTypes: [INLINE]
  del:
    ruleTypes: [INLINE]
  dfn:
    ruleTypes: [INLINE]
  em:
    ruleTypes: [INLINE]
  embed:
    ruleTypes: [INLINE]
  font:
    ruleTypes: [INLINE]
  i:
    ruleTypes: [INLINE]
    elementType: italic
  iframe:
    ruleTypes: [INLINE]
  img:
    ruleTypes: [INLINE]
    elementType: image
    translatableAttributes: [title, alt]
  input:
    ruleTypes: [INLINE]
    translatableAttributes:
      alt:
      - type
      - NOT_EQUALS
      - [file, hidden, image, Password]
      value:
      - type
      - NOT_EQUALS
      - [file, hidden, image, Password]
      accesskey:
      - type
      - NOT_EQUALS
      - [file, hidden, image, Password]
      title:
      - type
      - NOT_EQUALS
      - [file, hidden, image, Password]
  ins:
    ruleTypes: [INLINE]
  kbd:
    ruleTypes: [INLINE]
  label:
    ruleTypes: [INLINE]
    translatableAttributes: [accesskey]
  map:
    ruleTypes: [INLINE]
  nobr:
    ruleTypes: [INLINE]
  object:
    ruleTypes: [INLINE]
    translatableAttributes: [standby]
  param:
    ruleTypes: [INLINE]
    translatableAttributes: [value]
  q:
    ruleTypes: [INLINE]
  s:
    ruleTypes: [INLINE]
  samp:
    ruleTypes: [INLINE]
  small:
    ruleTypes: [INLINE]
  select:
    ruleTypes: [INLINE]
  span:
    ruleTypes: [INLINE]
  spacer:
    ruleTypes: [INLINE]
  strike:
    ruleTypes: [INLINE]
  strong:
    ruleTypes: [INLINE]
  sub:
    ruleTypes: [INLINE]
  sup:
    ruleTypes: [INLINE]
  symbol:
    ruleTypes: [INLINE]
  table:
    ruleTypes: [ATTRIBUTES_ONLY]
    translatableAttributes: [summary]
  textarea:
    ruleTypes: [INLINE]
    translatableAttributes: [accesskey]
  tt:
    ruleTypes: [INLINE]
  u:
    ruleTypes: [INLINE]
    elementType: underlined
  var:
    ruleTypes: [INLINE]
  wbr:
    ruleTypes: [INLINE]
  ruby:
    ruleTypes: [INLINE]
  rb:
    ruleTypes: [INLINE]
  rt:
    ruleTypes: [INLINE]
  rc:
    ruleTypes: [INLINE]
  rp:
    ruleTypes: [INLINE]
  rbc:
    ruleTypes: [INLINE]
  rtc:
    ruleTypes: [INLINE]
  face:
    ruleTypes: [INLINE]
  style:
    ruleTypes: [EXCLUDE]
  stylesheet:
    ruleTypes: [EXCLUDE]
  script:
    ruleTypes: [EXCLUDE]
',
  'lingotek_cms_tag' => 'standard',
  'lingotek_community_identifier' => 'R3SNZ6C2',
  'lingotek_config_plural_mapping' => array(
    229 => array(
      'plid' => 231,
      'plural' => 1,
    ),
    359 => array(
      'plid' => 358,
      'plural' => 1,
    ),
    361 => array(
      'plid' => 360,
      'plural' => 1,
    ),
    736 => array(
      'plid' => 735,
      'plural' => 1,
    ),
    1244 => array(
      'plid' => 1243,
      'plural' => 1,
    ),
    1267 => array(
      'plid' => 1266,
      'plural' => 1,
    ),
    1276 => array(
      'plid' => 1275,
      'plural' => 1,
    ),
    1278 => array(
      'plid' => 1277,
      'plural' => 1,
    ),
    1288 => array(
      'plid' => 1287,
      'plural' => 1,
    ),
    1290 => array(
      'plid' => 1289,
      'plural' => 1,
    ),
    1306 => array(
      'plid' => 1305,
      'plural' => 1,
    ),
    1312 => array(
      'plid' => 1311,
      'plural' => 1,
    ),
    1342 => array(
      'plid' => 1341,
      'plural' => 1,
    ),
    1348 => array(
      'plid' => 1347,
      'plural' => 1,
    ),
    1359 => array(
      'plid' => 1358,
      'plural' => 1,
    ),
    1954 => array(
      'plid' => 1953,
      'plural' => 1,
    ),
    2801 => array(
      'plid' => 2800,
      'plural' => 1,
    ),
    2803 => array(
      'plid' => 2802,
      'plural' => 1,
    ),
    2805 => array(
      'plid' => 2804,
      'plural' => 1,
    ),
    2795 => array(
      'plid' => 2875,
      'plural' => 1,
    ),
    2808 => array(
      'plid' => 2807,
      'plural' => 1,
    ),
    2810 => array(
      'plid' => 2809,
      'plural' => 1,
    ),
    2874 => array(
      'plid' => 2873,
      'plural' => 1,
    ),
    2961 => array(
      'plid' => 2960,
      'plural' => 1,
    ),
    3175 => array(
      'plid' => 3174,
      'plural' => 1,
    ),
    3177 => array(
      'plid' => 3176,
      'plural' => 1,
    ),
    3472 => array(
      'plid' => 3471,
      'plural' => 1,
    ),
    3474 => array(
      'plid' => 3473,
      'plural' => 1,
    ),
    3476 => array(
      'plid' => 3475,
      'plural' => 1,
    ),
    3794 => array(
      'plid' => 3793,
      'plural' => 1,
    ),
    3898 => array(
      'plid' => 3897,
      'plural' => 1,
    ),
    3900 => array(
      'plid' => 3899,
      'plural' => 1,
    ),
    3902 => array(
      'plid' => 3901,
      'plural' => 1,
    ),
    3925 => array(
      'plid' => 3926,
      'plural' => 1,
    ),
    4036 => array(
      'plid' => 4035,
      'plural' => 1,
    ),
    4096 => array(
      'plid' => 4095,
      'plural' => 1,
    ),
    4163 => array(
      'plid' => 4162,
      'plural' => 1,
    ),
    4167 => array(
      'plid' => 4166,
      'plural' => 1,
    ),
    4231 => array(
      'plid' => 4230,
      'plural' => 1,
    ),
    4653 => array(
      'plid' => 4652,
      'plural' => 1,
    ),
    3451 => array(
      'plid' => 4654,
      'plural' => 1,
    ),
    4656 => array(
      'plid' => 4655,
      'plural' => 1,
    ),
    4658 => array(
      'plid' => 4657,
      'plural' => 1,
    ),
    4660 => array(
      'plid' => 4659,
      'plural' => 1,
    ),
    5295 => array(
      'plid' => 5294,
      'plural' => 1,
    ),
    5297 => array(
      'plid' => 5296,
      'plural' => 1,
    ),
    5405 => array(
      'plid' => 5404,
      'plural' => 1,
    ),
    5498 => array(
      'plid' => 5497,
      'plural' => 1,
    ),
    5525 => array(
      'plid' => 5524,
      'plural' => 1,
    ),
    5527 => array(
      'plid' => 5526,
      'plural' => 1,
    ),
    5985 => array(
      'plid' => 1864,
      'plural' => 1,
    ),
    6762 => array(
      'plid' => 6761,
      'plural' => 1,
    ),
    6796 => array(
      'plid' => 6795,
      'plural' => 1,
    ),
    7087 => array(
      'plid' => 7086,
      'plural' => 1,
    ),
    7089 => array(
      'plid' => 7088,
      'plural' => 1,
    ),
    7091 => array(
      'plid' => 7090,
      'plural' => 1,
    ),
    7093 => array(
      'plid' => 7092,
      'plural' => 1,
    ),
    7096 => array(
      'plid' => 7086,
      'plural' => 1,
    ),
    7097 => array(
      'plid' => 7088,
      'plural' => 1,
    ),
    7207 => array(
      'plid' => 7206,
      'plural' => 1,
    ),
    7464 => array(
      'plid' => 7463,
      'plural' => 1,
    ),
    104 => array(
      'plid' => 7465,
      'plural' => 1,
    ),
    7489 => array(
      'plid' => 7488,
      'plural' => 1,
    ),
    7491 => array(
      'plid' => 7490,
      'plural' => 1,
    ),
    7493 => array(
      'plid' => 7492,
      'plural' => 1,
    ),
    7568 => array(
      'plid' => 7567,
      'plural' => 1,
    ),
    7570 => array(
      'plid' => 7569,
      'plural' => 1,
    ),
    7572 => array(
      'plid' => 7571,
      'plural' => 1,
    ),
    7574 => array(
      'plid' => 7573,
      'plural' => 1,
    ),
    7576 => array(
      'plid' => 7575,
      'plural' => 1,
    ),
    7714 => array(
      'plid' => 7713,
      'plural' => 1,
    ),
    7716 => array(
      'plid' => 7715,
      'plural' => 1,
    ),
    7861 => array(
      'plid' => 7860,
      'plural' => 1,
    ),
    7957 => array(
      'plid' => 7956,
      'plural' => 1,
    ),
    8022 => array(
      'plid' => 8021,
      'plural' => 1,
    ),
    8024 => array(
      'plid' => 8023,
      'plural' => 1,
    ),
    8076 => array(
      'plid' => 8075,
      'plural' => 1,
    ),
    8078 => array(
      'plid' => 8077,
      'plural' => 1,
    ),
    8080 => array(
      'plid' => 8079,
      'plural' => 1,
    ),
    8083 => array(
      'plid' => 8082,
      'plural' => 1,
    ),
    8085 => array(
      'plid' => 8084,
      'plural' => 1,
    ),
    8087 => array(
      'plid' => 8086,
      'plural' => 1,
    ),
    8089 => array(
      'plid' => 8088,
      'plural' => 1,
    ),
    8620 => array(
      'plid' => 8619,
      'plural' => 1,
    ),
    8622 => array(
      'plid' => 8621,
      'plural' => 1,
    ),
    8624 => array(
      'plid' => 8623,
      'plural' => 1,
    ),
    9033 => array(
      'plid' => 9032,
      'plural' => 1,
    ),
    9214 => array(
      'plid' => 9213,
      'plural' => 1,
    ),
    9269 => array(
      'plid' => 9268,
      'plural' => 1,
    ),
    9271 => array(
      'plid' => 9270,
      'plural' => 1,
    ),
    9273 => array(
      'plid' => 9272,
      'plural' => 1,
    ),
    9275 => array(
      'plid' => 9274,
      'plural' => 1,
    ),
    9277 => array(
      'plid' => 9276,
      'plural' => 1,
    ),
    9279 => array(
      'plid' => 9278,
      'plural' => 1,
    ),
    9281 => array(
      'plid' => 9280,
      'plural' => 1,
    ),
    9350 => array(
      'plid' => 9349,
      'plural' => 1,
    ),
    9486 => array(
      'plid' => 9485,
      'plural' => 1,
    ),
    9488 => array(
      'plid' => 9487,
      'plural' => 1,
    ),
    9528 => array(
      'plid' => 9527,
      'plural' => 1,
    ),
    9530 => array(
      'plid' => 9529,
      'plural' => 1,
    ),
    9589 => array(
      'plid' => 9588,
      'plural' => 1,
    ),
    10053 => array(
      'plid' => 10052,
      'plural' => 1,
    ),
    10127 => array(
      'plid' => 10126,
      'plural' => 1,
    ),
    10129 => array(
      'plid' => 10128,
      'plural' => 1,
    ),
    10131 => array(
      'plid' => 10130,
      'plural' => 1,
    ),
    10297 => array(
      'plid' => 10296,
      'plural' => 1,
    ),
    10559 => array(
      'plid' => 10558,
      'plural' => 1,
    ),
    10561 => array(
      'plid' => 10560,
      'plural' => 1,
    ),
  ),
  'lingotek_enabled_fields' => array(
    'node' => array(
      'article' => array(
        0 => 'body',
        1 => 'title_field',
      ),
      'page' => array(
        0 => 'body',
        1 => 'title_field',
      ),
      'forum' => array(
        0 => 'body',
        1 => 'title_field',
      ),
    ),
  ),
  'lingotek_entity_profiles' => array(
    'node' => array(
      'article' => 0,
      'page' => 0,
      'forum' => 0,
    ),
    'comment' => array(
      'comment_node_article' => 'DISABLED',
      'comment_node_page' => 'DISABLED',
      'comment_node_forum' => 'DISABLED',
    ),
  ),
  'lingotek_function_comment_languages' => 1,
  'lingotek_function_identify_translations' => 1,
  'lingotek_function_node_languages' => 1,
  'lingotek_guid' => 'bcc4038217aef578',
  'lingotek_integration_method' => '6941d156-97b0-43fe-bf41-a5cdf2200365',
  'lingotek_login_id' => 'community_admin',
  'lingotek_nodes_translation_method' => 'field',
  'lingotek_notify_security_token' => '6ccc539e1c4395d2fe1b358694b99c6c',
  'lingotek_notify_url' => 'http://deimssandbox.lternet.edu/lostseal/?q=lingotek/notify&doc_id={document_uuid}&doc_idx={document_id}&target_code={target_language}&completed={completed}&project_id={project_id}&security_token=6ccc539e1c4395d2fe1b358694b99c6c',
  'lingotek_oauth_consumer_id' => 'cc915a60-bbf3-4cb2-be71-2b0d94ae28e6',
  'lingotek_oauth_consumer_secret' => 'c9c0c65b-b7cb-4d53-9646-519a73ef346f',
  'lingotek_profiles' => array(
    0 => array(
      'name' => 'Automatic',
      'create_lingotek_document' => 1,
      'sync_method' => 1,
    ),
    1 => array(
      'name' => 'Manual',
      'create_lingotek_document' => 0,
      'sync_method' => 0,
    ),
  ),
  'lingotek_project' => 27400,
  'lingotek_translate_comments_workflow_id' => '379a944e-6771-49b9-8348-5ee04f3a4d13',
  'lingotek_translate_config' => TRUE,
  'lingotek_translate_config_blocks' => 'lingotek_translate_config_blocks',
  'lingotek_translate_config_builtins' => 'lingotek_translate_config_builtins',
  'lingotek_translate_config_fields' => 'lingotek_translate_config_fields',
  'lingotek_translate_config_indexed_modules' => array(
    'i18n_user' => array(
      'name' => 'i18n_user',
      'filename' => 'sites/all/modules/i18n/i18n_user/i18n_user.module',
      'type' => 'module',
    ),
    'block' => array(
      'name' => 'block',
      'filename' => 'modules/block/block.module',
      'type' => 'module',
    ),
    'color' => array(
      'name' => 'color',
      'filename' => 'modules/color/color.module',
      'type' => 'module',
    ),
    'comment' => array(
      'name' => 'comment',
      'filename' => 'modules/comment/comment.module',
      'type' => 'module',
    ),
    'contact' => array(
      'name' => 'contact',
      'filename' => 'modules/contact/contact.module',
      'type' => 'module',
    ),
    'context' => array(
      'name' => 'context',
      'filename' => 'sites/all/modules/context/context.module',
      'type' => 'module',
    ),
    'contextual' => array(
      'name' => 'contextual',
      'filename' => 'modules/contextual/contextual.module',
      'type' => 'module',
    ),
    'context_ui' => array(
      'name' => 'context_ui',
      'filename' => 'sites/all/modules/context/context_ui/context_ui.module',
      'type' => 'module',
    ),
    'ctools' => array(
      'name' => 'ctools',
      'filename' => 'sites/all/modules/ctools/ctools.module',
      'type' => 'module',
    ),
    'dashboard' => array(
      'name' => 'dashboard',
      'filename' => 'modules/dashboard/dashboard.module',
      'type' => 'module',
    ),
    'entity' => array(
      'name' => 'entity',
      'filename' => 'sites/all/modules/entity/entity.module',
      'type' => 'module',
    ),
    'field' => array(
      'name' => 'field',
      'filename' => 'modules/field/field.module',
      'type' => 'module',
    ),
    'field_sql_storage' => array(
      'name' => 'field_sql_storage',
      'filename' => 'modules/field/modules/field_sql_storage/field_sql_storage.module',
      'type' => 'module',
    ),
    'field_ui' => array(
      'name' => 'field_ui',
      'filename' => 'modules/field_ui/field_ui.module',
      'type' => 'module',
    ),
    'file' => array(
      'name' => 'file',
      'filename' => 'modules/file/file.module',
      'type' => 'module',
    ),
    'file_entity' => array(
      'name' => 'file_entity',
      'filename' => 'sites/all/modules/file_entity/file_entity.module',
      'type' => 'module',
    ),
    'filter' => array(
      'name' => 'filter',
      'filename' => 'modules/filter/filter.module',
      'type' => 'module',
    ),
    'help' => array(
      'name' => 'help',
      'filename' => 'modules/help/help.module',
      'type' => 'module',
    ),
    'i18n_contact' => array(
      'name' => 'i18n_contact',
      'filename' => 'sites/all/modules/i18n/i18n_contact/i18n_contact.module',
      'type' => 'module',
    ),
    'i18n_field' => array(
      'name' => 'i18n_field',
      'filename' => 'sites/all/modules/i18n/i18n_field/i18n_field.module',
      'type' => 'module',
    ),
    'i18n_node' => array(
      'name' => 'i18n_node',
      'filename' => 'sites/all/modules/i18n/i18n_node/i18n_node.module',
      'type' => 'module',
    ),
    'i18n_redirect' => array(
      'name' => 'i18n_redirect',
      'filename' => 'sites/all/modules/i18n/i18n_redirect/i18n_redirect.module',
      'type' => 'module',
    ),
    'i18n_select' => array(
      'name' => 'i18n_select',
      'filename' => 'sites/all/modules/i18n/i18n_select/i18n_select.module',
      'type' => 'module',
    ),
    'i18n_translation' => array(
      'name' => 'i18n_translation',
      'filename' => 'sites/all/modules/i18n/i18n_translation/i18n_translation.module',
      'type' => 'module',
    ),
    'image' => array(
      'name' => 'image',
      'filename' => 'modules/image/image.module',
      'type' => 'module',
    ),
    'joyride' => array(
      'name' => 'joyride',
      'filename' => 'sites/all/modules/joyride/joyride.module',
      'type' => 'module',
    ),
    'l10n_update' => array(
      'name' => 'l10n_update',
      'filename' => 'sites/all/modules/l10n_update/l10n_update.module',
      'type' => 'module',
    ),
    'libraries' => array(
      'name' => 'libraries',
      'filename' => 'sites/all/modules/libraries/libraries.module',
      'type' => 'module',
    ),
    'list' => array(
      'name' => 'list',
      'filename' => 'modules/field/modules/list/list.module',
      'type' => 'module',
    ),
    'locale' => array(
      'name' => 'locale',
      'filename' => 'modules/locale/locale.module',
      'type' => 'module',
    ),
    'menu' => array(
      'name' => 'menu',
      'filename' => 'modules/menu/menu.module',
      'type' => 'module',
    ),
    'module_filter' => array(
      'name' => 'module_filter',
      'filename' => 'sites/all/modules/module_filter/module_filter.module',
      'type' => 'module',
    ),
    'node' => array(
      'name' => 'node',
      'filename' => 'modules/node/node.module',
      'type' => 'module',
    ),
    'number' => array(
      'name' => 'number',
      'filename' => 'modules/field/modules/number/number.module',
      'type' => 'module',
    ),
    'options' => array(
      'name' => 'options',
      'filename' => 'modules/field/modules/options/options.module',
      'type' => 'module',
    ),
    'path' => array(
      'name' => 'path',
      'filename' => 'modules/path/path.module',
      'type' => 'module',
    ),
    'potx' => array(
      'name' => 'potx',
      'filename' => 'sites/all/modules/potx/potx.module',
      'type' => 'module',
    ),
    'rdf' => array(
      'name' => 'rdf',
      'filename' => 'modules/rdf/rdf.module',
      'type' => 'module',
    ),
    'search' => array(
      'name' => 'search',
      'filename' => 'modules/search/search.module',
      'type' => 'module',
    ),
    'shortcut' => array(
      'name' => 'shortcut',
      'filename' => 'modules/shortcut/shortcut.module',
      'type' => 'module',
    ),
    'superfish' => array(
      'name' => 'superfish',
      'filename' => 'sites/all/modules/superfish/superfish.module',
      'type' => 'module',
    ),
    'system' => array(
      'name' => 'system',
      'filename' => 'modules/system/system.module',
      'type' => 'module',
    ),
    'taxonomy' => array(
      'name' => 'taxonomy',
      'filename' => 'modules/taxonomy/taxonomy.module',
      'type' => 'module',
    ),
    'text' => array(
      'name' => 'text',
      'filename' => 'modules/field/modules/text/text.module',
      'type' => 'module',
    ),
    'translation' => array(
      'name' => 'translation',
      'filename' => 'modules/translation/translation.module',
      'type' => 'module',
    ),
    'user' => array(
      'name' => 'user',
      'filename' => 'modules/user/user.module',
      'type' => 'module',
    ),
    'forum' => array(
      'name' => 'forum',
      'filename' => 'modules/forum/forum.module',
      'type' => 'module',
    ),
    'i18n_menu' => array(
      'name' => 'i18n_menu',
      'filename' => 'sites/all/modules/i18n/i18n_menu/i18n_menu.module',
      'type' => 'module',
    ),
    'i18n_path' => array(
      'name' => 'i18n_path',
      'filename' => 'sites/all/modules/i18n/i18n_path/i18n_path.module',
      'type' => 'module',
    ),
    'i18n_taxonomy' => array(
      'name' => 'i18n_taxonomy',
      'filename' => 'sites/all/modules/i18n/i18n_taxonomy/i18n_taxonomy.module',
      'type' => 'module',
    ),
    'i18n_forum' => array(
      'name' => 'i18n_forum',
      'filename' => 'sites/all/modules/i18n/i18n_forum/i18n_forum.module',
      'type' => 'module',
    ),
    'i18n_string' => array(
      'name' => 'i18n_string',
      'filename' => 'sites/all/modules/i18n/i18n_string/i18n_string.module',
      'type' => 'module',
    ),
    'views' => array(
      'name' => 'views',
      'filename' => 'sites/all/modules/views/views.module',
      'type' => 'module',
    ),
    'lingotek' => array(
      'name' => 'lingotek',
      'filename' => 'sites/all/modules/lingotek/lingotek.module',
      'type' => 'module',
    ),
    'admin_menu' => array(
      'name' => 'admin_menu',
      'filename' => 'sites/all/modules/admin_menu/admin_menu.module',
      'type' => 'module',
    ),
    'i18n_block' => array(
      'name' => 'i18n_block',
      'filename' => 'sites/all/modules/i18n/i18n_block/i18n_block.module',
      'type' => 'module',
    ),
    'i18n_sync' => array(
      'name' => 'i18n_sync',
      'filename' => 'sites/all/modules/i18n/i18n_sync/i18n_sync.module',
      'type' => 'module',
    ),
    'title' => array(
      'name' => 'title',
      'filename' => 'sites/all/modules/title/title.module',
      'type' => 'module',
    ),
    'admin_menu_toolbar' => array(
      'name' => 'admin_menu_toolbar',
      'filename' => 'sites/all/modules/admin_menu/admin_menu_toolbar/admin_menu_toolbar.module',
      'type' => 'module',
    ),
    'standard' => array(
      'name' => 'standard',
      'filename' => 'profiles/standard/standard.profile',
      'type' => 'module',
    ),
    'adaptivetheme' => array(
      'name' => 'adaptivetheme',
      'filename' => 'sites/all/themes/adaptivetheme/at_core/adaptivetheme.info',
      'type' => 'theme',
    ),
    'bartik' => array(
      'name' => 'bartik',
      'filename' => 'themes/bartik/bartik.info',
      'type' => 'theme',
    ),
    'pixture_reloaded' => array(
      'name' => 'pixture_reloaded',
      'filename' => 'sites/all/themes/pixture_reloaded/pixture_reloaded.info',
      'type' => 'theme',
    ),
    'seven' => array(
      'name' => 'seven',
      'filename' => 'themes/seven/seven.info',
      'type' => 'theme',
    ),
    'variable_realm' => array(
      'name' => 'variable_realm',
      'filename' => 'sites/all/modules/variable/variable_realm/variable_realm.module',
      'type' => 'module',
    ),
    'variable_store' => array(
      'name' => 'variable_store',
      'filename' => 'sites/all/modules/variable/variable_store/variable_store.module',
      'type' => 'module',
    ),
    'i18n_variable' => array(
      'name' => 'i18n_variable',
      'filename' => 'sites/all/modules/i18n/i18n_variable/i18n_variable.module',
      'type' => 'module',
    ),
    'dblog' => array(
      'name' => 'dblog',
      'filename' => 'modules/dblog/dblog.module',
      'type' => 'module',
    ),
    'variable' => array(
      'name' => 'variable',
      'filename' => 'sites/all/modules/variable/variable.module',
      'type' => 'module',
    ),
    'i18n' => array(
      'name' => 'i18n',
      'filename' => 'sites/all/modules/i18n/i18n.module',
      'type' => 'module',
    ),
  ),
  'lingotek_translate_config_menus' => 'lingotek_translate_config_menus',
  'lingotek_translate_config_misc' => 'lingotek_translate_config_misc',
  'lingotek_translate_config_taxonomies' => 'lingotek_translate_config_taxonomies',
  'lingotek_translate_config_views' => 0,
  'lingotek_translate_config_workflow_id' => '379a944e-6771-49b9-8348-5ee04f3a4d13',
  'lingotek_use_translation_from_drupal' => 1,
  'lingotek_vault' => 11561,
  'lingotek_workbench_tagged_users' => array(
    0 => 'admin',
  ),
  'lingotek_workflow' => '379a944e-6771-49b9-8348-5ee04f3a4d13',
  'locale_language_providers_weight_language' => array(
    'locale-url' => -8,
    'locale-session' => -6,
    'locale-user' => -4,
    'locale-browser' => -2,
    'language-default' => 10,
  ),
  'media__icon_base_directory' => 'public://media-icons',
  'menu_expanded' => array(),
  'menu_masks' => array(
    0 => 501,
    1 => 494,
    2 => 493,
    3 => 490,
    4 => 251,
    5 => 250,
    6 => 247,
    7 => 246,
    8 => 245,
    9 => 242,
    10 => 241,
    11 => 238,
    12 => 234,
    13 => 126,
    14 => 125,
    15 => 124,
    16 => 123,
    17 => 122,
    18 => 121,
    19 => 119,
    20 => 118,
    21 => 117,
    22 => 63,
    23 => 62,
    24 => 61,
    25 => 60,
    26 => 59,
    27 => 58,
    28 => 44,
    29 => 31,
    30 => 30,
    31 => 29,
    32 => 28,
    33 => 26,
    34 => 24,
    35 => 21,
    36 => 15,
    37 => 14,
    38 => 13,
    39 => 11,
    40 => 10,
    41 => 7,
    42 => 6,
    43 => 5,
    44 => 3,
    45 => 2,
    46 => 1,
  ),
  'menu_options_article' => array(
    0 => 'main-menu',
  ),
  'menu_parent_article' => 'main-menu:0',
  'minimum_word_size' => 3,
  'module_filter_recent_modules' => array(),
  'node_admin_theme' => 1,
  'node_cron_last' => 1407775311,
  'node_options_article' => array(
    0 => 'status',
    1 => 'promote',
  ),
  'node_options_forum' => array(
    0 => 'status',
  ),
  'node_options_page' => array(
    0 => 'status',
  ),
  'node_preview_article' => 1,
  'node_rank_comments' => 0,
  'node_rank_promote' => 0,
  'node_rank_recent' => 0,
  'node_rank_relevance' => 0,
  'node_rank_sticky' => 0,
  'node_submitted_article' => 0,
  'node_submitted_page' => FALSE,
  'overlap_cjk' => 1,
  'pathauto_blog_pattern' => 'blogs/[user:name]',
  'pathauto_forum_pattern' => '[term:vocabulary]/[term:name]',
  'pathauto_node_pattern' => 'content/[node:title]',
  'pathauto_punctuation_hyphen' => 1,
  'pathauto_taxonomy_term_pattern' => '[term:vocabulary]/[term:name]',
  'pathauto_user_pattern' => 'users/[user:name]',
  'path_alias_whitelist' => array(
    'node' => TRUE,
    'taxonomy' => TRUE,
    'user' => TRUE,
  ),
  'search_active_modules' => array(
    'node' => 'node',
    'file_entity' => 0,
    'user' => 0,
  ),
  'search_cron_limit' => 100,
  'search_default_module' => 'node',
  'site_403' => '',
  'site_404' => '',
  'site_default_country' => 'US',
  'site_frontpage' => 'home',
  'site_mail' => 'isangil@lternet.edu',
  'site_name' => 'Lost Seal',
  'site_slogan' => '',
  'theme_default' => 'pixture_reloaded',
  'theme_pixture_reloaded_files_directory' => 'public://adaptivetheme/pixture_reloaded_files',
  'theme_pixture_reloaded_settings' => array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'default_logo' => 0,
    'logo_path' => 'public://lostseal_cover.jpg',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'public://favicon.ico',
    'favicon_upload' => '',
    'bigscreen_layout' => 'two_sidebars_right',
    'bigscreen_sidebar_unit' => '%',
    'bigscreen_sidebar_first' => 25,
    'bigscreen_sidebar_second' => 25,
    'bigscreen_page_unit' => '%',
    'bigscreen_page_width' => 100,
    'bigscreen_set_max_width' => 1,
    'bigscreen_max_width_unit' => 'px',
    'bigscreen_max_width' => 1140,
    'bigscreen_media_query' => 'only screen and (min-width:1025px)',
    'tablet_landscape_layout' => 'three_col_grail',
    'tablet_landscape_sidebar_unit' => '%',
    'tablet_landscape_sidebar_first' => 20,
    'tablet_landscape_sidebar_second' => 20,
    'tablet_landscape_page_unit' => '%',
    'tablet_landscape_page_width' => 100,
    'tablet_landscape_media_query' => 'only screen and (min-width:769px) and (max-width:1024px)',
    'tablet_portrait_layout' => 'one_col_vert',
    'tablet_portrait_sidebar_unit' => '%',
    'tablet_portrait_sidebar_first' => 50,
    'tablet_portrait_sidebar_second' => 50,
    'tablet_portrait_page_unit' => '%',
    'tablet_portrait_page_width' => 100,
    'tablet_portrait_media_query' => 'only screen and (min-width:481px) and (max-width:768px)',
    'smalltouch_landscape_layout' => 'one_col_vert',
    'smalltouch_landscape_sidebar_unit' => '%',
    'smalltouch_landscape_sidebar_first' => 50,
    'smalltouch_landscape_sidebar_second' => 50,
    'smalltouch_landscape_media_query' => 'only screen and (min-width:321px) and (max-width:480px)',
    'smalltouch_landscape_page_width' => 100,
    'smalltouch_landscape_page_unit' => '%',
    'smalltouch_portrait_media_query' => 'only screen and (max-width:320px)',
    'smalltouch_portrait_page_width' => 100,
    'smalltouch_portrait_page_unit' => '%',
    'smalltouch_portrait_sidebar_first' => 100,
    'smalltouch_portrait_sidebar_second' => 100,
    'smalltouch_portrait_sidebar_unit' => '%',
    'smalltouch_portrait_layout' => 'one_col_stack',
    'bigscreen_two_brick' => 'two-brick',
    'bigscreen_two_66_33' => 'two-66-33',
    'bigscreen_two_33_66' => 'two-33-66',
    'bigscreen_two_50' => 'two-50',
    'bigscreen_three_25_50_25' => 'three-25-50-25',
    'bigscreen_three_50_25_25' => 'three-50-25-25',
    'bigscreen_three_3x33' => 'three-3x33',
    'bigscreen_three_25_25_50' => 'three-25-25-50',
    'bigscreen_five_5x20' => 'five-5x20-2x3-grid',
    'bigscreen_four_4x25' => 'four-4x25',
    'bigscreen_six_6x16' => 'six-6x16-3x2-grid',
    'bigscreen_three_inset_right' => 'three-inset-right',
    'bigscreen_three_inset_left' => 'three-inset-left',
    'tablet_landscape_two_brick' => 'two-brick',
    'tablet_landscape_two_66_33' => 'two-66-33',
    'tablet_landscape_two_33_66' => 'two-33-66',
    'tablet_landscape_two_50' => 'two-50',
    'tablet_landscape_three_25_50_25' => 'three-25-50-25',
    'tablet_landscape_three_50_25_25' => 'three-50-25-25',
    'tablet_landscape_three_3x33' => 'three-3x33',
    'tablet_landscape_three_25_25_50' => 'three-25-25-50',
    'tablet_landscape_five_5x20' => 'five-5x20-2x3-grid',
    'tablet_landscape_four_4x25' => 'four-4x25',
    'tablet_landscape_six_6x16' => 'six-6x16-3x2-grid',
    'tablet_landscape_three_inset_right' => 'three-inset-right',
    'tablet_landscape_three_inset_left' => 'three-inset-left',
    'tablet_portrait_two_brick' => 'two-brick',
    'tablet_portrait_two_66_33' => 'two-66-33',
    'tablet_portrait_two_33_66' => 'two-33-66',
    'tablet_portrait_two_50' => 'two-50',
    'tablet_portrait_three_25_50_25' => 'three-25-50-25-stack-top',
    'tablet_portrait_three_50_25_25' => 'three-50-25-25-stack-top',
    'tablet_portrait_three_3x33' => 'three-3x33-stack-top',
    'tablet_portrait_three_25_25_50' => 'three-25-25-50-stack-top',
    'tablet_portrait_five_5x20' => 'five-5x20-1x2x2-grid',
    'tablet_portrait_four_4x25' => 'four-4x25-2x2-grid',
    'tablet_portrait_six_6x16' => 'six-6x16-2x3-grid',
    'tablet_portrait_three_inset_right' => 'three-inset-right-wrap',
    'tablet_portrait_three_inset_left' => 'three-inset-left-wrap',
    'smalltouch_landscape_two_brick' => 'two-brick-stack',
    'smalltouch_landscape_two_66_33' => 'two-66-33-stack',
    'smalltouch_landscape_two_33_66' => 'two-33-66-stack',
    'smalltouch_landscape_two_50' => 'two-50-stack',
    'smalltouch_landscape_three_25_50_25' => 'three-25-50-25-stack',
    'smalltouch_landscape_three_50_25_25' => 'three-50-25-25-stack',
    'smalltouch_landscape_three_3x33' => 'three-3x33-stack',
    'smalltouch_landscape_three_25_25_50' => 'three-25-25-50-stack',
    'smalltouch_landscape_five_5x20' => 'five-5x20-stack',
    'smalltouch_landscape_four_4x25' => 'four-4x25-stack',
    'smalltouch_landscape_six_6x16' => 'six-6x16-stack',
    'smalltouch_landscape_three_inset_right' => 'three-inset-right-stack',
    'smalltouch_landscape_three_inset_left' => 'three-inset-left-stack',
    'global_default_layout_toggle' => 0,
    'global_default_layout' => 'smalltouch-portrait',
    'disable_responsive_styles' => 0,
    'global_files_path' => 'public_files',
    'custom_files_path' => '',
    'combine_css_files' => 0,
    'combine_js_files' => 0,
    'enable_custom_media_queries' => 0,
    'load_html5js' => 1,
    'load_matchmediajs' => 0,
    'load_onmediaqueryjs' => 0,
    'load_ltie8css' => 0,
    'load_respondjs' => 0,
    'load_scalefixjs' => 0,
    'adaptivetheme_meta_viewport' => 'width=device-width, initial-scale=1',
    'adaptivetheme_meta_mobileoptimized' => 'width',
    'adaptivetheme_meta_handheldfriendly' => 'true',
    'adaptivetheme_meta_apple_mobile_web_app_capable' => 'yes',
    'adaptivetheme_meta_ie_document_mode' => '',
    'adaptivetheme_meta_clear_type' => 0,
    'expose_regions' => 0,
    'show_window_size' => 0,
    'atcore_version_test' => 0,
    'load_all_panels' => 0,
    'load_all_panels_no_sidebars' => 0,
    'enable_extensions' => 1,
    'enable_font_settings' => 1,
    'enable_heading_settings' => 1,
    'enable_image_settings' => 1,
    'enable_apple_touch_icons' => 0,
    'enable_exclude_css' => 0,
    'enable_custom_css' => 0,
    'enable_context_regions' => 0,
    'enable_menu_toggle' => 0,
    'enable_float_region_blocks' => 0,
    'enable_markup_overides' => 1,
    'at-settings__active_tab' => 'edit-bigscreen',
    'base_font_type' => 'gwf',
    'base_font' => 'bf-sss',
    'base_font_gwf' => 'Droid Sans',
    'base_font_gwf_add_styles' => 0,
    'base_font_gwf_add_styles_300' => 0,
    'base_font_gwf_add_styles_300italic' => 0,
    'base_font_gwf_add_styles_400' => 0,
    'base_font_gwf_add_styles_400italic' => 0,
    'base_font_gwf_add_styles_700' => 0,
    'base_font_gwf_add_styles_700italic' => 0,
    'base_font_gwf_add_charsets' => 0,
    'base_font_gwf_add_charsets_latin' => 0,
    'base_font_gwf_add_charsets_latin-ext' => 0,
    'base_font_gwf_add_charsets_greek' => 0,
    'base_font_gwf_add_charsets_greek-ext' => 0,
    'base_font_gwf_add_charsets_cyrillic' => 0,
    'base_font_gwf_add_charsets_cyrillic-ext' => 0,
    'base_font_gwf_add_charsets_khmer' => 0,
    'base_font_gwf_add_charsets_vietnamese' => 0,
    'base_font_cfs' => '',
    'base_font_size' => '<none>',
    'site_name_font_type' => 'gwf',
    'site_name_font' => 'bf-sss',
    'site_name_font_gwf' => 'Yanone Kaffeesatz',
    'site_name_font_gwf_add_styles' => 0,
    'site_name_font_gwf_add_styles_300' => 0,
    'site_name_font_gwf_add_styles_300italic' => 0,
    'site_name_font_gwf_add_styles_400' => 0,
    'site_name_font_gwf_add_styles_400italic' => 0,
    'site_name_font_gwf_add_styles_700' => 0,
    'site_name_font_gwf_add_styles_700italic' => 0,
    'site_name_font_gwf_add_charsets' => 0,
    'site_name_font_gwf_add_charsets_latin' => 0,
    'site_name_font_gwf_add_charsets_latin-ext' => 0,
    'site_name_font_gwf_add_charsets_greek' => 0,
    'site_name_font_gwf_add_charsets_greek-ext' => 0,
    'site_name_font_gwf_add_charsets_cyrillic' => 0,
    'site_name_font_gwf_add_charsets_cyrillic-ext' => 0,
    'site_name_font_gwf_add_charsets_khmer' => 0,
    'site_name_font_gwf_add_charsets_vietnamese' => 0,
    'site_name_font_cfs' => '',
    'site_name_font_size' => '1.6em',
    'site_slogan_font_type' => '',
    'site_slogan_font' => 'bf-sss',
    'site_slogan_font_gwf' => '',
    'site_slogan_font_gwf_add_styles' => 0,
    'site_slogan_font_gwf_add_styles_300' => 0,
    'site_slogan_font_gwf_add_styles_300italic' => 0,
    'site_slogan_font_gwf_add_styles_400' => 0,
    'site_slogan_font_gwf_add_styles_400italic' => 0,
    'site_slogan_font_gwf_add_styles_700' => 0,
    'site_slogan_font_gwf_add_styles_700italic' => 0,
    'site_slogan_font_gwf_add_charsets' => 0,
    'site_slogan_font_gwf_add_charsets_latin' => 0,
    'site_slogan_font_gwf_add_charsets_latin-ext' => 0,
    'site_slogan_font_gwf_add_charsets_greek' => 0,
    'site_slogan_font_gwf_add_charsets_greek-ext' => 0,
    'site_slogan_font_gwf_add_charsets_cyrillic' => 0,
    'site_slogan_font_gwf_add_charsets_cyrillic-ext' => 0,
    'site_slogan_font_gwf_add_charsets_khmer' => 0,
    'site_slogan_font_gwf_add_charsets_vietnamese' => 0,
    'site_slogan_font_cfs' => '',
    'site_slogan_font_size' => '1.2em',
    'page_title_font_type' => 'gwf',
    'page_title_font' => 'bf-sss',
    'page_title_font_gwf' => 'Yanone Kaffeesatz',
    'page_title_font_gwf_add_styles' => 0,
    'page_title_font_gwf_add_styles_300' => 0,
    'page_title_font_gwf_add_styles_300italic' => 0,
    'page_title_font_gwf_add_styles_400' => 0,
    'page_title_font_gwf_add_styles_400italic' => 0,
    'page_title_font_gwf_add_styles_700' => 0,
    'page_title_font_gwf_add_styles_700italic' => 0,
    'page_title_font_gwf_add_charsets' => 0,
    'page_title_font_gwf_add_charsets_latin' => 0,
    'page_title_font_gwf_add_charsets_latin-ext' => 0,
    'page_title_font_gwf_add_charsets_greek' => 0,
    'page_title_font_gwf_add_charsets_greek-ext' => 0,
    'page_title_font_gwf_add_charsets_cyrillic' => 0,
    'page_title_font_gwf_add_charsets_cyrillic-ext' => 0,
    'page_title_font_gwf_add_charsets_khmer' => 0,
    'page_title_font_gwf_add_charsets_vietnamese' => 0,
    'page_title_font_cfs' => '',
    'page_title_font_size' => '1.6em',
    'node_title_font_type' => 'gwf',
    'node_title_font' => 'bf-sss',
    'node_title_font_gwf' => 'Yanone Kaffeesatz',
    'node_title_font_gwf_add_styles' => 0,
    'node_title_font_gwf_add_styles_300' => 0,
    'node_title_font_gwf_add_styles_300italic' => 0,
    'node_title_font_gwf_add_styles_400' => 0,
    'node_title_font_gwf_add_styles_400italic' => 0,
    'node_title_font_gwf_add_styles_700' => 0,
    'node_title_font_gwf_add_styles_700italic' => 0,
    'node_title_font_gwf_add_charsets' => 0,
    'node_title_font_gwf_add_charsets_latin' => 0,
    'node_title_font_gwf_add_charsets_latin-ext' => 0,
    'node_title_font_gwf_add_charsets_greek' => 0,
    'node_title_font_gwf_add_charsets_greek-ext' => 0,
    'node_title_font_gwf_add_charsets_cyrillic' => 0,
    'node_title_font_gwf_add_charsets_cyrillic-ext' => 0,
    'node_title_font_gwf_add_charsets_khmer' => 0,
    'node_title_font_gwf_add_charsets_vietnamese' => 0,
    'node_title_font_cfs' => '',
    'node_title_font_size' => '1.5em',
    'comment_title_font_type' => '',
    'comment_title_font' => 'bf-sss',
    'comment_title_font_gwf' => '',
    'comment_title_font_gwf_add_styles' => 0,
    'comment_title_font_gwf_add_styles_300' => 0,
    'comment_title_font_gwf_add_styles_300italic' => 0,
    'comment_title_font_gwf_add_styles_400' => 0,
    'comment_title_font_gwf_add_styles_400italic' => 0,
    'comment_title_font_gwf_add_styles_700' => 0,
    'comment_title_font_gwf_add_styles_700italic' => 0,
    'comment_title_font_gwf_add_charsets' => 0,
    'comment_title_font_gwf_add_charsets_latin' => 0,
    'comment_title_font_gwf_add_charsets_latin-ext' => 0,
    'comment_title_font_gwf_add_charsets_greek' => 0,
    'comment_title_font_gwf_add_charsets_greek-ext' => 0,
    'comment_title_font_gwf_add_charsets_cyrillic' => 0,
    'comment_title_font_gwf_add_charsets_cyrillic-ext' => 0,
    'comment_title_font_gwf_add_charsets_khmer' => 0,
    'comment_title_font_gwf_add_charsets_vietnamese' => 0,
    'comment_title_font_cfs' => '',
    'comment_title_font_size' => '1.2em',
    'block_title_font_type' => 'gwf',
    'block_title_font' => 'bf-sss',
    'block_title_font_gwf' => 'Yanone Kaffeesatz',
    'block_title_font_gwf_add_styles' => 0,
    'block_title_font_gwf_add_styles_300' => 0,
    'block_title_font_gwf_add_styles_300italic' => 0,
    'block_title_font_gwf_add_styles_400' => 0,
    'block_title_font_gwf_add_styles_400italic' => 0,
    'block_title_font_gwf_add_styles_700' => 0,
    'block_title_font_gwf_add_styles_700italic' => 0,
    'block_title_font_gwf_add_charsets' => 0,
    'block_title_font_gwf_add_charsets_latin' => 0,
    'block_title_font_gwf_add_charsets_latin-ext' => 0,
    'block_title_font_gwf_add_charsets_greek' => 0,
    'block_title_font_gwf_add_charsets_greek-ext' => 0,
    'block_title_font_gwf_add_charsets_cyrillic' => 0,
    'block_title_font_gwf_add_charsets_cyrillic-ext' => 0,
    'block_title_font_gwf_add_charsets_khmer' => 0,
    'block_title_font_gwf_add_charsets_vietnamese' => 0,
    'block_title_font_cfs' => '',
    'block_title_font_size' => '1.4em',
    'content_headings_h1h4_font_type' => '',
    'content_headings_h1h4_font' => 'bf-sss',
    'content_headings_h1h4_font_gwf' => '',
    'content_headings_h1h4_font_gwf_add_styles' => 0,
    'content_headings_h1h4_font_gwf_add_styles_300' => 0,
    'content_headings_h1h4_font_gwf_add_styles_300italic' => 0,
    'content_headings_h1h4_font_gwf_add_styles_400' => 0,
    'content_headings_h1h4_font_gwf_add_styles_400italic' => 0,
    'content_headings_h1h4_font_gwf_add_styles_700' => 0,
    'content_headings_h1h4_font_gwf_add_styles_700italic' => 0,
    'content_headings_h1h4_font_gwf_add_charsets' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_latin' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_latin-ext' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_greek' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_greek-ext' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_cyrillic' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_cyrillic-ext' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_khmer' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_vietnamese' => 0,
    'content_headings_h1h4_font_cfs' => '',
    'content_headings_h5h6_font_type' => '',
    'content_headings_h5h6_font' => 'bf-sss',
    'content_headings_h5h6_font_gwf' => '',
    'content_headings_h5h6_font_gwf_add_styles' => 0,
    'content_headings_h5h6_font_gwf_add_styles_300' => 0,
    'content_headings_h5h6_font_gwf_add_styles_300italic' => 0,
    'content_headings_h5h6_font_gwf_add_styles_400' => 0,
    'content_headings_h5h6_font_gwf_add_styles_400italic' => 0,
    'content_headings_h5h6_font_gwf_add_styles_700' => 0,
    'content_headings_h5h6_font_gwf_add_styles_700italic' => 0,
    'content_headings_h5h6_font_gwf_add_charsets' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_latin' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_latin-ext' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_greek' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_greek-ext' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_cyrillic' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_cyrillic-ext' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_khmer' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_vietnamese' => 0,
    'content_headings_h5h6_font_cfs' => '',
    'h1_font_size' => '1.6em',
    'h2_font_size' => '1.4em',
    'h3_font_size' => '1.3em',
    'h4_font_size' => '1.1em',
    'h5_font_size' => '1em',
    'h6_font_size' => '1em',
    'main_menu_font_type' => '',
    'main_menu_font' => 'bf-sss',
    'main_menu_font_gwf' => '',
    'main_menu_font_gwf_add_styles' => 0,
    'main_menu_font_gwf_add_styles_300' => 0,
    'main_menu_font_gwf_add_styles_300italic' => 0,
    'main_menu_font_gwf_add_styles_400' => 0,
    'main_menu_font_gwf_add_styles_400italic' => 0,
    'main_menu_font_gwf_add_styles_700' => 0,
    'main_menu_font_gwf_add_styles_700italic' => 0,
    'main_menu_font_gwf_add_charsets' => 0,
    'main_menu_font_gwf_add_charsets_latin' => 0,
    'main_menu_font_gwf_add_charsets_latin-ext' => 0,
    'main_menu_font_gwf_add_charsets_greek' => 0,
    'main_menu_font_gwf_add_charsets_greek-ext' => 0,
    'main_menu_font_gwf_add_charsets_cyrillic' => 0,
    'main_menu_font_gwf_add_charsets_cyrillic-ext' => 0,
    'main_menu_font_gwf_add_charsets_khmer' => 0,
    'main_menu_font_gwf_add_charsets_vietnamese' => 0,
    'main_menu_font_cfs' => '',
    'main_menu_font_size' => '1.4em',
    'secondary_menu_font_type' => '',
    'secondary_menu_font' => 'bf-sss',
    'secondary_menu_font_gwf' => '',
    'secondary_menu_font_gwf_add_styles' => 0,
    'secondary_menu_font_gwf_add_styles_300' => 0,
    'secondary_menu_font_gwf_add_styles_300italic' => 0,
    'secondary_menu_font_gwf_add_styles_400' => 0,
    'secondary_menu_font_gwf_add_styles_400italic' => 0,
    'secondary_menu_font_gwf_add_styles_700' => 0,
    'secondary_menu_font_gwf_add_styles_700italic' => 0,
    'secondary_menu_font_gwf_add_charsets' => 0,
    'secondary_menu_font_gwf_add_charsets_latin' => 0,
    'secondary_menu_font_gwf_add_charsets_latin-ext' => 0,
    'secondary_menu_font_gwf_add_charsets_greek' => 0,
    'secondary_menu_font_gwf_add_charsets_greek-ext' => 0,
    'secondary_menu_font_gwf_add_charsets_cyrillic' => 0,
    'secondary_menu_font_gwf_add_charsets_cyrillic-ext' => 0,
    'secondary_menu_font_gwf_add_charsets_khmer' => 0,
    'secondary_menu_font_gwf_add_charsets_vietnamese' => 0,
    'secondary_menu_font_cfs' => '',
    'secondary_menu_font_size' => '1.2em',
    'block_menu_font_type' => '',
    'block_menu_font' => 'bf-sss',
    'block_menu_font_gwf' => '',
    'block_menu_font_gwf_add_styles' => 0,
    'block_menu_font_gwf_add_styles_300' => 0,
    'block_menu_font_gwf_add_styles_300italic' => 0,
    'block_menu_font_gwf_add_styles_400' => 0,
    'block_menu_font_gwf_add_styles_400italic' => 0,
    'block_menu_font_gwf_add_styles_700' => 0,
    'block_menu_font_gwf_add_styles_700italic' => 0,
    'block_menu_font_gwf_add_charsets' => 0,
    'block_menu_font_gwf_add_charsets_latin' => 0,
    'block_menu_font_gwf_add_charsets_latin-ext' => 0,
    'block_menu_font_gwf_add_charsets_greek' => 0,
    'block_menu_font_gwf_add_charsets_greek-ext' => 0,
    'block_menu_font_gwf_add_charsets_cyrillic' => 0,
    'block_menu_font_gwf_add_charsets_cyrillic-ext' => 0,
    'block_menu_font_gwf_add_charsets_khmer' => 0,
    'block_menu_font_gwf_add_charsets_vietnamese' => 0,
    'block_menu_font_cfs' => '',
    'block_menu_font_size' => '<none>',
    'selectors_font_type' => '',
    'selectors_font' => 'bf-sss',
    'selectors_font_gwf' => '',
    'selectors_font_add_styles' => 0,
    'selectors_font_add_styles_300' => 0,
    'selectors_font_add_styles_300italic' => 0,
    'selectors_font_add_styles_400' => 0,
    'selectors_font_add_styles_400italic' => 0,
    'selectors_font_add_styles_700' => 0,
    'selectors_font_add_styles_700italic' => 0,
    'selectors_font_add_charsets' => 0,
    'selectors_font_add_charsets_latin' => 0,
    'selectors_font_add_charsets_latin-ext' => 0,
    'selectors_font_add_charsets_greek' => 0,
    'selectors_font_add_charsets_greek-ext' => 0,
    'selectors_font_add_charsets_cyrillic' => 0,
    'selectors_font_add_charsets_cyrillic-ext' => 0,
    'selectors_font_add_charsets_khmer' => 0,
    'selectors_font_add_charsets_vietnamese' => 0,
    'selectors_font_cfs' => '',
    'selectors_css' => '',
    'site_name_case' => 'snc-n',
    'site_name_weight' => 'snw-n',
    'site_name_alignment' => 'sna-l',
    'site_name_shadow' => 'sns-n',
    'site_slogan_case' => 'ssc-n',
    'site_slogan_weight' => 'ssw-n',
    'site_slogan_alignment' => 'ssa-l',
    'site_slogan_shadow' => 'sss-n',
    'page_title_case' => 'ptc-n',
    'page_title_weight' => 'ptw-b',
    'page_title_alignment' => 'pta-l',
    'page_title_shadow' => 'pts-n',
    'node_title_case' => 'ntc-n',
    'node_title_weight' => 'ntw-b',
    'node_title_alignment' => 'nta-l',
    'node_title_shadow' => 'nts-n',
    'comment_title_case' => 'ctc-n',
    'comment_title_weight' => 'ctw-b',
    'comment_title_alignment' => 'cta-l',
    'comment_title_shadow' => 'cts-n',
    'block_title_case' => 'btc-n',
    'block_title_weight' => 'btw-b',
    'block_title_alignment' => 'bta-l',
    'block_title_shadow' => 'bts-n',
    'image_alignment' => 'ia-n',
    'image_alignment_teaser' => 'iat-n',
    'image_caption_teaser' => 0,
    'image_caption_full' => 0,
    'image_teaser' => 0,
    'global_gutter_width' => '',
    'page_content_type_suggestions' => 0,
    'menu_item_span_elements' => 0,
    'breadcrumb_display' => 1,
    'breadcrumb_home' => 0,
    'breadcrumb_label' => 0,
    'breadcrumb_title' => 0,
    'breadcrumb_separator' => ' &#187; ',
    'login_block_remove_links' => 0,
    'login_block_remove_openid' => 0,
    'horizontal_login_block' => 0,
    'user_block_user_name' => 0,
    'frontpage_remove_title' => 0,
    'unset_block_system_main_front' => 0,
    'feed_icons_hide' => 0,
    'comments_hide_title' => 0,
    'unset_menu_titles' => 0,
    'adv_search_extra_fieldsets' => 0,
    'skip_link_target' => '#main-content',
    'rel_author' => 0,
    'logo_title' => 0,
    'extra_page_classes' => 1,
    'extra_article_classes' => 1,
    'extra_comment_classes' => 1,
    'extra_block_classes' => 1,
    'extra_menu_classes' => 1,
    'extra_item_list_classes' => 1,
    'attribution_toggle' => 0,
    'corner_radius' => 'rc-4',
    'box_shadows' => 'bs-n',
    'body_background' => 'bb-n',
    'menu_bar_position' => 'mbp-l',
    'menu_bullets' => 'mb-dd',
    'at__active_tab' => 'edit-font',
    'at-release' => '7.x-3.x',
    'at-color' => 1,
    'scheme' => '',
    'palette' => array(
      'base' => '#e8eaea',
      'page' => '#ffffff',
      'sitename' => '#b7b7b7',
      'slogan' => '#fefefe',
      'header' => '#fdfdfd',
      'mmenu' => '#7885b6',
      'link' => '#4d637a',
      'top' => '#ffffff',
      'bottom' => '#fefefe',
      'ftop' => '#ffffff',
      'fbottom' => '#ffffff',
      'text' => '#555555',
      'blockh' => '#e0e9f0',
      'blockht' => '#103356',
      'blockbg' => '#efeff0',
      'borders' => '#f5f4f4',
      'sticky' => '#f7f7f7',
    ),
    'theme' => 'pixture_reloaded',
    'info' => array(
      'fields' => array(
        'base' => 'Base',
        'page' => 'Page background',
        'sitename' => 'Site name',
        'slogan' => 'Slogan',
        'header' => 'Header text',
        'mmenu' => 'Main Menu links',
        'link' => 'Links',
        'top' => 'Header top',
        'bottom' => 'Header bottom',
        'ftop' => 'Footer top',
        'fbottom' => 'Footer bottom',
        'text' => 'Text',
        'blockh' => 'Block title bg',
        'blockht' => 'Block title',
        'blockbg' => 'Block body',
        'borders' => 'Borders',
        'sticky' => 'Sticky teaser',
      ),
      'schemes' => array(
        'default' => array(
          'title' => 'Girly Pink (default)',
          'colors' => array(
            'base' => '#eb52c1',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#b21f88',
            'top' => '#b800a5',
            'bottom' => '#ff6bff',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#555555',
            'blockh' => '#eb5ac3',
            'blockht' => '#fffffc',
            'blockbg' => '#f9cbec',
            'borders' => '#e9e9e9',
            'sticky' => '#f7f7f7',
          ),
        ),
        'redcarpet' => array(
          'title' => 'Red Carpet',
          'colors' => array(
            'base' => '#de8291',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#c55964',
            'top' => '#861509',
            'bottom' => '#f8306a',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#555555',
            'blockh' => '#df8796',
            'blockht' => '#fffffc',
            'blockbg' => '#f5d9de',
            'borders' => '#e9e9e9',
            'sticky' => '#f7f7f7',
          ),
        ),
        'orangesunset' => array(
          'title' => 'Orange Sunset',
          'colors' => array(
            'base' => '#f7b42b',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#8e6130',
            'top' => '#ec8c04',
            'bottom' => '#fade42',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#555555',
            'blockh' => '#f7b836',
            'blockht' => '#fffffc',
            'blockbg' => '#fde9c0',
            'borders' => '#e9e9e9',
            'sticky' => '#f7f7f7',
          ),
        ),
        'goldyellow' => array(
          'title' => 'Gold Yellow',
          'colors' => array(
            'base' => '#d1bc00',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#6c7019',
            'top' => '#d5be01',
            'bottom' => '#f0fd58',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#555555',
            'blockh' => '#d3bf0d',
            'blockht' => '#fffffc',
            'blockbg' => '#f1ebb3',
            'borders' => '#e9e9e9',
            'sticky' => '#f7f7f7',
          ),
        ),
        'sandstone' => array(
          'title' => 'Sandstone',
          'colors' => array(
            'base' => '#d1681d',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#8b4513',
            'top' => '#d37029',
            'bottom' => '#d2691e',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#000000',
            'blockh' => '#d37029',
            'blockht' => '#fffffc',
            'blockbg' => '#f1d2bc',
            'borders' => '#e9e9e9',
            'sticky' => '#f7f7f7',
          ),
        ),
        'caramelbrown' => array(
          'title' => 'Caramel Brown',
          'colors' => array(
            'base' => '#d59648',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#865518',
            'top' => '#572e05',
            'bottom' => '#eb8919',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#555555',
            'blockh' => '#d79b51',
            'blockht' => '#fffffc',
            'blockbg' => '#f2e0c8',
            'borders' => '#e9e9e9',
            'sticky' => '#f7f7f7',
          ),
        ),
        'earthbrown' => array(
          'title' => 'Earth Brown',
          'colors' => array(
            'base' => '#cfb377',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#90712c',
            'top' => '#463406',
            'bottom' => '#e6bd5c',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#555555',
            'blockh' => '#d1b77e',
            'blockht' => '#fffffc',
            'blockbg' => '#f1e8d6',
            'borders' => '#e9e9e9',
            'sticky' => '#f7f7f7',
          ),
        ),
        'olivegarden' => array(
          'title' => 'Olive Garden',
          'colors' => array(
            'base' => '#afc94a',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#61751f',
            'top' => '#2d3701',
            'bottom' => '#d2f943',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#555555',
            'blockh' => '#b3cc53',
            'blockht' => '#fffffc',
            'blockbg' => '#e7efc9',
            'borders' => '#e9e9e9',
            'sticky' => '#f7f7f7',
          ),
        ),
        'forestgreen' => array(
          'title' => 'Forest Green',
          'colors' => array(
            'base' => '#9bc068',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#3c7c41',
            'top' => '#0e3d0b',
            'bottom' => '#6beb37',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#555555',
            'blockh' => '#a0c370',
            'blockht' => '#fffffc',
            'blockbg' => '#e1ecd2',
            'borders' => '#e9e9e9',
            'sticky' => '#f7f7f7',
          ),
        ),
        'teal' => array(
          'title' => 'Teal',
          'colors' => array(
            'base' => '#83b49f',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#486156',
            'top' => '#174431',
            'bottom' => '#52bf90',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#555555',
            'blockh' => '#89b8a4',
            'blockht' => '#fffffc',
            'blockbg' => '#dae9e2',
            'borders' => '#e9e9e9',
            'sticky' => '#f7f7f7',
          ),
        ),
        'aquamarine' => array(
          'title' => 'Aquamarine',
          'colors' => array(
            'base' => '#55c0e2',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#000000',
            'top' => '#085360',
            'bottom' => '#007e94',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#555555',
            'blockh' => '#5ec3e3',
            'blockht' => '#fffffc',
            'blockbg' => '#ccecf6',
            'borders' => '#e9e9e9',
            'sticky' => '#f7f7f7',
          ),
        ),
        'oceanwater' => array(
          'title' => 'Ocean Water',
          'colors' => array(
            'base' => '#7bc0ea',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#3561b1',
            'top' => '#025fb1',
            'bottom' => '#62c8fd',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#555555',
            'blockh' => '#82c3eb',
            'blockht' => '#fffffc',
            'blockbg' => '#d8ecf9',
            'borders' => '#e9e9e9',
            'sticky' => '#f7f7f7',
          ),
        ),
        'deepblue' => array(
          'title' => 'Deep Blue',
          'colors' => array(
            'base' => '#1c44a9',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#4b5cc3',
            'top' => '#062984',
            'bottom' => '#5283ff',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#555555',
            'blockh' => '#284ead',
            'blockht' => '#fffffc',
            'blockbg' => '#bbc7e5',
            'borders' => '#e9e9e9',
            'sticky' => '#f7f7f7',
          ),
        ),
        'graphite' => array(
          'title' => 'Graphite',
          'colors' => array(
            'base' => '#9397d7',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#575dc1',
            'top' => '#091c3e',
            'bottom' => '#d0d6f6',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#555555',
            'blockh' => '#203254',
            'blockht' => '#fffffc',
            'blockbg' => '#dfe0f3',
            'borders' => '#e9e9e9',
            'sticky' => '#f7f7f7',
          ),
        ),
        'violet' => array(
          'title' => 'Violet',
          'colors' => array(
            'base' => '#ba90c6',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#935b9f',
            'top' => '#250c27',
            'bottom' => '#c271d0',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#555555',
            'blockh' => '#be96c9',
            'blockht' => '#fffffc',
            'blockbg' => '#eadeee',
            'borders' => '#e9e9e9',
            'sticky' => '#f7f7f7',
          ),
        ),
        'purplehaze' => array(
          'title' => 'Purple Haze',
          'colors' => array(
            'base' => '#b0a2f6',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#7958a7',
            'top' => '#25008f',
            'bottom' => '#c49eff',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#555555',
            'blockh' => '#b4a7f6',
            'blockht' => '#fffffc',
            'blockbg' => '#e7e3fC',
            'borders' => '#e9e9e9',
            'sticky' => '#f7f7f7',
          ),
        ),
        'silver' => array(
          'title' => 'Silver',
          'colors' => array(
            'base' => '#aaaeb1',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#4d637a',
            'top' => '#8c909b',
            'bottom' => '#eeecec',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#555555',
            'blockh' => '#aeb2b5',
            'blockht' => '#fffffc',
            'blockbg' => '#e6e7e8',
            'borders' => '#e9e9e9',
            'sticky' => '#f7f7f7',
          ),
        ),
        'ash' => array(
          'title' => 'Ash',
          'colors' => array(
            'base' => '#464849',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#2f416f',
            'top' => '#2a2b2d',
            'bottom' => '#5d6779',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#555555',
            'blockh' => '#4f5152',
            'blockht' => '#ffffff',
            'blockbg' => '#c8c8c9',
            'borders' => '#c8c8c9',
            'sticky' => '#c8c8c9',
          ),
        ),
        'gothic' => array(
          'title' => 'Gothic',
          'colors' => array(
            'base' => '#202020',
            'page' => '#ffffff',
            'sitename' => '#feffff',
            'slogan' => '#fefefe',
            'header' => '#fdfdfd',
            'mmenu' => '#fffffe',
            'link' => '#11275f',
            'top' => '#000000',
            'bottom' => '#808080',
            'ftop' => '#181818',
            'fbottom' => '#343434',
            'text' => '#000000',
            'blockh' => '#2b2b2b',
            'blockht' => '#ffffff',
            'blockbg' => '#bdbdbd',
            'borders' => '#bdbdbd',
            'sticky' => '#bdbdbd',
          ),
        ),
        '' => array(
          'title' => 'Custom',
          'colors' => array(),
        ),
      ),
      'css' => array(
        0 => 'color/colors.css',
      ),
      'copy' => array(
        0 => 'images/bullet-round.png',
        1 => 'images/bullet-sm-arrow-right.png',
        2 => 'images/bullet-sm-arrow-down.png',
        3 => 'images/button.gif',
        4 => 'images/button-o.gif',
      ),
      'gradients' => array(
        0 => array(
          'dimension' => array(
            0 => 0,
            1 => 0,
            2 => 800,
            3 => 94,
          ),
          'direction' => 'vertical',
          'colors' => array(
            0 => 'top',
            1 => 'bottom',
          ),
        ),
      ),
      'fill' => array(
        'base' => array(
          0 => 0,
          1 => 0,
          2 => 800,
          3 => 570,
        ),
        'link' => array(
          0 => 240,
          1 => 530,
          2 => 40,
          3 => 40,
        ),
      ),
      'slices' => array(
        'images/header.png' => array(
          0 => 2,
          1 => 0,
          2 => 512,
          3 => 88,
        ),
        'images/header-tile.png' => array(
          0 => 792,
          1 => 0,
          2 => 8,
          3 => 88,
        ),
        'images/menu-tile.png' => array(
          0 => 792,
          1 => 0,
          2 => 8,
          3 => 32,
        ),
        'images/bg-footer.png' => array(
          0 => 792,
          1 => 0,
          2 => 8,
          3 => 88,
        ),
        'images/bg-footer-tile.png' => array(
          0 => 792,
          1 => 87,
          2 => 1,
          3 => 1,
        ),
        'images/bg-menu.png' => array(
          0 => 0,
          1 => 88,
          2 => 8,
          3 => 32,
        ),
        'images/bg-title.png' => array(
          0 => 20,
          1 => 130,
          2 => 10,
          3 => 10,
        ),
        'images/bg-wall.png' => array(
          0 => 792,
          1 => 120,
          2 => 8,
          3 => 408,
        ),
        'images/bg-bar-lite.png' => array(
          0 => 0,
          1 => 530,
          2 => 8,
          3 => 40,
        ),
        'images/bg-bar.png' => array(
          0 => 20,
          1 => 530,
          2 => 8,
          3 => 40,
        ),
        'images/bg-lbar-lite.png' => array(
          0 => 270,
          1 => 530,
          2 => 8,
          3 => 40,
        ),
        'images/bg-lbar.png' => array(
          0 => 250,
          1 => 530,
          2 => 8,
          3 => 40,
        ),
        'images/sf-hover-tile.png' => array(
          0 => 0,
          1 => 30,
          2 => 250,
          3 => 1,
        ),
      ),
      'blend_target' => '#ffffff',
      'preview_image' => 'color/color-preview.png',
      'preview_css' => 'color/preview.css',
      'base_image' => 'color/base.png',
    ),
    'favicon_mimetype' => 'image/vnd.microsoft.icon',
  ),
  'user_admin_role' => 3,
  'user_pictures' => 1,
  'user_picture_dimensions' => '1024x1024',
  'user_picture_file_size' => 800,
  'user_picture_style' => 'thumbnail',
  'user_register' => 2,
  'variable_module_list' => array(
    'i18n' => array(
      0 => 'i18n_language_list',
    ),
    'i18n_string' => array(
      0 => 'i18n_string_translate_langcode_en',
      1 => 'i18n_string_allowed_formats',
      2 => 'i18n_string_source_language',
      3 => 'i18n_string_debug',
    ),
    'forum' => array(
      0 => 'forum_hot_topic',
      1 => 'forum_per_page',
      2 => 'forum_order',
      3 => 'forum_nav_vocabulary',
      4 => 'forum_containers',
    ),
    'i18n_node' => array(
      0 => 'i18n_hide_translation_links',
      1 => 'i18n_node_default_language_none',
      2 => 'i18n_node_options_article',
      3 => 'i18n_node_options_page',
      4 => 'i18n_node_options_forum',
      5 => 'i18n_node_extended_article',
      6 => 'i18n_node_extended_page',
      7 => 'i18n_node_extended_forum',
    ),
    'i18n_select' => array(
      0 => 'i18n_select_nodes',
      1 => 'i18n_select_taxonomy',
      2 => 'i18n_select_page_mode',
      3 => 'i18n_select_page_list',
      4 => 'i18n_select_page_block',
      5 => 'i18n_select_skip_tags',
    ),
    'i18n_sync' => array(
      0 => 'i18n_sync_node_type_article',
      1 => 'i18n_sync_node_type_page',
      2 => 'i18n_sync_node_type_forum',
    ),
    'variable_realm' => array(
      0 => 'variable_realm_list_global',
      1 => 'variable_realm_list_language',
      2 => 'variable_realm_weight_global',
      3 => 'variable_realm_weight_language',
    ),
    'i18n_variable' => array(
      0 => 'i18n_variable_conf',
      1 => 'i18n_variable_list',
    ),
  ),
  'variable_realm_list_language' => array(
    0 => 'site_name',
    1 => 'site_slogan',
  ),
  '404_fast_paths_exclude' => '/\\/(?:styles)\\//',
  '404_fast_paths' => '/\\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i',
  '404_fast_html' => '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>',
);
  $realm_variables['language']['en'] = array(
  'site_name' => 'Lost Seal',
  'site_slogan' => '',
);
  $realm_variables['language']['es'] = array(
  'site_name' => 'La Foca Perdida',
  'site_slogan' => '',
);

return $realm_variables;
}
