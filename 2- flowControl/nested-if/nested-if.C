#include<iostream>

using namespace std;
/*
if(condition_1) {
   Statement1(s);

   if(condition_2) {
      Statement2(s);
   }
}*/


int main(){
	int num1, num2, num3;
	cout<<"first number is: ";
	scanf("%d", &num1);
	cout<<"seconf number is: ";
	scanf("%d", &num2);
	cout<<"Third number is: ";
	scanf("%d", &num3);
	
	
	if (num1<=num3 && num2<=num3){

	cout<<"Number3 is the beiggest= "<<num3<<endl;
		if(num3<100){
		cout<<"All numbers are less than 100"<<endl;
		}
	}
	else{
	cout<<"All numbers are not less than 100"<<endl;
	}
	return 0;
}

