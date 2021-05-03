# C++ Basic Concepts
 
In this repository, you would be trained the basics of C++ programming language.  
I have decided to train it step by step. If you do not know anything about **C/C++**
there's no a problem. Just stick to the tutorial, at the end, you will be a C programmer. 
Here's I've listed the concepts you are supposed to learn.  

## Basics

- First C++ program (Hello World)
- Variables and Data types
- Operators in C++

***
### First C++ Program
In the folder **Hello-World** there exist a tutorial so that you can 
write a program to see `Hello World` in output. In this tutorial I've used 

```
#include<iostream>

using namespace std;
int main()
```
Now let me explain those  
`#include<iostream>` – This statements tells the compiler to include iostream file. This file contains pre defined input/output
 functions that we can use in our program.  

`namespace`- It is like a region. In this region there are functions, variables,
etc. and their scope that are limited to this particular region. `std` is a name of space where we have utilized.  

`int main()`- T is the major function of our program and the execution
of program depneds on this function, the `int` here denotes type of the varibles 
that I've explained it in the type folder. Just know that since our `main()` function
returns to the 0 (as an integer value), here I have used `int`.

`cout`- One of the best changes advented in C++. It's used instead of `printf` in 
C. Both of them are work in C++, but in my opinion, from now it is better to 
used `cout`.  
```
cout<<"Every thing here would be printed"<<endl
```
`endl` is used for indicating that the line is finished and a new line would be added. Alternate command in `"\n"`. It just leads to the next line.  
See the example [here](https://github.com/mohammadreza-ebrahimi/Cpp-basic/tree/main/hello-world)

### Variables and Data types

`int`: Holes for integer values  
`char`: holed for character value like 'c', 'F', 'e', 'E', 'q', etc.  
`bool`: holds boolean value, true or false  
`double`: double-precision floating point value  
`float`: Single-precision floating point value.  

for example we used `int main()`, since `main` returns ti an integer value, 0.Therefore, for defining eny function or variable, it is needed to declare its type first. Generaly, we have two types of variables in C++. 
- Global variables  
These variables is defined outside of any functions even `main`, and scope (every { } called scope), they can be accessed everywhere. 

- Local variables  
Local variables are declared inside the braces of any user defined function, main function, loops or any control statements(if, if-else etc) and have their scope limited inside those braces. See the examples [here](https://github.com/mohammadreza-ebrahimi/Cpp-basic/tree/main/V-types)

### Operators in C++

1) Basic Arithmetic Operators 
2) Assignment Operators  
3) Auto-increment and Auto-decrement Operators  
4) Logical Operators  
5) Comparison (relational) operators  
6) Bitwise Operators  
7) Ternary Operator  

- **Arithmetic Operators**

+: Addition  
-: Subtraction  
\*:Multiplication  
/:Division  
%:Modulo operator returns remainder  
See the example [here](https://github.com/mohammadreza-ebrahimi/Cpp-basic/blob/main/operators/operators-1.C)
- **Assignment, Auto-increment and Auto-decrement operators**  
Assume we have two different variabels num1 and num2, assignment operators act as   

num2=num1 => equal number2 to the variable num1  
num2+=num1 => num2=num2+num1  
num2-=num1 => num2=num2-num1  
num2/=num1 => num2=num2/num1  
num2*=num1 => num2=num2*num1  
num2\%=num1 => num2=num2\%num1  

also Auto-increment and Auto-decrement operators are  
num1++ => num1+1
num1-- => num1-1

Those have been explained with examples in this [file](https://github.com/mohammadreza-ebrahimi/Cpp-basic/blob/main/operators/operators-2%2C3.C)

- **Logical Operators**  
&& , || , !  

Logical Operators are used with binary variables i.e. boolean. 
They are mainly used in conditional statements and loops for evaluating 
a condition.  
**&&** - will return true if both variables are true, else it would return false.  
**\|\|** - will return false in both variables are false, else it would return true.  
**!var1** -  will return the oposite of `var1`, means it would be true if `var1` is false
and would be false if `var1` is true. Let's see an example:

```cpp
#include<iostream>
using namespace std;
// Assume we have two boolean variables, b1 and b2. therefore:

int main(){
        bool b1=true;
        bool b2=false;

        cout<<" b1 && b2: "<<(b1&&b2)<<endl;
        cout<<" b1 || b2: "<<(b1||b2)<<endl;
        cout<<" !b1: "<<!b1<<endl;
        cout<<"!(b1 && b2): "<<!(b1&&b2)<<"\n";
        return 0;
}
```
the output would be
```cpp
 b1 && b2: 0
 b1 || b2: 1
 !b1: 0
!(b1 && b2): 1
```
Further examples can be found [here](https://github.com/mohammadreza-ebrahimi/Cpp-basic/blob/main/operators/operators-4.C) 

- **Relational Operators**  

In C++, We have six relational operators as follows:    
== returns true if both sides are equals to each other  
!= returns true if leaft side is not equal to rhe right side of operator  
\> returns true if left side is greater than right  
\< returns true if left side is less than right  
\>= returns true if left side is greater than or equal to right  
\<= returns true if left side is less than or equal to right    

See the example [here](https://github.com/mohammadreza-ebrahimi/Cpp-basic/blob/main/operators/operators-5.C)  

***  
## Flow Control  
- _if_ statement  
- nested _if_ statement  
- _if-else_ statement  
- _if-else-if_ statement  

***  
### _if_ statement  
The `if` is included a condition and one or several statements that gets executed. it is written in following form  
```cpp

if (condition){
        statement(s);
        }
```  
The statement inside the `{ }` would be only executed if the given `condition` is true, otherwise, it would be ignored. You acn see the example [here](https://github.com/mohammadreza-ebrahimi/Cpp-basic/blob/main/f-control/if.C).

