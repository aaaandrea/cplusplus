/*GOAL: Practice writing to the console and learn
**the variables types available in C++
**Print the sizes of each variable to the console.
**Print them in the following order:
**int, short, long, char, float, double, bool
**
**Use the command sizeof(variable type) ie: sizeof(int)
*/

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
