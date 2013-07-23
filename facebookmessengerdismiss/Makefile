include theos/makefiles/common.mk

TWEAK_NAME = facebookmessengerdismiss
facebookmessengerdismiss_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk

internal-after-install::
	install.exec "killall -9 backboardd"
