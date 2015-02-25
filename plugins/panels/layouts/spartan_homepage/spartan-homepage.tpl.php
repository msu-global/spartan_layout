<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['top']): ?>
    <div class="hero-container">
      <div class="container">
        <div class="row">
          <?php print $content['top']; ?>
        </div>
      </div>
    </div>
  <?php endif ?>

  <?php if ($content['upper_left'] || $content['upper_middle'] || $content['upper_right']): ?>
    <div class="section-container">
      <div class="row"> <!-- @TODO: Add extra classes -->
        <div class="col-xs-12"><h2 class="spartan-heading">What is a knowledge platform?</h2></div>
        <?php print $content['upper_left']; ?>
        <?php print $content['upper_middle']; ?>
        <?php print $content['upper_right']; ?>
      </div>
    </div>
  <?php endif ?>

  <?php if ($content['break']): ?>
    <div class="break-container">
      <div class="container">
        <div class="row">
          <div class="col-xs-12"><h2 class="break-heading">Latest Articles</h2></div>
        </div>
        <?php print $content['break']; ?>
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

  <?php if ($content['footer_left'] || $content['footer_middle'] || $content['footer_right']): ?>
    <div class="footer-container">
      <div class="container">
        <div class="row">
          <?php print $content['footer_left']; ?>
          <?php print $content['footer_middle']; ?>
          <?php print $content['footer_right']; ?>
        </div>
      </div>
    </div>
  <?php endif ?>

</div>
