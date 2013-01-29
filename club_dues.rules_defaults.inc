<?php
/**
 * @file
 * club_dues.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function club_dues_default_rules_configuration() {
  $items = array();
  $items['rules_new_user_added_generate_invoice_for_initial_dues'] = entity_import('rules_config', '{ "rules_new_user_added_generate_invoice_for_initial_dues" : {
      "LABEL" : "New User added, generate invoice for initial dues",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "php", "profile2" ],
      "ON" : [ "profile2_insert" ],
      "IF" : [
        { "data_is" : { "data" : [ "profile2:type" ], "value" : "membership" } }
      ],
      "DO" : [
        { "php_eval" : { "code" : "\\/\\/ When a new user is added, the system may need to generate an invoice (actually just a record) in the membership dues file to record both initiation fee and initial dues.\\r\\n   global $user;\\r\\n   $this_user = user_load($profile2-\\u003Euid);     \\/\\/ this user\\u0027s account\\r\\n   $chapter = $this_user-\\u003Efield_chapter[\\u0027und\\u0027][0][\\u0027target_id\\u0027];\\r\\n   $config = dues_get_config($chapter);    \\/\\/ get config for status\\u0027 to include, else use ALL if none set\\r\\n   $time = time();\\r\\n\\r\\n\\/\\/ Check for due date -- Dues Application Date\\r\\n     $policy = dues_gettid (\\u0027dues_application_rule\\u0027,\\u0027policy\\u0027);\\r\\n     $anniversary = dues_gettid (\\u0027dues_application_rule\\u0027,\\u0027anniversary\\u0027);\\r\\n     if ($config-\\u003Efield_dues_application_date[\\u0027und\\u0027][0][\\u0027tid\\u0027] == $policy) {      \\/\\/ use policy date\\r\\n         $date = $config-\\u003Efield_policy_date_range[\\u0027und\\u0027][0][\\u0027value\\u0027];             \\/\\/ beginning of policy date range\\r\\n     } else {\\r\\n         $date = $profile2-\\u003Efield_date_joined[\\u0027und\\u0027][0][\\u0027value\\u0027];\\r\\n     }\\r\\n     $amount = 0;\\r\\n     if (isset($config-\\u003Efield_dues[\\u0027und\\u0027])) {\\r\\n         $amount = $amount + $config-\\u003Efield_dues[\\u0027und\\u0027][0][\\u0027value\\u0027];         \\/\\/ dues\\r\\n     }\\r\\n     if (isset($config-\\u003Efield_initiation_fee[\\u0027und\\u0027])) {\\r\\n         $amount = $amount + $config-\\u003Efield_initiation_fee[\\u0027und\\u0027][0][\\u0027value\\u0027];    \\/\\/ initiation fee\\r\\n     }\\r\\n\\r\\n   \\/\\/ Write the membership dues record for \\u0022dues\\u0022\\r\\n   \\/\\/ Dues Application Date = Anniversary Date or Membership Policy Date\\r\\n   \\/\\/ Dues\\r\\n   \\/\\/ Initiation Fee\\r\\n   \\/\\/ Prorate Dues = Yes or No\\r\\n       $nnode = new stdClass();\\r\\n       $nnode-\\u003Etitle = \\u0027Dues for \\u0027 . $this_user-\\u003Euid;\\r\\n       $nnode-\\u003Enid = \\u0027\\u0027;                  \\/\\/ add or update, depending on query for \\u0027nid\\u0027 above^M\\r\\n       $nnode-\\u003Etype = \\u0027dues\\u0027;   \\/\\/ Your specified content type^M\\r\\n       $nnode-\\u003Ecreated = $time;\\r\\n       $nnode-\\u003Echanged = $time;\\r\\n       $nnode-\\u003Elanguage = \\u0027und\\u0027;\\r\\n       $nnode-\\u003Estatus = 1;\\r\\n       $nnode-\\u003Epromote = 0;\\r\\n       $nnode-\\u003Esticky = 0;\\r\\n       $nnode-\\u003Eformat = 1;       \\/\\/ Filtered HTML^M\\r\\n       $nnode-\\u003Euid = $user-\\u003Euid;    \\/\\/ Author\\r\\n       $nnode-\\u003Efield_uid[\\u0027und\\u0027][0][\\u0027target_id\\u0027] = $profile2-\\u003Euid;          \\/\\/ user\\u0027s id\\r\\n       $nnode-\\u003Efield_chapter = $this_user-\\u003Efield_chapter;              \\/\\/ chapter\\r\\n       $nnode-\\u003Efield_date[\\u0027und\\u0027][0][\\u0027value\\u0027] = $date;                \\/\\/ join date or policy date (from $config)\\r\\n       $nnode-\\u003Efield_amount_due[\\u0027und\\u0027][0][\\u0027value\\u0027] = $amount;\\r\\n if ($profile2-\\u003Efield_initial_dues_paid[\\u0027und\\u0027][0][\\u0027value\\u0027] == \\u0027Yes\\u0027) {\\r\\n       $nnode-\\u003Efield_amount_paid = $profile2-\\u003Efield_amount_paid;\\r\\n       $nnode-\\u003Efield_document = $profile2-\\u003Efield_document;\\r\\n       $nnode-\\u003Efield_date_paid = $profile2-\\u003Efield_date_paid;\\r\\n} else {\\r\\n       $nnode-\\u003Efield_amount_paid[\\u0027und\\u0027][0][\\u0027value\\u0027] = \\u00270.00\\u0027;\\r\\n}\\r\\n       $nnode = node_submit($nnode);\\r\\n       node_save($nnode);\\r\\n\\r\\n   $msg = \\u0027Dues recorded for new member \\u0027 . $profile2-\\u003Euid;\\r\\n  drupal_set_message (t($msg));\\r\\n  watchdog(\\u0027Action Trigger\\u0027, t($msg));\\r\\n" } },
        { "redirect" : { "url" : "dues" } }
      ]
    }
  }');
  return $items;
}
