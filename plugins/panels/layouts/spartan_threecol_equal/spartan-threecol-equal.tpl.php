<?php if (!empty($content['left']) || !empty($content['middle']) || !empty($content['right'])): ?>
  <div class="row">

    <?php if (!empty($content['left'])): ?>
      <div class="col-sm-4">
        <?php print $content['left']; ?>
      </div>
    <?php endif ?>

    <?php if (!empty($content['middle'])): ?>
      <div class="col-sm-4">
        <?php print $content['middle']; ?>
      </div>
    <?php endif ?>

    <?php if (!empty($content['right'])): ?>
      <div class="col-sm-4">
        <?php print $content['right']; ?>
      </div>
    <?php endif ?>

  </div>
<?php endif ?>
