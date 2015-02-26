<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

    <?php if (!empty($content['left']) || !empty($content['right'])): ?>
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
    <?php endif ?>

    <?php if (!empty($content['main'])): ?>
      <div class="row">
        <div class="col-xs-12">
          <?php print $content['main']; ?>
        </div>
      </div>
    <?php endif ?>
</div>
