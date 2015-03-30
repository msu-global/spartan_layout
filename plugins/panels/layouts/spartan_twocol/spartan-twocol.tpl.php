<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
    <div class="row">

      <div class="col-sm-8">
        <?php if (!empty($content['left'])) { print $content['left']; } ?>
      </div>

      <div class="col-sm-4">
        <?php if (!empty($content['right'])) { print $content['right']; } ?>
      </div>

    </div>
</div>
