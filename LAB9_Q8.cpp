/*
8.Write a function myStrLen(char*) which returns the length of the parameter cstring.  Write the function without using the C++ function strlen.
*/

#include<iostream>				//include library
using namespace std;			
int myStrLen(char* txt)		//declaring function
{
	int i=0,count=0;
	
	while(txt[i++]!='\0'){			//condition for continuing loop
	
		count+=1;			//counting elements
	}
	
	return count;
}

int main()
{
	char str[100]={0};
	int length;

	cout<<"Enter any string: ";		//takes input
	cin>>str;
	
	length=myStrLen(str);			//call fun
	
	cout<<"String length is : "<<length<<endl;		

	return 0;
}
