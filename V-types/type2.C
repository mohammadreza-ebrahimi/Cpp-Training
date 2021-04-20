#include<iostream>

using namespace std;

char myVar='A';

char myFunc() {
	//This is a local variable
	char myVar='B';
	return myVar;
}

int main()
{
	cout <<"Function Call: "<<myFunc()<<endl;
	cout<<"Value of myVar: "<<myVar<<endl;
	myVar='Z';
	cout<<"Value of myVar: "<<myFunc()<<endl;
	cout<<"Value of myVar: "<<myVar<<"\n";
	return 0;
}

