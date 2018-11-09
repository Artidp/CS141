/*
Write a piece of code which prints the characters in a cstring in a reverse order.
*/
#include <iostream>				//include library
using namespace std;

int main(){

	int n;

	cout<<"Enter size of array: "<<endl;		//asks size
	cin>>n;

	char s[n-1];			//declare array
	cout<<"Enter characters: "<<endl;
	cin>>s;

	cout<<"Input accepted is: ";			// shows input taken

	for(int i=0; i<n; i++){					// directly outputs array
	cout<<s[i];
	}

	cout<<endl;

	cout<<"Character in reverse order are: ";
	for(char *cptr=&s[n-1]; *cptr != '\0'; cptr--){			//run loops
		cout<<*cptr;							//print elements
	}

	cout<<endl;


   return 0;
}
