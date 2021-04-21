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
- **First C++ Program**
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

- **Variables and Data types**

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

- **Operators in C++**  

1) Basic Arithmetic Operators 
2) Assignment Operators  
3) Auto-increment and Auto-decrement Operators  
4) Logical Operators  
5) Comparison (relational) operators  
6) Bitwise Operators  
7) Ternary Operator  

- Arithmetic Operators

+: Addition  
-: Subtraction  
\*:Multiplication  
/:Division  
%:Modulo operator returns remainder  

- Assignment, Auto-increment and Auto-decrement operators

Those have been explained with examples in this [file]()
