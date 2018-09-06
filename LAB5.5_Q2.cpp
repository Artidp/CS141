#include<iostream>		//library
#include<string>

using namespace std;

int main(){

	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This progrmme makes hollow square star pattern."<<endl; // intro

	int a;		//declaration

	cout<<"Enter the star length of square: ";		//asks size
	cin>>a;

	for(int i=0;i<a;i++){			//loop for row
		for (int j=0;j<a;j++){		//loop for column
			if((i==0)||(i==a-1)){		//1st n last row		
				cout<<"*";
			}
			else{
				if((j==0)||(j==a-1)){		//1st n last column
				cout<<"*";
				}
				else{				//emptiness...
					cout<<" ";
				}
			}
		}
		cout<<endl;
	
	}

	return 0;
}
