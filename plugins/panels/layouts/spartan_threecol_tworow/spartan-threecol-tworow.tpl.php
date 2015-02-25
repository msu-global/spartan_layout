<?php if ($content['top']): ?>
  <div class="row">
    <?php print $content['top']; ?>
  </div>
<?php endif ?>

<?php if ($content['upper_left'] || $content['upper_middle'] || $content['upper_right']): ?>
  <div class="row">
    <?php print $content['upper_left']; ?>
    <?php print $content['upper_middle']; ?>
    <?php print $content['upper_right']; ?>
  </div>
<?php endif ?>

<?php if ($content['middle']): ?>
  <div class="row">
    <?php print $content['middle']; ?>
  </div>
<?php endif ?>

<?php if ($content['lower_left'] || $content['lower_middle'] || $content['lower_right']): ?>
  <div class="row">
    <?php print $content['lower_left']; ?>
    <?php print $content['lower_middle']; ?>
    <?php print $content['lower_right']; ?>
  </div>
<?php endif ?>

<?php if ($content['middle']): ?>
  <div class="row">
    <?php print $content['middle']; ?>
  </div>
<?php endif ?>
