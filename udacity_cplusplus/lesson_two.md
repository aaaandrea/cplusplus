## Compilation and Execution

Compiling is the process of translating the code that you've written into machine code that processors understand. Every program, regardless of the source language, needs to be compiled in order to execute. This is true even for scripting languages like Python or JavaScript. In these cases, the interpreter (or a similar system) is responsible for compiling code on the fly in a process known as just-in-time compiling. To the user, compilation and execution of scripting languages are effectively a single action. (Of course, the actual process of compiling code at run-time is much more complicated than what was described here in one sentence. It's also very much dependent on the exact language and runtime in question.)


### Compilation
Unlike scripted languages, compiled languages treat compilation and execution as two distinct steps. Compiling a program leaves you with an executable (often called a "binary"), a non-human readable file with machine code that the processor can run.

The nice thing about binaries is that they're generally distributable. So long as it was built with the right architecture in mind, you can copy an executable and run it immediately on other machines (like downloading a .exe file on Windows) without any need to share your source code or have the user perform any intermediate tasks before execution.

There are many tools available to help you compile, ranging from barebones tools, such as g++ on Unix, to complex build systems that are integrated into IDEs like Visual Studio and Eclipse.

There is a high-level build tool called CMake that is fairly popular and cross-platform. CMake in and of itself, however, does not compile code. CMake results in compilation configurations. It depends on a lower-level build tool called Make to manage compiling from source. And then Make depends on a compiler to do the actual compiling.

#### Object Files
Compiling source code, like a single .cpp file, results in something called an object file. An object file contains machine code but may not be executable in and of itself. Among other things, object files describe their own public APIs (usually called symbols) as well as references that need to be resolved from other object files. Depended upon object files might come from other source files within the same project or from external or system libraries.

In order to be executable, object files need to be linked together.

#### Linking
Linking is the process of creating an executable by effectively combining object files. During the linking process, the linker (the thing that does the linking) resolves symbolic references between object files and outputs a self-contained binary with all the machine code needed to execute.

As an aside, linking is not required for all programs. Most operating systems allow dynamic linking, in which symbolic references point to libraries that are not compiled into the resulting binary. With dynamic linking, these references are resolved at runtime. An example of this is a program that depends on a system library. At runtime, the symbolic references of the program resolve to the symbols of the system library.

There are pros and cons of dynamic linking. On the one hand, dynamically linked libraries are not linked within binaries, which keeps the overall file size down. However, if the library changes at any point, your code will automatically link to the new version. Like any changing dependency, difficult to fix and surprising bugs sometimes arise when versions change.

#### Compiling to Executable with a Compiler
Technically, you only need a compiler to compile C++ source code to a binary. A compiler does the dirty work of writing machine code for a given processor architecture. There are many compilers available. For this course, we picked the open source GNU Compiler Collection, more commonly called G++ or GCC. gcc is a command line tool.

There are two challenges with using gcc alone, both of which relate to the fact that most C++ projects are large. For one thing, you need to pass the paths for all of the project's source header files and cpp files to gcc. This is in addition to any compiler flags or options. You can easily end up with single call to gcc that spans multiple lines on a terminal, which is unruly and error-prone.

Secondly, large projects will usually contain multiple linked binaries, each of which is compiled individually. If you're working in large project and only change one .cpp file, you generally only need to recompile that one binary - the rest of your project does not need to be compiled again! Compiling an entire project can take up to hours for large projects, and as such being intelligent about only compiling binaries with updated source code can save lots of time. GCC in and of itself is not smart enough to recognize what files in your project have changed and which haven't, and as such will recompile binaries needlessly - you'd need to manually change your gcc calls for the same optimizations. Luckily, there are tools that solve both of these problems!

### Terminal
Reference for using C++ in a Unix environment

#### Step-by-step example of compiling from the terminal.

This is the easiest, most direct method.

Step 1: Open a terminal window
Step 2: Make sure you have the C++ libraries loaded on your machine.
Step 3: Go to the directory where you saved your program.
Step 4: Compile the program.
Step 1:

Open a terminal window.

On my Mac machine I can open a terminal window by going to the menu where all my applications are stored and selecting the terminal application.

Now, let's find out if we have C++ on my computer:

1. Open a terminal window - you'll notice when you open your window it may have a black background with white text. I changed mine to have a white background with black text to make it easier for you to see.
    Notice the prompt on my terminal.
    It is:
     > andreadelrio ~ $

    The `$` is the standard shell prompt for Unix/Linux. Yours may be different.
    Check out Shell Prompt Explained for more information.
    You can also see my name `andreadelrio ~`. This is valuable information. It tells me which directory I'm in. My terminal starts in the top level directory of my computer.


2. Make sure you have the C++ libraries loaded on your machine.
- At the terminal prompt, type in: `g++ -help`
- For some systems you may have type: `G++ --help`

When I enter this command I get a long list of helpful information about the C++ compiler. A partial list of commands after typing `g++ -help`
```
OVERVIEW: clang LLVM compiler

USAGE: clang [options] <inputs>

OPTIONS:
  -###                    Print (but do not run) the commands to run for this compilation
  --analyzer-output <value>
                          Static analyzer report output format (html|plist|plist-multi-file|plist-html|text).
  --analyze               Run the static analyzer
  -arcmt-migrate-emit-errors
                          Emit ARC errors even if the migrator can fix them
  -arcmt-migrate-report-output <value>
                          Output path for the plist report
  -cl-denorms-are-zero    OpenCL only. Allow denormals to be flushed to zero.
  -cl-fast-relaxed-math   OpenCL only. Sets -cl-finite-math-only and -cl-unsafe-math-optimizations, and defines __FAST_RELAXED_MATH__.
  -cl-finite-math-only    OpenCL only. Allow floating-point optimizations that assume arguments and results are not NaNs or +-Inf.
  -cl-fp32-correctly-rounded-divide-sqrt
                          OpenCL only. Specify that single precision floating-point divide and sqrt used in the program source are correctly rounded.
  -cl-kernel-arg-info     OpenCL only. Generate kernel argument metadata.

etc...

```

### Unix Commands
I'm in a Unix environment, so we'll be using Unix commands.

- `pwd`: print working directory
- `cd`: change directory
- `ls`: list the contents of the directory


### Compiling in the Terminal
We have completed the steps necessary to compile:

- Open a terminal window
- Navigate to the correct directory
- Make sure you file(s) are in the directory

I am going to compile a program called `assignment2.cpp`
The command to compile this file is:
    `g++ filename.cpp -o nameOfExecutableCode`

For example `g++ assignment2.cpp -o a2`:
- `g++` is the command to compile
- `assignment2.cpp` is the file to be compiled
- `-o` is the command that says you want name of the executable file
- `a2` is the name I want to give the executable file.

### Executing in the Terminal
see `src/main.cpp` and `src/input.txt`
