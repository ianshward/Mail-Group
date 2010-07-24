//$Id$

if (Drupal.jsEnabled) {
	$(document).ready(function() {
		prefix = Drupal.settings.mailgroup.prefix;
		domain = Drupal.settings.mailgroup.domain;
		$('a.mailgroup-address-generate').click(function () {			
			$.ajax({
				url: 'mailgroup/tokenauth_reset',
				success: function(data) {
				    data = data + '-' + prefix + '@' + domain;
				    $('.mailgroup-address').html(data);
			    }
			});
			return false;
		});
	});
}