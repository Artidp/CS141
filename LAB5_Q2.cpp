#include<iostream>		//library
#include<string>

using namespace std;

int main (){

	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This programme finds the maximum of three numbers"<<endl; // intro

	float a,b,c;  //declaration

	cout<<"Enter three numbers: "<<endl;
	cin>>a>>b>>c;
 
	if ((a>b) && (a>c))	// <<first
	{
		cout<<"First no is greatest."<<endl;
	}
		
	else if ((b>a) && (b>c))		//<<second
	{
		cout<<"Second no is greatest."<<endl;
	}

	else if ((c>a) && (c>b))		// both equal
	{
		cout<<"Third no is greatest."<<endl;
	}

	else if ((a==b) && (b>c))
	{
		cout<<"First and second are equal and greater than third.";
	}

	else if ((a==b) && (c>b))
	{
		cout<<"First and second are equal and smaller than third.";
	}

	else if ((b==c) && (a>b))
	{
		cout<<"Second and third are equal and smaller than first.";
	}

	else if ((b==c) && (b>a))
	{
		cout<<"Second and third are equal and greater than first.";
	}

	else if ((a==c) && (a>b))
	{
		cout<<"First and third are equal and greater than second.";
	}

	else if ((a==c) && (a<b))
	{
		cout<<"First and third are equal and smaller than second.";
	}

	else
	{
		cout<<"All numbers are equal"<<endl;
	}


	return 0;

}
	
