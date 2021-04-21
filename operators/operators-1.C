/* All types of operators in C++ :
1. Arthmetic operators 
2. Assignment operators
3. Auto-increment and Auyo-decrement operators
4. Logical operators
5. relational (comparison) operators نسبی
6. Bitwise operators بیتی
7. Ternary operators سه گانه 
*/
// 1. Arthmetic + - * / %
#include<iostream>
using namespace std;

/*int main(){
	double num1=198.00;
	double num2=45.00;
	cout<<"Number1= "<<num1<<"& "<<"Number2=  "<<num2<<endl;
	cout<<"Number1 + Number2: "<<(num1+num2)<<endl;
	cout<<"Number1 - Number2: "<<(num1-num2)<<endl;
	cout<<"Number1 * Number2: "<<(num1*num2)<<endl;
	cout<<"Number1 / Number2: "<<(num1/num2)<<endl;
//	cout<<"Number1 % number2: "<<(num1%num2)<<"\n";
//      % Remainder is  just for int
	
	return 0;
}*/


//Let's do it a little better
 int main(){
	float num1, num2;
	cout<<"First number is: ";
	scanf("%f", &num1);

	cout<<"Second number is: ";
	scanf("%f", &num2);

	cout<<"num1 + num2= "<<(num1+num2)<<endl;
	cout<<"num1 * num2= "<<(num1*num2)<<endl;
	cout<<"num1 - num2= "<<(num1-num2)<<endl;
	cout<<"num1 / num2= "<<(num1/num2)<<"\n";
}














