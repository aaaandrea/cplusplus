Lesson 1: Basics
1. Introduction to C++
2. Why learn C++
3. Where is C++ used
4. What makes C++ different
5. Course Introduction
6. Textbook recommendations

7. Program Structure
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
- # - The hash signals the preprocessor directive line
- include - add the directives of the given library
- iostream - the given library
- <> - find this where all the standard libraries are stored
    - "" - note: also for finding the library, but first searches the local directory, then searches the standard.

breaking down main()
- returns an int
- only prints the string
- return 0: customary, means the program returns without errors.

8. Prog. Quizzes Explained
_don't care_

9. Comments
Should say:
- `What` at a high level is being done
- `Why` it's being done
Explain what the code is supposed to do.
