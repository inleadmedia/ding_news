(function ($) {
  $(document).ready(function () {
    $('.ding-news-carousel .view-content > .clearfix').carouFredSel({
      circular: true,
      infinite: true,
      direction: 'left',
      auto : {
        pauseOnHover: true,
        pauseDuration: 5000
      },
      items: 1,
      scroll : {
        items: 1
      },
      pagination : {
        container : '.ding-news-pager'
      }
    });
  });
})(jQuery);
