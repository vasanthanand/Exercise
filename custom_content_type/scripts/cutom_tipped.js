(function($) {
Drupal.behaviors.myBehavior = {
		
	attach: function (context, settings) {
		Tipped.create(".simple-tooltip"); 
		}
}
})($);