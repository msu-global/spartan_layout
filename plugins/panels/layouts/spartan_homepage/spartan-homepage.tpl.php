
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
            <div class="col-lg-4 col-lg-offset-8 col-sm-6 col-sm-offset-6">
              <?php print $content['hero']; ?>
            </div>
          </div>
        <?php endif ?>

      </div>
    </div>
  <?php endif ?>

  <?php if ($content['upper_left'] || $content['upper_middle_left'] || $content['upper_middle_right'] || $content['upper_right']): ?>
    <div class="section-container">
      <div class="row">
        <div class="col-sm-8 col-sm-offset-2">
          <h2 id="explanation"><em>What can a knowledge platform do for <strong>you</strong>?&nbsp;</em></h2>
        </div>
      </div>
      <div class="row">
        <div class="col-sm-6 col-md-3">
          <?php print $content['upper_left']; ?>
        </div>
        <div class="col-sm-6 col-md-3">
          <?php print $content['upper_middle_left']; ?>
        </div>
        <div class="col-sm-6 col-md-3">
          <?php print $content['upper_middle_right']; ?>
        </div>
        <div class="col-sm-6 col-md-3">
          <?php print $content['upper_right']; ?>
        </div>
      </div>
    </div>
  <?php endif ?>

  <div class="break-container">
    <div class="container">
      <?php
        if ($content['break']) {
          print $content['break'];
        }
      ?>
    </div>
  </div>

  <?php if ($content['lower_full']): ?>
    <div class="section-container">
      <div class="container">
        <?php
          // This section contains a View, which generates its own rows.
          print $content['lower_full'];
        ?>
      </div>
    </div>
  <?php endif ?>

</div>
