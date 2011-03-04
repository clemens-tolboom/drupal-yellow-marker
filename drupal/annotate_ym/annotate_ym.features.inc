<?php

/**
 * Implementation of hook_node_info().
 */
function annotate_ym_node_info() {
  $items = array(
    'annotate_ym' => array(
      'name' => t('Yellow Marker Annotation'),
      'module' => 'features',
      'description' => t('A yellow marker annotation is an inline annotation. The user selects some website content and then adds his comments.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function annotate_ym_views_api() {
  return array(
    'api' => '2',
  );
}
