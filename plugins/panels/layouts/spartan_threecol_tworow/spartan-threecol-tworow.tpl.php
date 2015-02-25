<?php if (!empty($content['upper_left']) || !empty($content['upper_middle']) || !empty($content['upper_right'])): ?>
  <div class="row">

    <?php if !empty($content['upper_left']): ?>
      <div class="col-sm-4">
        <?php print $content['upper_left']; ?>
      </div>
    <?php endif ?>

    <?php if !empty($content['upper_middle']): ?>
      <div class="col-sm-4">
        <?php print $content['upper_middle']; ?>
      </div>
    <?php endif ?>

    <?php if !empty($content['upper_right']): ?>
      <div class="col-sm-4">
        <?php print $content['upper_right']; ?>
      </div>
    <?php endif ?>

  </div>
<?php endif ?>

<?php if (!empty($content['lower_left']) || !empty($content['lower_middle']) || !empty($content['lower_right'])): ?>
  <div class="row">

    <?php if !empty($content['lower_left']): ?>
      <div class="col-sm-4">
        <?php print $content['lower_left']; ?>
      </div>
    <?php endif ?>

    <?php if !empty($content['lower_middle']): ?>
      <div class="col-sm-4">
        <?php print $content['lower_middle']; ?>
      </div>
    <?php endif ?>

    <?php if !empty($content['lower_right']): ?>
      <div class="col-sm-4">
        <?php print $content['lower_right']; ?>
      </div>
    <?php endif ?>

  </div>
<?php endif ?>
