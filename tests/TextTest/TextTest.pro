QT       += core gui
QT		 += opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TextTest
TEMPLATE = app


SOURCES += \
	main.cpp\
    SDLMain.cpp \
	../../libs/PhTools/memorytool.cpp \
    TextTest.cpp \
    ../../libs/PhGraphic/PhGraphicView.cpp

HEADERS  += \
	../../libs/PhTools/memorytool.h \
    TextTest.h \
    ../../libs/PhGraphic/PhGraphicView.h


FORMS    += mainwindow.ui

LIBS += -framework SDL -framework SDL_image -framework SDL_ttf

INCLUDEPATH += /Library/Frameworks/ \
			../../libs

DEPENDPATH += /Library/Frameworks



