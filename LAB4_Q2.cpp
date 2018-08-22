#include<iostream>		//include library
#include<math.h>
using namespace std;

int main()		//main function
{

	cout<<"Welcome to KESHAV'S programming."<<endl;		//welcome
	cout<<"This programme convert days into years, weeks and days."<<endl;		//intro


	int a,b,d,e; 		//declaration
	float c;

	cout<<"Enter days:";		//asks user
	cin>>a;				//take input	

	b=a/365.25;		//find years
	c=a-(365.25*b);		//find remaining days
	d=c/7;			//find weeks
	e=ceil(c-(7*d));	//find days
	

	cout<<"Your given number of days corresponds to:"<<endl; 		
	cout<<b<<" years " <<d<< " weeks " <<e<< "days"<<endl;		//output

return 0;
}
	
