#include<iostream>
using namespace std;

// if

/*

if (condition){
	statement(s);
	}
*/

int main(){
	int age1, age2;
	cout<<"Saeed age is : ";
	scanf("%d", &age1);
	cout<<"Ahamd age is : ";
	scanf("%d", &age2);
	if (age1>age2){
	cout<<"Saeed is older than Ahmad"<<endl;
	}
	if (age1<age2){
	cout<<"Saeed is younger than Ahmad"<<"\n";
	}
}

