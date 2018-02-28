## Arithmetic Operations

May need to `#include <cmath>`

| Operator | Operation |
|---|---|
| + | Addition |
| - | Subtraction |
| * | Multiplication |
| / | Division |
| % | Modulo |

### Increment and decrement (++, --)
```
++x;
x+=1;
x=x+1;
```
In the early C compilers, the three previous expressions may have produced different executable code depending on which one was used. Nowadays, this type of code optimization is generally performed automatically by the compiler, thus the three expressions should produce exactly the same executable code.

A peculiarity of this operator is that it can be used both as a prefix and as a suffix. That means that it can be written either before the variable name (++x) or after it (x++). Although in simple expressions like x++ or ++x, both have exactly the same meaning; in other expressions in which the result of the increment or decrement operation is evaluated, they may have an important difference in their meaning: In the case that the increase operator is used as a prefix (++x) of the value, the expression evaluates to the final value of x, once it is already increased. On the other hand, in case that it is used as a suffix (x++), the value is also increased, but the expression evaluates to the value that x had before being increased. Notice the difference:

| Example 1 | Example 2 |
|---|---|
| x = 3 | x = 3 |
| y = ++x | y = x++ |
| _x contains 4, y contains 4_ | _x contains 4, y contains 3_ |

eg.
```
#include <cmath>
std::pow(base, exponent)

or...

// 3^5 is equal to std::pow(3,5)
std::pow(3,5)

// also M_PI is equivalent to pi
#include <cmath>
M_PI = 3.1459265358979323846
```

### Quiz
```
/*Goal: practice arithmetic operations in C++
**Write a program that calculates the volumes of:
**a cube, sphere, cone.
**Cube Volume = side^3
**Sphere Volume = (4/3) * pi * radius^3
**Cone Volume = pi * radius^2 * (height/3)
**Write the values to the console.
*/

#include <iostream>
#include <cmath>

int main()
{
    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;

    float volCube, volSphere, volCone = 0;

    volCube = std::pow(cubeSide, 3);
    volSphere = ((4.0 / 3.0) * M_PI) * std::pow(sphereRadius, 3);
    volCone = M_PI * std::pow(coneRadius, 2) * (coneHeight / 3);

    std::cout << "Volume of Cube: " << volCube << "\n";
    std::cout << "Volume of Sphere: " << volSphere << "\n";    
    std::cout << "Volume of Cone: " << volCone << "\n";

    return 0;
}
```

The output of the program:

```
Volume of Cube: 157.464

Volume of Sphere: 52.9854

Volume of Cone: 857.985
```


### Variable Assignment
C++ is a language that requires variable types to be known at compile time. However, C++ does allow some implicit conversions. For example and integer can be assigned to a float, or an integer can be treated as a char.

```
/*Goal: understand C++ implicit variable assignments.
**Run the program to see implicit variable assignment at work.
 */


#include<iostream>

int main()
{

    int a = 65;
    char charA = 65;
    char charB = 'B';
    float answer = 0;
    char charC = 67;
    int integer = 80;
    float floatNumber = 0.0;

    std::cout<<"a = "<<a<<"\n";
    std::cout<<"charA = "<<charA<<"\n";
    std::cout<<"charB = "<<charB<<"\n";

    //we can assign an integer to a float
    floatNumber = integer;
    std::cout<<"integer = "<<integer<<"\n\n";
    std::cout<<"floatNumber = integer = "<<floatNumber<<"\n";

    //we can assign a char to a float
    floatNumber = charB;
    std::cout<<"floatNumber = charB = "<<floatNumber<<"\n";  

    answer = floatNumber/4;
    std::cout<<"answer = floatNumber/4 = "<<answer<<"\n";

    //But assigning a float to a char doesn't quite work
    charC = answer;
    std::cout<<"charC = answer = "<<charC<<"\n";

    //assigning a float to an interger, results in the float being truncated
    integer = answer;
    std::cout<<"integer = floatNumber = "<<integer<<"\n";   
    return 0;
}
```

output:
```
a = 65
charA = A
charB = B
integer = 80

floatNumber = integer = 80
floatNumber = charB = 66
answer = floatNumber/4 = 16.5
charC = answer = 
integer = floatNumber = 16
```
