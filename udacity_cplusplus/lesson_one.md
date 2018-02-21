

## Lesson 1: Basics
### Introduction to C++

### Why learn C++

### Where is C++ used

### What makes C++ different

### Course Introduction

### Textbook recommendations

### Program Structure

Each program has 2 parts. The `preprocessor directives` and the `main function`

Example.cpp:
```
#include <iostream>

int main()
{
    std::cout << "Hello world, I am ready for C++";
    return 0;
}
```

breaking down this line `#include <iostream>`:
- `#` - The hash signals the preprocessor directive line
- include - add the directives of the given library
- iostream - the given library
- <> - find this where all the standard libraries are stored
    - "" - note: also for finding the library, but first searches the local directory, then searches the standard.

breaking down main()
- returns an int
- only prints the string
- return 0: customary, means the program returns without errors.

### Prog. Quizzes Explained

_don't care_

### Comments

Should say:
- `What` at a high level is being done
- `Why` it's being done
Explain what the code is supposed to do

### Adding Comments can be done in two ways:
- As a comment block

```
/*The start of a comment block.
Everything between "/* "and " */ "
is in the comment block.
The end of a comment block.*/
```

or with astericks to call attention to the block.

```
/*write a C++ program that outputs the following statement:
*** "Hello world, I am ready for C++"
*/
```
- As a single line with two slash marks

```
int main()
{
    int year = 0;
    int age = 0;
    std::string name = " ";
    //print a message to the user <- this line is a comment
    std::cout<<"What year is your favorite? ";
    //get the user response and assign it to the year<- this line is a comment
    std::cin >> year;
    ...
```

