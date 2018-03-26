## Control Flow

### Relational Operators
| Operator | Example | True Condition                  | False Condition         |
|----------|---------|---------------------------------|-------------------------|
| ==       | A == B  | A equals B                      | A is not equal to B     |
| !=       | A != B  | A is not equal to B             | A equals B              |
| >        | A > B   | A is greater than B             | A is not greater than B |
| <        | A < B   | A is less than B                | A is not less than B    |
| >=       | A >= B  | A is greater than or equal to B | A is less than B        |
| <=       | A <= B  | A is less than or equal to B    | A is greater than B     |

```
/*Goal: learn if-else statements in C++*/

#include<iostream>
#include<string>

int main()
{
    //instead of printing 0 and 1, create an array where
    //0 = False, 1 = True
    std::string TorF[] = {"False", "True"};

    int a = 100;
    int b = 33;
    int c = 33;

    //Print out the string values of each relational operation
    std::cout<<"a < b is "<<TorF[a<b];
    std::cout<<"\na > b is "<<TorF[a>b];
    std::cout<<"\na != b is "<<TorF[a!=b];
    std::cout<<"\nc >= b is "<<TorF[c>=b];
    std::cout<<"\nc <= b is "<<TorF[c<=b];    
    return 0;
}

=>
    a < b is False
    a > b is True
    a != b is True
    c >= b is True
    c <= b is True
```

### Logical Operators

// Assume A = 1, B = 1, C = 0, D = 0
| Operator | Behavior                                                                              | Example                 |
|----------|---------------------------------------------------------------------------------------|-------------------------|
| &&       | Logical "And" : If both inputs are non-zero the outcome of the operation is true      | A && B = 1              |
| "||"       | Logical "Or" : If at least one input is non-zero the outcome of the operation is true | "A || B = 1 "             |
| !        | Logical "Not" : negates the logical condition                                         | !(A&&B) = 0 !(C||D) = 1 |

```
/*Goal: understand the logical operators supported by C++
*/

#include<iostream>
#include<string>

int main()
{
    int A = 5;
    int B = 4;
    int C = 5;
    int D = 0;

    std::string TorF[] = {"False", "True"};

    //The && operator
    std::cout<<"A == C is "<<TorF[A==C];
    std::cout<<"\n(B == D) is "<<TorF[B==D];
    std::cout<<"\n(B > D) is "<<TorF[B>D];
    //A true && false = false
    std::cout<<"\n\n(A ==C) && (B == D) is "<<TorF[(A ==C) && (B == D)];  
    //A true and true = true
    std::cout<<"\n(A ==C) && (B > D) is "<<TorF[(A ==C) && (B > D)];     

    //The || operator
    //A true || false = true
    std::cout<<"\n\n(A ==C) || (B == D) is "<<TorF[(A ==C) || (B == D)];  
    //A true || true = true
    std::cout<<"\n(A ==C) || (B > D) is "<<TorF[(A ==C) || (B > D)];  

    //The 'Not' operator
    std::cout<<"\n\nA < B is "<<TorF[A<B];
    std::cout<<"\n!(A < B) is "<<TorF[!(A<B)];

    std::cout<<"\n\nA == C is "<<TorF[A==C];
    std::cout<<"\n!(A == C) is "<<TorF[!(A==C)];    

    return 0;
}

=>
    A == C is True
    (B == D) is False
    (B > D) is True

    (A ==C) && (B == D) is False
    (A ==C) && (B > D) is True

    (A ==C) || (B == D) is True
    (A ==C) || (B > D) is True

    A < B is False
    !(A < B) is True

    A == C is True
    !(A == C) is False
```

