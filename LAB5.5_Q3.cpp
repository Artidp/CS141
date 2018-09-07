#include<iostream>		//library
#include<string>

using namespace std;


int main(){

	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This progrmme makes hollow square star pattern with diagonal."<<endl; // intro

	int a;	//declaration

	cout<<"Enter the star length of square: ";		//asks size
	cin>>a;

	for(int i=0;i<a;i++){			//print n endl
		for (int j=0;j<a;j++){			//print n columns
			//print selected stars
			if ((i==0) || (j==0) ||(i==a-1)||(j==a-1)|| (i==j)||(i==a-j-1)){            
                		cout<<"*";            
                       }
			// all else spaces
                	else{
				cout<<" ";    
			}
		}
		cout<<endl;
	
	}

	return 0;
}
