#include <iostream>
#include <string>

using namespace std;


//fun obtain values, return values to calling module
void fun1 (int &u,float &c,float &t)
{
}    

//fun calculate sales tax and total due
void fun2 (int &u,float &c,float &t,float &st,float &td)
{
    st=(u*c*t)/100;
    td= st+(u*c);
}

//fun gives output
void fun3(int &u,float &c,float &t,float &st,float &td)
{
	cout <<"Bill unit: "<<u<<endl;
	cout << "Cost per unit: "<<c<<endl;
	cout << "Tax rate in percentage: "<<t<<endl;
	cout << "Sales tax: "<<st<< endl;
	cout <<"Total due: "<<td<<endl;

}    

//driver fun
int main()
{
    
	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This progrmme either gives sum or tells maximum or minimum of two numbers"<<endl; 		// intro

    int u;
	float c,t,st,td;
    
    cout<<"Enter bill units: ";
    cin>>u;
    
    cout<<"Enter one unit cost: ";
    cin>>c;
    
    cout<<"Enter tax rate (%):  ";
    cin>>t;

	fun1(u,c,t);
	fun2(u,c,t,st,td);
	fun3(u,c,t,st,td);
    
    
    return 0;
    
}



