#include<iostream>
#include<string>

using namespace std;


//returns the uppercase of the inputChar received

char toUpper(char x) {
	int a = x;
	a = a - 32;
	return a;
	}


//returns the lowercase of the inputChar received

char toLower(char x){
	int a = x;
	a = a + 32;
	return a;
	}

//driver function
int main(){

	cout<<"Welcome to Keshav's Programming"<<endl;
    cout<<"This progrmme does something"<<endl;    	 // intro

	char a, z;

	cout << "Enter the character: " << endl;
	cin>>z;

	(int) z;


	if (z<123 && z>96){
	 	a = toUpper(z);
		cout<<"The case changed character is: "<< a<< endl;
	}

	else if (z<91 && z>64){
		a = toLower(z);
		cout<<"The case changed character is: "<< a<< endl;
	}

	else
		cout<<"The input is not a character"<< endl;

	return 0;
 }

