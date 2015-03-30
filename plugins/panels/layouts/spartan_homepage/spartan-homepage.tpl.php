
<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <?php if (!empty($content['slogan']) || !empty($content['hero'])): ?>
    <div class="hero-container">
      <div class="container">

        <?php if (!empty($content['slogan'])): ?>
          <div class="row">
            <div class="col-xs-12">
              <?php print $content['slogan']; ?>
            </div>
          </div>
        <?php endif ?>

        <?php if (!empty($content['hero'])): ?>
          <div class="row">
            <div class="col-sm-4 col-sm-offset-8">
              <?php print $content['hero']; ?>
            </div>
          </div>
        <?php endif ?>

      </div>
    </div>
  <?php endif ?>

  <?php if ($content['upper_left'] || $content['upper_middle'] || $content['upper_right']): ?>
    <div class="section-container">
      <div class="row">
        <div class="col-sm-4">
          <?php print $content['upper_left']; ?>
        </div>
        <div class="col-sm-4">
          <?php print $content['upper_middle']; ?>
        </div>
        <div class="col-sm-4">
          <?php print $content['upper_right']; ?>
        </div>
      </div>
    </div>
  <?php endif ?>

  <?php if ($content['break']): ?>
    <div class="break-container">
      <div class="container">
        <?php
          // This section contains a View, which generates its own rows.
          print $content['break'];
        ?>
      </div>
    </div>
  <?php endif ?>

</div>
