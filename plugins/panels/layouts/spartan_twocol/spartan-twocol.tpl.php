<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
    <div class="row">

      <?php if (!empty($content['left'])): ?>
        <div class="col-sm-8">
          <?php print $content['left']; ?>
        </div>
      <?php endif ?>

      <?php if (!empty($content['right'])): ?>
        <div class="col-sm-4">
          <?php print $content['right']; ?>
        </div>
      <?php endif ?>

    </div>
</div>
