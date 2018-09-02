#include<iostream>		//library
#include<string>

using namespace std;

int main (){

	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This programme tells user if the entered character is vowel or consonant"<<endl; // intro

	char a;  //declaration

	cout<<"Enter a character: "<<endl;
	cin>>a;
	int y=a;

	if (((y>64) && (y<91)) || ((y>96) && (y<123)))
		{
	
		if ((y==65) || (y==69) ||(y==73) || (y==79) || (y==85) || (y==97) || (y==101) || (y==105) || (y==111) || (y==117)){	
			cout<<"The entered character is a vowel."<<endl;
		}
		else 	{
		cout<<"The entered character is consonant."<<endl;
		}
	
	}

 	else {
		cout<<"The input is not a character"<<endl;
	}
	return 0;
 
	
}
	

