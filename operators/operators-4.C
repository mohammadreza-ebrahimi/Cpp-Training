//4. Logical operators = &&, ||, ! 

/*Logical Operators are used with binary variables. 
They are mainly used in conditional statements and loops for evaluating 
a condition.

&&:will return true if both variables are true, else it would return false.
||:will return false in both variables are false, else it would return true.
!var1: will return the oposite of (var1), means it would be true if var1 is fals
and would be false if var1 is true.
*/

#include<iostream>
using namespace std;
/*
int main(){
        bool b1=true;
        bool b2=false;

        cout<<" b1 && b2: "<<(b1&&b2)<<endl;
        cout<<" b1 || b2: "<<(b1||b2)<<endl;
        cout<<" !b1: "<<!b1<<endl;
        cout<<"!(b1 && b2): "<<!(b1&&b2)<<"\n";
        return 0;
}
*/

//Average of two scores inculdes &&
int main(){
        int num1, num2;
//        cout<<"Number 3 is: "<<num3<<endl;
        cout<<"Number 1 is: ";
        scanf("%d", &num1);
        cout<<"Number 2 is: ";
        scanf("%d", &num2);

        if (num1>12 && num2>13){
        cout<<"The average is: "<<(num1+num2)/2<<endl;
        }
        else{
        cout<<"The Course Failed"<<"\n";
        }
}

