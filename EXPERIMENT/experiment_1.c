/*
====================================================================
Title      : Installation of VS Code & GCC and Execution of First C Program
Author     : Prem Sahu
Branch     : Computer Science Engineering (AI & ML)
University : Rungta International Skills University
====================================================================

AIM:
To install Visual Studio Code and GCC compiler, and to write, compile,
and execute the first C program successfully.

SOFTWARE REQUIREMENTS:
1. Visual Studio Code (VS Code)
2. GCC Compiler (MinGW for Windows)
3. Windows Operating System

====================================================================
THEORY:
C is a structured programming language that requires a compiler
to convert source code into machine code. GCC (GNU Compiler Collection)
is widely used to compile C programs. Visual Studio Code is a lightweight
and powerful code editor used for writing and managing source code.

====================================================================
STEP 1: INSTALLATION OF VISUAL STUDIO CODE (VS CODE)

1. Open any web browser.
2. Search for "VS Code download".
3. Download Visual Studio Code for Windows.
4. Install VS Code using default settings.
5. Launch VS Code after installation.
6. Go to Extensions tab and install "C/C++" extension.

====================================================================
STEP 2: INSTALLATION OF GCC COMPILER (MinGW)

1. Download MinGW (Minimal GNU for Windows).
2. Install MinGW on your system.
3. Select gcc-g++ package during installation.
4. Add MinGW 'bin' folder path to Environment Variables.
5. Open Command Prompt and type:
   gcc --version
6. If GCC version is displayed, installation is successful.

====================================================================
STEP 3: C PROGRAM CREATION AND EXECUTION

1. Open Visual Studio Code.
2. Create a new file and save it as hello.c
3. Write the C program.
4. Open terminal in VS Code.
5. Compile the program using:
   gcc hello.c -o hello
6. Run the program using:
   hello

====================================================================
SOURCE CODE:
*/

#include <stdio.h>

int main() {

    printf("Hello, World!\n");
    printf("This is my first C program.\n");
    printf("Program compiled and executed using GCC compiler.\n");
    printf("Code written and run successfully in VS Code.\n");

    return 0;
}

/*
====================================================================
OUTPUT:
Hello, World!
This is my first C program.
Program compiled and executed using GCC compiler.
Code written and run successfully in VS Code.

====================================================================
RESULT:
The installation of VS Code and GCC compiler was done successfully.
The first C program was compiled and executed without any error.

====================================================================
CONCLUSION:
VS Code provides an easy-to-use environment for coding, while GCC
acts as a powerful compiler for C programs. Together, they make
C programming simple and efficient.

====================================================================
*/
