<?php if ($content['left'] || $content['middle'] || $content['right']): ?>
  <div class="row">
    <?php print $content['left']; ?>
    <?php print $content['middle']; ?>
    <?php print $content['right']; ?>
  </div>
<?php endif ?>
