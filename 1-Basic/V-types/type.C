// formatting in C++ for giving data types:
/* data_type variable1_name = value1, variable2_name = value2 */
/* e.g. int num1=20, numw2=30;
* or
int num1, num2;
num1=20;
num2=30;
*/
/* All types of variables:
int: Holes for integer values
char: holed for character value like 'c', 'F', 'e', 'E', 'q', etc.
bool: holds boolean value, true or false
double: double-precision floating point value
float: Single-precision floating point value.
*/
// We have "Global variable" and "Local variable" :
#include<string>
#include<iostream>

using namespace std;
//This is a global variable
string myVar= "this is string";
int main()
{
	std::cout <<"Value of myVar: "<<myVar<<endl;
//	printf("Value of myVar: %char \n", myVar);
	myVar='Z';
	std::cout<<"Value of myVar: "<<myVar<<"\n";
	return 0;
}

