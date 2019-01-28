###################
OpenCV Example Codes with Visual Studio 2017
###################

Here is a list of all my OpenCV Example Codes with Visual Studio 2017

-----------------
Install/Configure OpenCV 4.0 with VS2017
-----------------
^^^^^^^^^
Install
^^^^^^^^^

* Install `VS2017 <https://visualstudio.microsoft.com/tr/downloads/>`_
* Install `OpenCV 4.0 <https://opencv.org/releases.html>`_

^^^^^^^^^
Configure
^^^^^^^^^

* Set PATH environment variable for OpenCV:

- Right-click *Computer*
  - Click *Properties*
  - Go to the *Advanced system settings* tab
  - Click the *Environment Variables* button
  - From *System Variables*, select *Path*, and click *Edit*
  - Assuming you installed OpenCV to ``D:\opencv`` (the default), add this to the end of *Variable value*::
  
         ;D:\opencv\build\x64\vc14\bin
