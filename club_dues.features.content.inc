<?php
/**
 * @file
 * club_dues.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function club_dues_content_defaults() {
  $content = array();

  $content['Default Dues Policy'] = (object) array(
    'exported_path' => 'content/membership-policy-1',
    'title' => 'Membership Policy 1',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'dues_policy',
    'language' => 'und',
    'created' => '1358526834',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'Default Dues Policy',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Membership Policy:&nbsp;</p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Membership Policy: </p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_dues' => array(
      'und' => array(
        0 => array(
          'value' => '250.00',
        ),
      ),
    ),
    'field_dues_period' => array(
      'und' => array(
        0 => array(
          'value' => 'Annual',
        ),
      ),
    ),
    'field_initiation_fee' => array(
      'und' => array(
        0 => array(
          'value' => '50.00',
        ),
      ),
    ),
    'field_policy_date_range' => array(
      'und' => array(
        0 => array(
          'value' => '2013-01-01 00:00:00',
          'value2' => '2013-12-31 00:00:00',
          'timezone' => 'America/Los_Angeles',
          'timezone_db' => 'America/Los_Angeles',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'field_prorate_dues' => array(
      'und' => array(
        0 => array(
          'value' => 'No',
        ),
      ),
    ),
    'field_chapter' => array(
      'und' => array(
        0 => array(
          'target_id' => '5',
        ),
      ),
    ),
    'field_email_subject' => array(
      'und' => array(
        0 => array(
          'value' => 'Membership Renewal',
          'format' => NULL,
          'safe_value' => 'Membership Renewal',
        ),
      ),
    ),
    'field_email_message' => array(
      'und' => array(
        0 => array(
          'value' => 'Dear [First Name],

Your membership renewal date is approaching. Dues are [Dues] per [Dues Period]. You have been a valued member since [Join Date], and hope to see your renewal payment soon. Thank you!

Sincerely,

Chapter/Club Membership Chair',
          'format' => NULL,
          'safe_value' => 'Dear [First Name],

Your membership renewal date is approaching. Dues are [Dues] per [Dues Period]. You have been a valued member since [Join Date], and hope to see your renewal payment soon. Thank you!

Sincerely,

Chapter/Club Membership Chair',
        ),
      ),
    ),
    'field_dues_application_date' => array(
      'und' => array(
        0 => array(
          'tid' => '47',
        ),
      ),
    ),
    'field_renewal_approval' => array(
      'und' => array(
        0 => array(
          'tid' => '49',
        ),
      ),
    ),
    'field_prorate_cancel_dues' => array(
      'und' => array(
        0 => array(
          'value' => 'No',
        ),
      ),
    ),
    'field_first_reminder_days' => array(
      'und' => array(
        0 => array(
          'value' => '-30',
        ),
      ),
    ),
    'field_second_reminder_days' => array(
      'und' => array(
        0 => array(
          'value' => '-7',
        ),
      ),
    ),
    'field_email_subject2' => array(
      'und' => array(
        0 => array(
          'value' => 'Membership Renewal Reminder',
          'format' => NULL,
          'safe_value' => 'Membership Renewal Reminder',
        ),
      ),
    ),
    'field_email_message2' => array(
      'und' => array(
        0 => array(
          'value' => 'Dear [First Name],

This is a reminder that your membership renewal date is approaching. Dues are [Dues] per [Dues Period]. You have been a valued member since [Join Date], and hope to see your renewal payment soon. Thank you!

Sincerely,

Chapter/Club Membership Chair',
          'format' => NULL,
          'safe_value' => 'Dear [First Name],

This is a reminder that your membership renewal date is approaching. Dues are [Dues] per [Dues Period]. You have been a valued member since [Join Date], and hope to see your renewal payment soon. Thank you!

Sincerely,

Chapter/Club Membership Chair',
        ),
      ),
    ),
    'field_test' => array(
      'und' => array(
        0 => array(
          'value' => 'Yes',
        ),
      ),
    ),
    'field_test_email_address' => array(
      'und' => array(
        0 => array(
          'email' => 'dwork@oip.net',
        ),
      ),
    ),
    'field_status' => array(
      'und' => array(
        0 => array(
          'tid' => '2',
        ),
      ),
    ),
    'field_dues_admin_email' => array(
      'und' => array(
        0 => array(
          'email' => 'dwork@oip.net',
        ),
      ),
    ),
  );

return $content;
}
