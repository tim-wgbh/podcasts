(function ($) {

Drupal.behaviors.cultureHubTheme = {
  attach: function (context) {
    // Get natural height of audio player and set the bottom for negative of the height
    var audioHeight = $('.audio-player').first().height();
    $('.audio-player').css({'bottom': -audioHeight});
        
    $('body').on('click', '.audio-control.listen', function(e) {
      $('.audio-player').animate({'bottom':-audioHeight});
      $(e.currentTarget).siblings('.audio-player').animate({'bottom':0});
      $(e.currentTarget).removeClass('listen').addClass('hide-audio');
    });
    $('body').on('click', '.audio-control.hide-audio', function(e) {
      $(e.currentTarget).siblings('.audio-player').animate({'bottom':-audioHeight});
      $(e.currentTarget).removeClass('hide-audio').addClass('listen');
    });
  }
};
})(jQuery);
