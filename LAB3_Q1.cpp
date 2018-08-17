#include<iostream> 		//include library
using namespace std;

int main() 			//main function
{
	cout<<"You are welcome,this programme is made in gedit using c++ "<<endl; 	//Greetings

	int a;		//Declaring variables
	cout<<"Enter an integer:"; 	
	cin>>a; 	//Taking input

	float b;	//Declaring variables
	cout<<"Enter a number for float command:"; 	//Instruction for user
	cin>>b;		//Taking input

	char c;		//Declaring variables
	cout<<"Enter a character:"; 	//Instruction for user
	cin>>c;		//Taking input

	bool d=true;

	double e;	//Declaring variables
	cout<<"Enter a random number for double command:"; 	//Instruction for user
	cin>>e;		//Taking input

	short f;	//Declaring variables
	cout<<"Enter a random integer for short command:"; 	//Instruction for user
	cin>>f;		//Taking input

	cout<<"Size of integer in bytes = " << sizeof(a)<< endl;
	cout<<"Size of float in bytes = " << sizeof(b) << endl;
	cout<<"Size of character in bytes = " << sizeof(c)  << endl;
	cout<<"Size of true/false in bytes = " << sizeof(d) << endl;
	cout<<"Size of double in bytes = " << sizeof(e)<< endl;
	cout<<"Size of short in bytes = " << sizeof(f)<< endl;

	cout<<"Thanks for running this programme"<<endl;


return 0;
}
