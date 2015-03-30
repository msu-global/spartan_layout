<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <?php if ($content['top']): ?>
    <div class="hero-container">
      <div class="container">
        <div class="row">
          <?php print $content['hero']; ?>
        </div>
      </div>
    </div>
  <?php endif ?>

  <?php if (!empty($content['left']) || !empty($content['right'])): ?>
    <div class="section-container">
      <div class="row">

        <div class="col-sm-8">
          <?php if !empty($content['left']) { print $content['left']; } ?>
        </div>

        <div class="col-sm-4">
          <?php if !empty($content['right']) { print $content['right']; } ?>
        </div>

      </div>
    </div>
  <?php endif ?>

</div>
