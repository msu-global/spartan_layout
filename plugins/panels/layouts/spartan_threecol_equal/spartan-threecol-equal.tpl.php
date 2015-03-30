<?php if (!empty($content['left']) || !empty($content['middle']) || !empty($content['right'])): ?>
  <div class="row">

    <div class="col-sm-4">
      <?php if (!empty($content['left'])) { print $content['left']; } ?>
    </div>

    <div class="col-sm-4">
      <?php if (!empty($content['middle'])) { print $content['middle']; } ?>
    </div>

    <div class="col-sm-4">
      <?php if (!empty($content['right'])) { print $content['right']; } ?>
    </div>

  </div>
<?php endif ?>
