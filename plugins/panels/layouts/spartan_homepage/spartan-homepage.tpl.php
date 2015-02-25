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

  <?php if ($content['upper_left'] || $content['upper_middle'] || $content['upper_right']): ?>
    <div class="section-container">
      <div class="row">
        <div class="col-xs-12"><h2 class="spartan-heading">What is a knowledge platform?</h2></div>
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
        <div class="row">
          <div class="col-xs-12"><h2 class="break-heading">Latest Articles</h2></div>
        </div>
        <?php
          // This section contains a View, which generates its own rows.
          print $content['break'];
        ?>
      </div>
    </div>
  <?php endif ?>

    <div class="section-container">
      <div class="container">
        <div class="row">
          <div class="col-xs-3">
            <h3 class="partner-logo">Partner Logo</h3>
          </div>
          <div class="col-xs-3">
            <h3 class="partner-logo">Partner Logo</h3>
          </div>
          <div class="col-xs-3">
            <h3 class="partner-logo">Partner Logo</h3>
          </div>
          <div class="col-xs-3">
            <h3 class="partner-logo">Partner Logo</h3>
          </div>
        </div>
      </div>
    </div>

</div>
