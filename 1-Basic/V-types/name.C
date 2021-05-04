
#include<iostream>
#include<string>

using namespace std;

string name="Mojtaba";
string name2="Ahmadi";

string Family(){
	string name="Gholami";
	return name;
}

int main(){
	cout<<"Call Family Function: "<<Family()<<endl;
	cout<<"His name is: "<<name<<" "<<Family()<<endl;
	name="Mohammadhossein";
	cout<<"His brother's name is: "<<name<<" "<<Family()<<endl;
	name="Zahra";
	cout<<"His mother's name is: "<<name<<" "<<name2<<endl;
	name="Ghorbanali";
	cout<<"His father's name is: "<<name<<" "<<Family()<<"\n";
	return 0;
}



