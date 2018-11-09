/*
14.STRING] Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method. 
*/

#include<iostream>				//include library
using namespace std;			
int main()
{
	char arr[10]="abcde";		//declare array
	int i=0;
	char *b=arr;

	cout<<"Index method"<<endl;
	while(arr[i]!='\0')
	{
		cout<<arr[i]<<endl;
		i++;
	}

	cout<<"Pointer method"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<*(b+i)<<endl;
	}
	return 0;
}
