# Add files and directories to ship with the application 
# by adapting the examples below.
# file1.source = myfile
# dir1.source = mydir
#DEPLOYMENTFOLDERS = # file1 dir1

symbian:TARGET.UID3 = 0xE52796B0

# Smart Installer package's UID
# This UID is from the protected range 
# and therefore the package will fail to install if self-signed
# By default qmake uses the unprotected range value if unprotected UID is defined for the application
# and 0x2002CCCF value if protected UID is given to the application
#symbian:DEPLOYMENT.installer_header = 0x2002CCCF

# Allow network access on Symbian
symbian:TARGET.CAPABILITY += NetworkServices\
     LocalServices \
    ReadUserData \
     WriteUserData \
     UserEnvironment
# If your application uses the Qt Mobility libraries, uncomment
# the following lines and add the respective components to the 
# MOBILITY variable. 
# CONFIG += mobility
# MOBILITY +=
 CONFIG += mobility
 MOBILITY += messaging


SOURCES += \
    SRC/statvaleur.cpp \
    SRC/statspinbox.cpp \
    SRC/statboutton.cpp \
    SRC/mainwindow.cpp \
    SRC/main.cpp  \
    SRC/accountdetail.cpp
HEADERS += \
    SRC/statvaleur.h \
    SRC/statspinbox.h \
    SRC/statboutton.h \
    SRC/mainwindow.h  \
    SRC/accountdetail.h
FORMS += \
    Forms/mainwindow.ui \
    Forms/accountdetail.ui

# Please do not modify the following two lines. Required for deployment.
include(deployment.pri)
qtcAddDeployment()



