#include<iostream>		//include library
#include<math.h>
using namespace std;

int main()		//main function
{

	cout<<"Welcome to KESHAV'S programming."<<endl;		//welcome
	cout<<"This programme convert days into years, weeks and days."<<endl;		//intro


	int a,b,d,e;
	float c;

	cout<<"Enter days:";
	cin>>a;

	b=a/365.25;
	c=a-(365.25*b);
	d=c/7;
	e=ceil(c-(7*d));
	

	cout<<"Your given number of days corresponds to:"<<endl;
	cout<<b<<" years " <<d<< " weeks " <<e<< "days"<<endl;

return 0;
}
	
