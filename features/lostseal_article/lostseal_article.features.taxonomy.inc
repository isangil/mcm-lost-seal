<?php
/**
 * @file
 * lostseal_article.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lostseal_article_taxonomy_default_vocabularies() {
  return array(
    'countries_schools' => array(
      'name' => 'Countries Schools',
      'machine_name' => 'countries_schools',
      'description' => 'A hierarchical vocabulary with the countries and the schools that contributed art to the Lost Seal',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
      'lingotek' => array(
        'name' => '',
        'document_id' => NULL,
        'lingotek_nodes_translation_method' => 'field',
        'create_lingotek_document' => 0,
        'sync_method' => 0,
        'allow_community_translation' => 0,
        'url_alias_translation' => 0,
        'node_sync_status' => 'EDITED',
        'project_id' => 27400,
        'workflow_id' => '379a944e-6771-49b9-8348-5ee04f3a4d13',
        'vault_id' => 11561,
        'profile' => 'DISABLED',
      ),
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
      'lingotek' => array(
        'name' => '',
        'document_id' => NULL,
        'lingotek_nodes_translation_method' => 'field',
        'create_lingotek_document' => 0,
        'sync_method' => 0,
        'allow_community_translation' => 0,
        'url_alias_translation' => 0,
        'node_sync_status' => 'EDITED',
        'project_id' => 27400,
        'workflow_id' => '379a944e-6771-49b9-8348-5ee04f3a4d13',
        'vault_id' => 11561,
        'profile' => 'DISABLED',
      ),
    ),
  );
}
