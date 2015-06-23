<div class="episode" id="episode-<?php print $fields['field_number']->content; ?>">
  <div class="veil"></div>
  <?php if ($fields['field_audio_soundcloud']->content): ?>
  <div class="audio-control listen"></div>
  <div class="audio-player"><?php print $fields['field_audio_soundcloud']->content; ?></div>
  <?php else: ?>
  <div class="audio-control not-yet"></div>
  <?php endif; ?>
  <div class="image"><?php print $fields['field_image']->content; ?></div>
  <div class="title"><?php print $fields['title']->content; ?></div>
  <div class="summary"><?php print $fields['body']->content; ?></div>
</div>