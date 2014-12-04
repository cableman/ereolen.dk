<?php
/**
 * @file
 * listen.tpl.php
 * This template shows the listen widget for listening
 * to an audio book.
 */

drupal_add_css(drupal_get_path('module', 'reol_use_loan') . '/css/player.css');
?>

<iframe src="<?php echo variable_get('publizon_player_url', ''); ?>/?o=<?php echo $internal_order_number; ?>&k=<?php echo $player_client_id; ?>" class="player"></iframe>