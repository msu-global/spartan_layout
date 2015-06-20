<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <?php if ($content['hero']): ?>
    <div class="hero-container">
      <div class="container">
        <div class="row">
          <?php print $content['hero']; ?>
        </div>
      </div>
    </div>
  <?php endif ?>

  <?php if (!empty($content['upper'])): ?>
    <div class="section-container">
      <div class="row">

        <div class="col-sm-8">
          <?php print $content['upper']; ?>
        </div>

      </div>
    </div>
  <?php endif ?>

  <?php if (!empty($content['offset'])): ?>
    <div class="section-container">
      <div class="row">

        <div class="col-sm-8 col-sm-offset-3">
          <?php print $content['offset']; ?>
        </div>

      </div>
    </div>
  <?php endif ?>

  <?php if (!empty($content['lower'])): ?>
    <div class="section-container">
      <div class="row">

        <div class="col-sm-8">
          <?php print $content['lower']; ?>
        </div>

      </div>
    </div>
  <?php endif ?>

</div>
