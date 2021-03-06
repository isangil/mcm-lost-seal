api = "2"
core = "7.x"

; -----------------------------------------------------------------------------
; Contributed modules
; -----------------------------------------------------------------------------

projects[admin_menu][version] = "3.0-rc5"
projects[admin_menu][subdir] = "contrib"

projects[ckeditor][version] = "1.16"
projects[ckeditor][subdir] = "contrib"

projects[context][version] = "3.6"
projects[context][subdir] = "contrib"

projects[ctools][version] = "1.7"
projects[ctools][subdir] = "contrib"

projects[ds][version] = "2.8"
projects[ds][subdir] = "contrib"

projects[entity][version] = "1.6"
projects[entity][subdir] = "contrib"

projects[entityreference][version] = "1.1"
projects[entityreference][subdir] = "contrib"

projects[facetapi][version] = "1.5"
projects[facetapi][subdir] = "contrib"

projects[features][version] = "2.0"
projects[features][subdir] = "contrib"

projects[feeds][version] = "2.0-alpha8"
projects[feeds][subdir] = "contrib"

projects[file_download_count][version] = "1.0-rc1"
projects[file_download_count][subdir] = "contrib"

; Dave Reid maintains this, ok to use dev for now.
projects[file_entity][version] = "2.x-dev"
projects[file_entity][subdir] = "contrib"

projects[filefield_sources][version] = "1.8"
projects[filefield_sources][subdir] = "contrib"
; Ensure files that already exist in the files directory are left alone.
; @see https://drupal.org/node/1492374
projects[filefield_sources][patch][] = "http://drupal.org/files/1492374-ffs-attach-file-same-path.patch"
; Only show files with relevant extensions in the attach select list.
; @see https://drupal.org/node/2006436
projects[filefield_sources][patch][] = "http://drupal.org/files/2006436-file-attach-extension-filter.patch"
; Show the actual attach upload path using drupal_realpath()
; @see https://drupal.org/node/2033269
projects[filefield_sources][patch][] = "http://drupal.org/files/2033269-attach-realpath.patch"

projects[flexslider][version] = "2.0-alpha3"
projects[flexslider][subdir] = "contrib"

projects[flexslider_views_slideshow][version] = "2.x-dev"
projects[flexslider_views_slideshow][subdir] = "contrib"

projects[geofield][version] = "1.2"
projects[geofield][subdir] = "contrib"

projects[geophp][version] = "1.7"
projects[geophp][subdir] = "contrib"

projects[helper][version] = "1.1"
projects[helper][subdir] = "contrib"

projects[i18n][version] = "1.12"
projects[i18n_update][subdir] = "contrib"

projects[job_scheduler][version] = "2.0-alpha3"
projects[job_scheduler][subdir] = "contrib"

projects[l10n_update][version] = "1.1"
projects[l10n_update][subdir] = "contrib"

projects[libraries][version] = "2.2"
projects[libraries][subdir] = "contrib"

projects[lingotek][version] = "6.02"
projects[lingotek][subdir] = "contrib"

projects[media][version] = "2.x-dev"
projects[media][subdir] = "contrib"

projects[module_filter][version] = "2.0"
projects[module_filter][subdir] = "contrib"

projects[noggin][version] = "1.1"
projects[name][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[pathauto_persist][version] = "1.3"
projects[pathauto_persist][subdir] = "contrib"

projects[plupload][version] = "1.7"
projects[plupload][subdir] = "contrib"

projects[potx][version] = "1.0"
projects[potx][subdir] = "contrib"

projects[seach_api_db][version] = "1.4"
projects[strongarm][subdir] = "contrib"

projects[search_api][version] = "1.14"
projects[strongarm][subdir] = "contrib"

projects[shs][version] = "1.6"
projects[shs][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[superfish][version] = "1.9"
projects[superfish][subdir] = "contrib"

projects[term_reference_tree][version] = "1.10"
projects[term_reference_tree][subdir] = "contrib"
; Add filtering to the widget
; @see https://drupal.org/node/2007164
projects[term_reference_tree][patch][] = "http://drupal.org/files/2007164-filter.patch"

projects[title][version] = "1.0-alpha7"
projects[title][subdir] = "contrib"

projects[token][version] = "1.6"
projects[token][subdir] = "contrib"

projects[token_filter][version] = "1.1"
projects[token_filter][subdir] = "contrib"

projects[views][version] = "3.10"
projects[views][subdir] = "contrib"

projects[views_content_cache][version] = "3.0-alpha3"
projects[views_content_cache][subdir] = "contrib"

projects[views_slideshow][version] = "3.1"
projects[views_slideshow][subdir] = "contrib"

projects[wysiwyg][version] = "2.2"
projects[wysiwyg][subdir] = "contrib"


; -----------------------------------------------------------------------------
; Contributed themes
; -----------------------------------------------------------------------------

projects[adaptivetheme][version] = "3.2"
projects[adaptivetheme][subdir] = "contrib"

projects[pixture_reloaded][version] = "3.0"
projects[pixture_reloaded][subdir] = "contrib"

; -----------------------------------------------------------------------------
; Libraries
; -----------------------------------------------------------------------------

libraries[ckeditor][download][type]= "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6.1/ckeditor_3.6.6.1.zip"
libraries[ckeditor][directory_name] = "ckeditor"

libraries[flexslider][download][type] = "get"
libraries[flexslider][download][url] = "https://github.com/woothemes/FlexSlider/archive/master.zip"
libraries[flexslider][download][subtree] = "FlexSlider-master"
libraries[flexslider][directory_name] = "flexslider"

libraries[superfish][download][type] = "get"
libraries[superfish][download][url] = "https://github.com/mehrpadin/Superfish-for-Drupal/archive/1.x.zip"
libraries[superfish][download][subtree] = "Superfish-for-Drupal-1.x"
libraries[superfish][directory_name] = "superfish"

