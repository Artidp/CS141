
#include<iostream>	//include library
#include<string>	//included to use string

using namespace std;

int main ()		//main function
{
	string name;					//declaration of string

	cout<<"Enter your name"<<endl;		//asks name
	cin>>name;				//takes name
	cout<<"Hello "<<name<< ","<<endl;								//greets user
	cout<<"This programme does basic arithmetic calculations between two numbers."<<endl;		//informs user, what the programme is
	
	float a, b, sum, diff, product;	// declaration of arithmetic variables	
	
	cout<<"Enter your first number:"<<endl;			//asks first number	
	cin>>a; 		//takes first number

	cout<<"Enter your second number:"<<endl; 		//asks second number
	cin>>b; 		//takes second number

	sum=a+b;		//adds two numbers
	cout<<"The sum of input numbers is:"<<sum<<endl; 						//prints sum	

	diff=a-b; 		//subtracts number
	cout<<"The difference between input numbers is:"<<diff<<endl;					//prints difference
	
	product=a*b; 		//multiply numbers
	cout<<"The product of input numbers is:"<<product<<endl; 					//prints product

	
	int quotient, remainder;
	int c=a, d=b;

	quotient=a/b; 		//divides number
	cout<<"The qotient of dividing first by second numbers gives:"<<quotient<<endl; 		//prints quotient

	remainder=c%d; 		//calculates remainder
 	cout<<"The division of first by second numbers gives remainder:"<<remainder<<endl; 		//prints remainder

	cout<<"Thank you for running this programme."<<endl;

return 0;
}

