<?php

/**
 * @file
 * color.inc - To provide different predefined
 * color schemes in the theme settings page
 */

// Put the logo path into JavaScript for the live preview.
drupal_add_js(array('color' => array('logo' => theme_get_setting('logo', 'civi_bartik_public'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'primary-color' => t('Primary'),
    'secondary-color' => t('Secondary'),
    'third-color' => t('Third'),
    'font-color' => t('Text color'),
    'border-color' => t('Border'),
    'error-background' => t('Error background'),
    'error-text' => t('Error text'),
    'status-background' => t('Status background'),
    'status-border' => t('Status border'),
    'status-text' => t('Status text'),
    
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Default'),
      'colors' => array(          
        'primary-color' => '#6fb346',
        'secondary-color' => '#00969b',
        'third-color' => '#de447a',
        'font-color' => '#635d5e',
        'border-color' => '#CFCEC3',
        'error-background' => '#FBE3E4',
        'error-text' => '#8A1F11',
        'status-background' => '#FFFFCC',
        'status-border' => '#FFFF66',
        'status-text' => '#3e3e3e',
        
      ),
    ),
  ),
  
  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/style.css',
  ),

  // Files to copy.
  'copy' => array(
    'logo.png',
  ),

  // Gradient definitions.
  'gradients' => array(
    array(
      // (x, y, width, height).
      'dimension' => array(0, 0, 0, 0),
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => array('primary-color', 'secondary-color'),
    ),
  ),

  // Color areas to fill (x, y, width, height).
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_css' => 'color/preview.css',
  'preview_js' => 'color/preview.js',
  'preview_html' => 'color/preview.html',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
