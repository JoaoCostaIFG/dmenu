# My build of **suckless's dmenu**

This build includes some patches (sources are inside **'patches'** folder) and personal configurations in the **'config.h'** file.  
The **'colors-dmenu.h'** file has my theme configuration for **dmenu**.  
Bellow are the contents of the original README file from **suckless**.  

dmenu - dynamic menu
====================
dmenu is an efficient dynamic menu for X.


Requirements
------------
In order to build dmenu you need the Xlib header files.


Installation
------------
Edit config.mk to match your local setup (dmenu is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dmenu
(if necessary as root):

    make clean install


Running dmenu
-------------
See the man page for details.
