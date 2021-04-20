
#include<iostream>
#include<string>

using namespace std;

string name="Mohammadreza";
string name2="Ahmadi";

string Family(){
	string name="Gholami";
	return name;
}

int main(){
	cout<<"Call Family Function: "<<Family()<<endl;
	cout<<"My name is: "<<name<<" "<<Family()<<endl;
	name="Mohammadhossein";
	cout<<"My brother's name is: "<<name<<" "<<Family()<<endl;
	name="Zahra";
	cout<<"My mother's name is: "<<name<<" "<<name2<<endl;
	name="Ghorbanali";
	cout<<"My father's name is: "<<name<<" "<<Family()<<"\n";
	return 0;
}



