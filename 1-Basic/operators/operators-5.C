// 5. Relational Operators
/* We have six relational operators
== returns true if both sides are equals to each other
!= returns true if leaft side is not equal to rhe right side of operator
> returns true if left side is greater than right
< returns true if left side is less than right
>= returns true if left side is greater than or equal to right
<= returns true if left side is less than or equal to right
*/

#include<iostream>
using namespace std;

float x1, x2, x3, x4;


float gpa(){
	float avr = ((x1+x2)*3 + x3*4 + x4*2)/12;
	return avr;
}

int scale=14;

int main(){
	cout<<"X1: ";
	scanf("%f", &x1);
	cout<<"X2: ";
	scanf("%f", &x2);
        cout<<"X3: ";
        scanf("%f", &x3);
        cout<<"X4: ";
        scanf("%f", &x4);

	if (gpa()==scale){
	cout<<"your GPA is equal to 14"<<endl;
	}
	else{
	cout<<"your GPA is not 14"<<endl;
	}

        if (gpa()!=scale){
        cout<<"your GPA is not 14"<<endl;
        }
        else{
        cout<<"your GPA is equal to 14"<<endl; 
        }
        if (gpa()>scale){
        cout<<"your GPA is greater than 14"<<endl;
        }
        else{
        cout<<"your GPA is not greater than 14"<<endl; 
        }

        if (gpa()<scale){
        cout<<"The course FAILED"<<endl;
        }
        else{
        cout<<"your GPA is not less than 14"<<endl; 
        }


/*        if (gpa()<=scale){
        cout<<"your GPA is equal or less than  14"<<endl;
        }
        else{
        cout<<"your GPA is not less than 14"<<endl; 
        }

        if (gpa()>=scale){
        cout<<"your GPA is equal or greater than 14"<<endl;
        }
        else{
        cout<<"your GPA is not greater than 14"<<endl; 
        }
*/

	cout<<"Course GPA is : "<<gpa()<<"\n";

	return 0;
}











