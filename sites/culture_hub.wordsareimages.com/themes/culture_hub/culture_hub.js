(function ($) {
var populateFeatured = function($person) {
  $('#people .featured').html($person.html());
  $('#people .featured .click-target').remove();
  $('#people .featured .bio').show();
}

Drupal.behaviors.cultureHubTheme = {
  attach: function (context) {
    // Get natural height of audio player and set the bottom for negative of the height
    var audioHeight = $('.audio-player').first().height();
    $('.audio-player').css({'bottom': -audioHeight});
    
    // Populate featured person
    var $firstPerson = $('#people .view-people .person').first();
    $firstPerson.css({'border-color': '#ED1C27', 'border-width': '4px'});
    populateFeatured($firstPerson);
    
    $('body').on('click', '.click-target', function(e) {
      $('#people .view-people .person').css({'border-color': 'black', 'border-width': '1px'});
      var $newPerson = $(e.currentTarget).parent();
      $newPerson.css({'border-color': 'red', 'border-width': '4px'});
      populateFeatured($newPerson);
    });
    
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
