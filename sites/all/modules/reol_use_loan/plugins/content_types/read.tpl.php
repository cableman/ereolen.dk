<?php
/**
 * @file
 * read.tpl.php
 * This template shows the read widget for reading
 * to an ebook.
 */

?>
<div class="reader">
  <div class="reader__inner">
    <div
  <?php if (isset($retailer_order_number)) : ?>
    data-id="<?php echo $retailer_order_number; ?>"
  <?php elseif (isset($isbn)) : ?>
    data-isbn="<?php echo $isbn; ?>"
  <?php endif; ?>
  id="reader-container" data-reader-version="<?php echo $reader_version ?>" data-url="<?php echo $publizon_reader_stream_url; ?>" data-images-url="<?php echo $publizon_reader_url; ?>"></div>
  </div>
</div>
