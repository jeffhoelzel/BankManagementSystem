# C Bank Management System
## Description/Explanation
My banking program is designed to simulate how an automated banking system may function in the real world. Of course, there are some limitations when creating a system like this on such a small scale, however, I feel that this is both a solid demonstration of my C programming skills and a way to challenge myself.

**This system will allow the user to:**
* Create their own account with a specific username and password
* Login with their respecitve username and password
* Transfer money to and from a user's account
* And view their account balance

## How to Use
Make sure you have a C compiler installed on your machine, the commands for Windows, MacOS or Linux are fairly similar. Make sure you are in the correct directory before running any commands. _Note: I highly recommend using mine or your own Makefile, especially since this is a C program (if you are using a Makefile in Windows, use Powershell)._ If you do not want to go through the trouble of using a Makefile, it should be pretty straightforward just using the commands below in a terminal.

**Windows:** ```gcc LIBRARY_FILES_HERE.c BankManagementMain.c -o BankManagementMain.exe``` to compile, then ```BankManagementMain``` to run the program.

**MacOS/Linux:** ```gcc LIBRARY_FILES_HERE.c -o BankManagementMain BankMangementMain.c```, then ```./BankMangementMain``` to run the program.
