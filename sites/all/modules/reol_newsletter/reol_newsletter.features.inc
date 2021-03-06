<?php
/**
 * @file
 * reol_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function reol_newsletter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_mailchimp_signup().
 */
function reol_newsletter_default_mailchimp_signup() {
  $items = array();
  $items['newsletter_signup'] = entity_import('mailchimp_signup', '{
    "name" : "newsletter_signup",
    "mc_lists" : { "4bc9190fe1" : "4bc9190fe1" },
    "mode" : "1",
    "title" : "Nyhedsbrev",
    "settings" : {
      "path" : "",
      "submit_button" : "Tilmeld",
      "confirmation_message" : "Du vil nu modtage en mail med et link, som du skal trykke p\\u00e5 for at bekr\\u00e6fte din tilmelding til eReolens nyhedsbrev.",
      "destination" : "",
      "app_mode" : 0,
      "mergefields" : {
        "EMAIL" : {
          "name" : "Email",
          "req" : true,
          "field_type" : "email",
          "public" : true,
          "show" : true,
          "order" : "1",
          "default" : "",
          "helptext" : "",
          "size" : "25",
          "tag" : "EMAIL",
          "id" : 0
        },
        "SIGNUP" : {
          "name" : "Signup location (private)",
          "req" : false,
          "field_type" : "text",
          "public" : false,
          "show" : true,
          "order" : "2",
          "default" : "",
          "helptext" : "",
          "size" : "25",
          "tag" : "SIGNUP",
          "id" : 1
        },
        "SIGNUP_value" : ""
      },
      "description" : "\\u003Cp\\u003ETilmeld dig eReolens\\u003C\\/p\\u003E\\n\\u003Ch2\\u003ENyhedsbrev\\u003C\\/h2\\u003E\\n",
      "doublein" : 1,
      "send_welcome" : 0,
      "include_interest_groups" : 0
    }
  }');
  return $items;
}
