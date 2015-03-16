#Target name of eboot
TARGET = DeadZone
#Main created objects
OBJS = main.o ../../common/callback.o

INCDIR =
CFLAGS = -O2 -g0 -Wall
CXXFLAGS = $(CFLAGS) -fno-exceptions -fno-rtti
ASFLAGS = $(CFLAGS)

#Determines whether to build a PRX file
BUILD_PRX = 1

#Library directory (should be project dir)
LIBDIR = ./
LIBS = -lm
LDFLAGS =

#Eboot creation and pictures/icons
EXTRA_TARGETS = EBOOT.PBP
PSP_EBOOT_TITLE = Dead Zone Test
#PSP_EBOOT_ICON = ICON0.png
#PSP_EBOOT_PIC1 = PIC1.png
#PSP_EBOOT_SND0 = SND0.at3

PSPSDK = $(shell psp-config --pspsdk-path)
include $(PSPSDK)/lib/build.mak