#### Truth Table Quiz
A sample program is shown below. This example is NOT the most efficient way to write the program. we will learn to use Arrays, functions, loops to make the program more efficient and elegant.
```
/*Goal: use logical and relational operators in a C++ program.
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/

#include<iostream>


int main()
{
    //(A and B and C) or (A and( (not B) or (not C))) = Q

    int A = 0;
    int B = 0;
    int C = 0;
    int Q;
    Q = (A && B && C) || (A && (!B || !C));

    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t(A&&(!B||!C))\tQ\n";
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 0;
    B = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 1;
    B = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 0;
    B = 0;
    A = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 1;
    B = 0;
    A = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 0;
    B = 1;
    A = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 1;
    B = 1;
    A = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    return 0;
}
```


Simplified to `Q = A;`

### Conditional Statements

```
/*Goal: practice if-else statements in C++
**Write a program to select the best pet.
*/

#include<iostream>

int main()
{
   char skin, location;
   std::cout<<"Would you like an animal with fur(f), feathers(t), or scales(s)?";
   std::cin>>skin;
   std::cout<<skin<<"\n";

   //Use if-else statements to control program flow
   if(skin == 'f')
    {
        std::cout<<"Get a dog"<<"\n";
    }
    else if(skin == 't')
    {
        std::cout<<"Get a bird"<<"\n";
    }
    else if(skin == 's')
    {
        std::cout<<"Would you like an animal that lives in water(w), land(l), or both(b)?";
        std::cin>>location;
        std::cout<<location<<"\n";

        //Use if-else statements to control program flow
        //note that the curly braces are not necessary if there is only
        //one line of code.

        if(location == 'w')
            std::cout<<"Get a fish"<<"\n";  
        else if(location == 'l')
            std::cout<<"Get a gecko"<<"\n";
        else if(location == 'b')
            std::cout<<"Get a frog"<<"\n";
        else
            std::cout<<"Enter water(w), land(l), or both(b)\n";
   }    
   else
        std::cout<<"Please choose fur(f), feathers(t), scales(s)"<<"\n";
   return 0;
}
```


### Switch Statements
Key to switch statements is that if the statement does not contain a `break;` then the program will execute each of the following statements whether or not it meets the statement requirements.
```
/*Goal: demonstrate use cases for the switch statement.*/

#include <iostream>

int main()
{
    int menuItem = 1;

    std::cout<<"What is your favorite winter sport?: \n";
    std::cout<<"1.Skiing\n2: Sledding\n3: Sitting by the fire";
    std::cout<<"\n4.Drinking hot chocolate\n";
    std::cout<<"\n\n";

    switch(menuItem)
    {
        case(1): std::cout<<"Skiing?! Sounds dangerous!\n";
                 break;
        case(2): std::cout<<"Sledding?! Sounds like work!\n";
                 break;
        case(3): std::cout<<"Sitting by the fire?! Sounds warm!\n";
                 break;
        case(4): std::cout<<"Hot chocolate?! Yum!\n";
                 break;
        default: std::cout<<"Enter a valid menu item";
    }

    char begin;
    std::cout<<"\n\nWhere do you want to begin?\n";
    std::cout<<"B. At the beginning?\nM. At the middle?";
    std::cout<<"\nE. At the end?\n\n";
    begin = 'M';  

    switch(begin)
    {
        case('B'): std::cout<<"Once upon a time there was a wolf.\n";
        case('M'): std::cout<<"The wolf hurt his leg.\n";
        case('E'): std::cout<<"The wolf lived happily everafter\n";
    }
    return 0;
}

=>
    What is your favorite winter sport?:
    1.Skiing
    2: Sledding
    3: Sitting by the fire
    4.Drinking hot chocolate


    Skiing?! Sounds dangerous!


    Where do you want to begin?
    B. At the beginning?
    M. At the middle?
    E. At the end?

    The wolf hurt his leg.
    The wolf lived happily everafter
```
#### quiz
```
/*Now I would like you to do a switch statement with breaks
**between the cases. Create a program that asks the user for
**two float numbers. Then asks the user if they would like to:
**add the numbers, subtract the numbers, multiply the numbers,
**divide the numbers.
**The program should then print the numbers with the chosen
**operation and the solution.
*/

#include <iostream>
#include <string>

int main()
{
    float int1, int2;
    char op;
    float result;

    std::cout<<"Enter two numbers:\n";
    std::cin>>int1;
    std::cin>>int2;

    std::cout<<"Enter the operation '+','-','*','/':\n";
    std::cin >> op;

    switch(op)
    {
    case('+'):
        result = int1 + int2;
        break;
    case('-'):
        result = int1 - int2;
        break;
    case('*'):
        result = int1 * int2;
        break;
    case('/'):
        result = int1 / int2;
        break;
    default:
        std::cout<<"Illegal operation";
    }
    std::cout << int1 << op << int2 << " = " << result << "\n";
    return 0;
}

=>
Enter two numbers:
Enter the operation '+','-','*','/':
5-6 = -1
```

