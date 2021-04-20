# C++ Basic Concepts
 
In this repository, you would be trained the basics of C++ programming language.  
I have decided to train it step by step. If you do not know anything about **C/C++**
there's no a problem. Just stick to the tutorial, at the end, you will be a C programmer. 
Here's I've listed the concepts you are supposed to learn.  

## Basics

- First C++ programm (Hello World)
- Variables and their types
- Data types
- Operators in C++

***
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
`endl` is used for indicate that the line is finished and add a noew line would ne added.
Alternate command in `"\n"`. It just leads the crouser to the next line.   
