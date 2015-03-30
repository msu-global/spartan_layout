<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

    <?php if (!empty($content['upper_left']) || !empty($content['upper_right'])): ?>
      <div class="row">

        <div class="col-sm-8">
          <?php if (!empty($content['upper_left'])) { print $content['upper_left']; } ?>
        </div>

        <div class="col-sm-4">
          <?php if (!empty($content['upper_right'])) { print $content['upper_right']; } ?>
        </div>

      </div>
    <?php endif ?>

    <?php if (!empty($content['lower_left']) || !empty($content['lower_right'])): ?>
      <div class="row">

        <div class="col-sm-8">
          <?php if (!empty($content['lower_left'])) { print $content['lower_left']; } ?>
        </div>

        <div class="col-sm-4">
          <?php if (!empty($content['lower_right'])) { print $content['lower_right']; } ?>
        </div>

      </div>
    <?php endif ?>
</div>