### For Loops
```
/*Goal: examine a for loop example. */

#include <iostream>

int main()
{
    float input;
    float sum = 0;

    for(int i=0;i<5;i++)
    {
        std::cout<<"What is the next number?\n";
        std::cin>>input;
        sum = sum + input;
    }

    std::cout<<"Sum = "<<sum<<"\n";
    std::cout<<"Average = "<<sum/5<<"\n";
    return 0;
}

```

`size_t` - This alias in found in the cstddef library. To use size_t you will have to include the cstddef library.

You can use `size_t` in a loop where you would normally define the variable type of the iterator.


### While Loops
C++ has two forms of the while loop:
- while loops
- do .. while loops

#### While Loop
```
/*Goal: understand the syntax of while loops*/

#include <iostream>

int main()
{
    int entry = 0;

    //with this while loop the condition is true
    //so the statements are executed
    while(entry <=5)
    {
        std::cout<<"incrementing entry = "<<entry<<"\n";
        entry++;
    }

    //with this while loop the condition is false
    //so the statements are not executed
    while(entry < 5)
    {
        std::cout<<"decrementing entry = "<<entry<<"\n";
        entry--;
    }

    return 0;
}
```

#### Do...While Loops
The statements are executed the first time through the loop. Then the condition is checked. This is slightly different than the while loop. Which, you may recall, required the condition to be true BEFORE entering the loop for the first time.

Below is an example of the do...while loop.
C++ do ... while loops have the following syntax:

```
/*Goal: understand the do..while loop*/

#include <iostream>


int main()
{
    int count = 0;

    //This do..while loop will execute until count =5
    do
    {
        std::cout<<"Count = "<<count<<"\n";
        count++;
    }while(count < 5);


    int otherCount = 6;
    //This do..while loop will execute once. Even though
    //otherCount > 5
    do
    {
        std::cout<<"othercount = "<<otherCount<<"\n";
        otherCount++;
    }while(otherCount < 5);

    return 0;
}

```

#### Infinite Loops
Sometimes it is desired to create an infinite loop. For example, in embedded systems a infinite loop is often used for the main task.

To create an infinite loop using a for loop:
```
for( ; ;)
{
     std::cout<<"This for loop will run forever\n";
}
```

To create an infinite loop using a while loop:

```
while(1)
{
     std::cout<<"This while loop will run forever\n";
}
```


#### Exiting Loops
To exit a loop before it completes its normal sequence, we need to use control statements.

The two most commonly used are:
- break
- continue


The break statement:

The break statement will end the loop and begin executing the first statement that comes AFTER the end of the loop.

The continue statement: The continue statement will force the next iteration to be executed.
```
/*Goal: understand the break and conitnue statements*/

#include<iostream>


int main()
{
    int a = 0;
    while(a < 5)
    {
        std::cout<<"a = "<<a<<"\n";       
        a++;
        if(a == 3)
            break;
    }
    std::cout<<"The first statement after the first while loop\n\n";


    while(a < 15)
    {
        a++;
        if(a == 10)
        {
            std::cout<<"\tWhen a=10, go back to the top of the loop";
            std::cout<<"\n\tThis means a=10 is skipped.\n";
            continue;
        }
        std::cout<<"After continue a = "<<a<<"\n";           
    }
    return 0;
}
```
