# What is does

Gives each user a special email address for each group to which they belong.  The user can send email messages to each email address which will create new posts in the given group.  The type of post created within the group is configurable by the group admin.

# Installation and configuration

* Enable the module
* Create a mailbox with mailhandler which is a catchall email address
* Configure mailcomment
* Configure mailgroup global settings on /admin/settings/mailgroup
* Within each group, enable the MailGroup feature, and then configure its settings.

# Todo

_While all the basics should be working, there's some clean-up and scaling work to do, and what exactly to put on /mailgroup page could use some ideas.  I did not see how to make a feature that does not implement a menu page like this and still be able to turn on/off the feature in the group.  I guess it could have just been a link to a settings page from /node/1/features, but being able to turn it on/off like other features seemed more consistent._

**Immediate**

* Do not allow anything to happen if the feature is not enabled in the group.
* Icon for MailGroup feature
* What to show on the MG page - documentation/how to use?
* Use a database schema because some of the operations that search for matching group settings will get expensive w/ lots of groups
* Better form validation

**Future Improvements**

* Multiple global mailbox support
* Ajax token address reset via block on /mailgroup page to quickly reset and get new token address
* Patch tokenauth to allow for multiple resource types so that if someone's token is compromised, it cannot be used for accessing the site except for sending emails to it.


