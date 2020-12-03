# Simple C++ Programming for FRC Newbies 

## Getting Started

**Visual Studio Code (VSC) or Visual Studio 19 (VS)?**

VSC is at its most simple form is a text editor for coding. This makes it very lightweight, because it does not have any fancy features like natively running and debugging programs, or intellisense for languages, or even starting a new project. However, VSC can be very easily modified to do all these things with extensions. Most importantly, the C/C++ extension alongside WPILib is crucial to programming the source code of the robot. FRC does not allow any other editor to be used to code the robot code. My personal list of VSC extensions are:

* C/C++ (debugging and running C++ code)
* C++ Intellisense by austin (Additional intellisense support for C++)
* Code Spell Checker by Street Side Software (Spell checking in code)
* GitLens by Eric Amodio (Additional features to Git)
* indent-rainbow by oderwat (indentation are now made clear by customizable colors that occur at each tab)
* Kite AI Code AutoComplete by Kite (Useful autocompletion for a variety of languages)
* Prettier by Prettier (Auto-formatter)
* Visual Studio IntelliCode (Intellisense in general)
* WPILib by WPILib (Library for programming the robot)

**Running C++ in VSC**

Running C++ is messy on windows, but the way I do it is by installing MinGW (http://www.mingw.org/). Following the getting started page (http://www.mingw.org/wiki/Getting_Started), importantly making sure to install gcc-g++, you should now be able to compile and debug C++ code on your system via the command line (you can test this by opening command line entering the command g++ and seeing if it gives you an error about no input file; if not installed correctly, the command won't run at all giving you an error about g++ not being a recognized command). We simply now need to tell VSC to do this as well. Going into a project, folder, etc. you will now be able to (with C/C++ extension) press the play button with the little bug on your activity bar (aka the bar most left going down instead of across), and with your .cpp file opened, you should be able to simply press run and debug, select GDB/LLDB, and then g++. Your .cpp file will now run and your output will appear in the debug console.

**Visual Studio 19**

VS is an important tool to have when you are doing C++ programming. You don't have do any of the above, and it has a very nice debugger built in. However, this tool is very complex as it lets users have a large degree of control over how a C++ program is compiled. While WPI doesn't offer support for VS, OpenCV does, which is the primary vision library used for robots, and with such a robust library, VS is the only choice on windows to do vision. 





 