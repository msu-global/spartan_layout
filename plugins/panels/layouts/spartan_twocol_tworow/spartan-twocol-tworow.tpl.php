<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

    <?php if (!empty($content['upper_left']) || !empty($content['upper_right'])): ?>
      <div class="row">

        <?php if (!empty($content['upper_left'])): ?>
          <div class="col-sm-8">
            <?php print $content['upper_left']; ?>
          </div>
        <?php endif ?>

        <?php if (!empty($content['upper_right'])): ?>
          <div class="col-sm-4">
            <?php print $content['upper_right']; ?>
          </div>
        <?php endif ?>

      </div>
    <?php endif ?>

    <?php if (!empty($content['lower_left']) || !empty($content['lower_right'])): ?>
      <div class="row">

        <?php if (!empty($content['lower_left'])): ?>
          <div class="col-sm-8">
            <?php print $content['lower_left']; ?>
          </div>
        <?php endif ?>

        <?php if (!empty($content['lower_right'])): ?>
          <div class="col-sm-4">
            <?php print $content['lower_right']; ?>
          </div>
        <?php endif ?>

      </div>
    <?php endif ?>
</div>
