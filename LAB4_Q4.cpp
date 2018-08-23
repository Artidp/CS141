#include<iostream>		//include library
using namespace std;

int main()		//main function
{

	cout<<"Welcome to KESHAV'S programming."<<endl;		//welcome
	cout<<"This programme calculates total, average and percentage of five subjects."<<endl;		//intro

	float a,b,c,d,e;		//declaration
	
	cout<<"You need to enter marks of each subjects out of 100."<<endl;
	
	cout<<"Enter marks obtained in 1st subject: ";		//asks user
	cin>>a;		//takes input
	cout<<"Enter marks obtained in 2nd subject: ";		//asks user
	cin>>b;		//takes input
	cout<<"Enter marks obtained in 3rd subject: ";		//asks user
	cin>>c;		//takes input
	cout<<"Enter marks obtained in 4th subject: ";		//asks user
	cin>>d;		//takes input
	cout<<"Enter marks obtained in 5th subject: ";		//asks user
	cin>>e;		//takes input

	float x,y,z;
	
	x=a+b+c+d+e;		//finds total
	cout<<"Total marks obtained by the student out of 500=  "<<x<<"."<<endl;		//output total

	y=x/5;			//finds avg
	cout<<"Average of his/her five subjects= "<<y<<"."<<endl;		//output avg

	cout<<"He/She has scored "<<y<< "% marks."<<endl;		//output %

return 0;
}
	

