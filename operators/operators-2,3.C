#include<iostream>
using namespace std;

// 2. Assignment Operatores
/*
num2=num1 => equal number2 to the variable num1
num2+=num1 => num2=num2+num1
num2-=num1 => num2=num2-num1
num2/=num1 => num2=num2/num1
num2*=num1 => num2=num2*num1
num2%=num1 => num2=num2%num1
*/

int main(){

	int num1=320;
	int num2=75;
	cout<<"Number1= "<<num1<<" & Number2= "<<num2<<endl;
	num2=num1;
	cout<<"=: output= "<<num2<<endl;
	num2+=num1;
	cout<<"+: output= "<<num2<<endl;
	num2-=num1;
	cout<<"-: output= "<<num2<<endl;
	num2*=num1;
	cout<<"*: output= "<<num2<<endl;
	num2/=num1;
	cout<<"/: output= "<<num2<<endl;
	num2%=num1;
	cout<<"%: output= "<<num2<<"\n";
	return 0;
}

/*
int main(){
	int num1, num2;
	cout<<"First number is = ";
	scanf("%d", &num1);
	cout<<"Second number is= ";
	scanf("%d", &num2);

	cout<<"=: output= "<<(num2=num1)<<endl;
	cout<<"+: output= "<<(num2+=num1)<<endl;
	cout<<"-: output= "<<(num2-=num1)<<endl;
	cout<<"*: output= "<<(num2*=num1)<<endl;
	cout<<"/: output= "<<(num2/=num1)<<endl;
	cout<<"%: output= "<<(num2%=num1)<<"\n";
}
*/
//3. Auto-increment and Auto-decrement Operators
/*
int main(){
	int num1, num2;
	cout<<"number 1 is = ";
	scanf("%d", &num1);
	cout<<"number 2 is = ";
	scanf("%d",&num2);

	for (int i=num1; i<num2;){
		num1++;
		num2--;

	cout<<"Auto increment of Number 1 is= "<<num1<<endl;
	cout<<"Auto decrement of number 2 is= "<<num2<<"\n";
	}
}
*/
