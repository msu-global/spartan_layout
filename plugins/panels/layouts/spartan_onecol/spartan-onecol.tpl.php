<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
    <div class="row">

      <?php if (!empty($content['main'])): ?>
        <div class="col-sm-12">
          <?php print $content['main']; ?>
        </div>
      <?php endif ?>

    </div>
</div>
