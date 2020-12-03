# Simple C++ Programming for FRC Newbies 

## Getting Started

**Visual Studio Code (VSC) or Visual Studio 19 (VS)?**

VSC is at its most simple form is a text editor for coding. This makes it very lightweight because it does not have any fancy features like natively running and debugging programs, or IntelliSense for languages, or even starting a new project. However, VSC can be very easily modified to do all these things with extensions. Most importantly, the C/C++ extension alongside WPILib is crucial to programming the source code of the robot. FRC does not allow any other editor to be used to code the robot code. My list of VSC extensions are:

* C/C++ (debugging and running C++ code)
* C++ Intellisense by austin (Additional IntelliSense support for C++)
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

VS is an important tool to have when you are doing C++ programming. You don't have to do any of the above, and it has a very nice debugger built-in. However, this tool is very complex as it lets users have a large degree of control over how a C++ program is compiled. While WPI doesn't offer support for VS, OpenCV does, which is the primary vision library used for robots, and with such a robust library, VS is the only choice on windows to do vision. 

VS community version is free and easy to install. Just make sure to install its C++ component. Afterward, head to https://opencv.org/releases/ to grab the latest version of OpenCV. Download the Windows installer and put it somewhere you'll remember. The complexity starts here if you're completely unfamiliar with how make and g++ work. First, we'll need to create a global environment variable. Hit the Windows key and search for edit the system environment variables. Once you are there, press environment variables at the bottom, and now depending on whether you want OpenCV to be functional across your entire system or just one user select Path from either the user variables or the system variables and click edit. Click new and browse and look for where you installed OpenCV. Going into build, x64, vc15, and select bin. Hit ok when you are done and now we can create a new C++ console application for windows in VS. Once you are in your solution, in the solution explorer, right-click the entry that is your solution's name bolded and click properties. Change the configuration to debug and the platform to x64. In C/C++, edit the additional include directories to include the directory to your OpenCV folder\build\include. In Linker, edit additional library directories to include the directory to your OpenCV folder\build\x64\vc15\lib. Finally, in Linker Input, edit the additional dependencies to include opencv_world450d.lib. This .lib file will depend on the version of OpenCV you have. If you have OpenCV 3.4.12 the lib will be probably be called opencv_world3412d.lib. Else, you can just look in that directory to find the libs you need. Now, this will only work for debugging runs of your program. If you want to make this work for release, you'll have to edit the configuration to release and then do the steps again except with opencv_world450.lib instead of opencv_wold450d.lib. You should be done now. You can close out of that, and near your green run button, make sure your platform is x64 and your configuration is the correct one. To test if it works, put #include <opencv2/core.hpp> and see if it runs without any errors. If so, you're done!

## C++ Examples

**Hello, world!**

Printing on windows is very easy to do. Simply include iostream and in your main function cout "Hello, world!" with the << operator. If you want to write text on the next line, you can use the escape operator /n for a newline or with the << operator use endl. /n is preferred for performance reasons. 

**Printing prime numbers**

Let's print prime numbers. Include iostream for output, and let's begin with a function that tests whether an integer is prime or not and returns a boolean for true or false. We can do this simply by checking the number with every number below it with mod and seeing if that equals 0. Basically checking if it divides evenly and if it is a factor. If it does equal 0 we know that it isn't prime and return false. If no number returns false, we return true because there is no factor. In the .cpp I write, I don't use brackets, but this is only because I'm writing a single statement. If your code requires more than 1 line, use brackets. Let's write our main function and write a simple for loop that tests each number with this function and prints accordingly. Done!



 