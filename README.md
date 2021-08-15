# slock - simple screen locker
simple screen locker utility for X.


## Requirements
In order to build slock you need the Xlib header files.


## Installation
Edit config.mk to match your local setup (slock is installed into
the `/usr/local` namespace by default).

Afterwards enter the following command to build and install slock
(if necessary as root):

`make clean install`


## Running slock
Simply invoke the `slock` command. To get out of it, enter your password.

## Patches
[capscolor](https://tools.suckless.org/slock/patches/capscolor/slock-capscolor.diff)

[xresources (modified)](https://tools.suckless.org/slock/patches/xresources/slock-xresources-20191126-53e56c7.diff)

[blur pixelated screen (modified)](https://tools.suckless.org/slock/patches/blur-pixelated-screen/slock-blur_pixelated_screen-1.4.diff)

[colormessage](https://tools.suckless.org/slock/patches/colormessage/slock-colormessage-20200210-35633d4.diff)