### Style Guide
- A straightforward style guide is:
               [Modern C++ Coding Guidelines](https://github.com/Microsoft/AirSim/blob/master/docs/coding_guidelines.md)

- For a more detailed guideline:
               [Google C++ Style Guideline](https://google.github.io/styleguide/cppguide.html)

### Quiz: Write Hello World
```
#include <iostream>

int main() {
    std::cout << "Hello world, I am ready for C++";
    return 0;
}
```

### Prog Quiz Checker

- To Compile:
    `g++ main.cpp -o main.out`
    - `g++` is the C++ compiler
    - `main.cpp` is the file name
    - `-o` is for the name of the output
    - `main.out` is the name of the output

- To Run:
    `./main.out`

They run `./main.out and check the output against their answer`

### Using Namespace
This tells the compiler to assume we are using the standard library, so we don’t have to write `std::`
```
using namespace std;
int main()
{
}
```

### Write to the Console
- Any string literal must be enclosed in double quotes
- Numbers do not require quotes
- If a variable name is used, the value of the variable is printed
```
int integer = 4543;
std::cout << "The value of integer is " << integer << "\n";
```

- note that cout does not automatically add newlines. You must add them using the escape sequence “\n”

### Print variables programming quiz

    For this programming assignment, you will be printing the size of different variable types. As with other programming languages, the size a variable is allocated in memory is dependent upon its type. To determine how many bytes each variable type uses, C++ provides the function sizeof(variableType).

    You will use the command :
        sizeof(variable type) ie: sizeof(int)
    When printing out the variable types, you may want to print them out, one per line.
    To do this, add "\n" or "endl" to the end of the text to be printed.

    For example:
        This is the new line character.
            `cout<<"int size = "<<sizeof(int)<<"\n";`
        A second option is `endl`
            `cout << "int size = " << sizeof(int) << endl;`
    In many instances endl and "\n" will perform the same function. There are cases where they will be different.
    You can read a quick discussion about their differences here:
    newline and endline differences

    - Print Variables Answer

```
#include <iostream>

int main()
{
    int integer = 6;
    std::cout << "int size = " << sizeof(int) << "\n";
    std::cout << "short size = " << sizeof(short) << "\n";
    std::cout << "long size = " << sizeof(long) << "\n";
    std::cout << "char size = " << sizeof(char) << "\n";
    std::cout << "float size = " << sizeof(float) << "\n";
    std::cout << "double size = " << sizeof(double) << "\n";
    std::cout << "bool size = " << sizeof(bool) << "\n";
    return 0;
}
```
output =>
```
int size = 4
short size = 2
long size = 8
char size = 1
float size = 4
double size = 8
bool size = 1
```


### Define Constants
In C++ we can degin a constant using `const`
    eg. `const int weightGoal = 1000;`

### Enumerated Constants

The programmer can create a new variable type and then assign a finite number of values to it.

Here is the form of an enum keyword:

```
enum type_name {
    value1,
    value2,
    value3
    .
    .
} object_names;
```
- eg. `enum Month { Jane, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};`
    - In this example, MONTH has twelve possible values. These 12 values translate to 12 integer values.
        - `Jan = 0`, `Feb = 1`, etc.

```
/* Enum example*/
#include <iostream>
using namespace std;

int main()
{
    //define MONTHS as having 12 possible values
    enum MONTHS {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec}

    //define bestMonth as a variable type MONTHS
    MONTHS bestMonth;

    //assign bestMonth as a variable type MONTHS
    bestMonth = Jan;

    //now we can check the value of bestMonths just like any other variable
    if(bestMonth == Jan)
    {
        cout << "I'm not so sure January is the best month\n";
    }
    return 0;
}
```

### Format Output
Need to use escape sequences. Commonly:
- `\n` - newline
- `\t` - tab
Can also format with the iomanip library
- #include <iomanip>
```
#include <iomanip>

std::cout << "\n\nThe text without any formating\n";
std::cout << "Ints" << "Floats" << "Doubles" << "\n";
std::cout << "\nThe text with setw(15)\n";
std::cout << "Ints" << std::setw(15) << "Floats" << std::setw(15) << "Doubles" << "\n";
std::cout << "\n\nThe text with tabs\n";
std::cout << "Ints\t"<<"Floats\t"<<"Doubles" << "\n";
```

Output will be:

```
The text without any formating
IntsFloatsDoubles

The text with setw(15)
Ints         Floats        Doubles


The text with tabs
Ints    Floats    Doubles
```


Formatting Output Quiz:

```
/*Formatting Output
**Goal: practice using cout to format output to console
**Print the variables in three columns:
**Ints, Floats, Doubles
*/

#include <iostream>
#include <iomanip>

    int main()
    {
         int a = 45;
         float b = 45.323;
         double c = 45.5468;
         int aa = a + 9;
         float bb = b + 9;
         double cc = c + 9;
         int aaa = aa + 9;
         float bbb = bb + 9;
         double ccc = cc + 9;

         std::cout << "print with set width = 10\n";
         std::cout << "Ints" <<s td::setw(10);
         std::cout << "Floats" << std::setw(10);
         std::cout << "Doubles" << std::setw(10) << "\n";

         std::cout << a;
         std::cout << std::setw(12) << b;
         std::cout << std::setw(10) << c << "\n";    

         std::cout << aa;
         std::cout << std::setw(12) << bb;
         std::cout << std::setw(10) << cc << "\n";  

         std::cout << aaa;
         std::cout << std::setw(12) << bbb;
         std::cout << std::setw(10) << ccc << "\n\n";

         std::cout << "print with tabs\n";
         std::cout << "Int" << "\tFloats" << "\tDoubles\n";
         std::cout << aaa << "\t" << bbb <<"\t" << ccc << "\n";

         return 0;
    }
```

### File IO
- Include the `<fstream>` library - library with all needs for reading/writing a file
- Create a stream (input, output, both)
     - ofstream myfile; (for writing to a file)
     - ifstream myfile; (for reading a file)
     - fstream myfile; (for reading and writing a file)
- Open the file  `myfile.open(“filename”)`;
- Write or read the file
- Close the file `myfile.close()`;

```
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    ofstream myfileI ("input.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else cout << "Unable to open file for writing";

    //create an input stream to read the file
    ifstream myfileO ("input.txt");
    //During the creation of ifstream, the file is opened.
    //So we do not have explicitly open the file.
    if (myfileO.is_open())
    {
        while ( getline (myfileO,line) )
        {
            cout << line << '\n';
        }
        myfileO.close();
    }

    else cout << "Unable to open file for reading";

    return 0;
}
```

### Header Files
- Header files contain information about how to do a task
- The main program contains information about what to do

- `main.cpp`: all the code on **what** the program does
- `main.hpp`: all the code on **how** the program does a task

`main.cpp` example:

```
#include "main.hpp"

int main()
{
    cout << "Hello, I use header files!";
    return 0;
}
```

`main.hpp` example:

```
#include <iostream>
#include <string>

using namespace std
```
