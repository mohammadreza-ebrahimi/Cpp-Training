#include<iostream>
using namespace std;
#include<string>

int main(){
	int season;
	cin>>season;

	switch(season){
	case 1:
	cout<<"The trees are greening"<<"\n";
	break;
	case 2:
	cout<<"The weather is hot"<<"\n";
	break;
	case 3:
	cout<<"The leaves are falling"<<"\n";
	break;
	case 4:
	cout<<"The weather is getting cold"<<"\n";
	break;
	default:
	cout<<"The season is related to mercury seasons"<<"\n";
	break;
	}
	return 0;
}
