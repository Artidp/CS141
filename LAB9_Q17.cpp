/*
17.Implement your versions for the following functions: 
Strcpy
Strcat
Strlen
Strcmp
Strchr
Strstr
*/

#include<iostream>					//include library
using namespace std;
				
void strcpy(char *p, char *q)				//string copy
{
	for(int i=0;i<100;i++)			
	{
		*(q+i)=*(p+i);		
	}	
	cout<<"Copied string is : "<<q<<endl;
}
		
int strlen(char *p)					//string length				
{
	int x=0;
	while(*(p+x)!='\0')
	{
		x++;
	}
	return x;		
}

void strcat(char a[],char b[])		// store length of both string in the third string 
{
	char c[200],*r,*p,*q;
	p=a;r=c;q=b;
	
	int x,y;
	x = strlen(a);
	y = strlen(b);
	for(int i=0;i<x;i++)
	{
		*(r+i) = *(p+i) ;
	}
	for(int i=0;i<y;i++)
	{
		*(r+i+x)=*(q+i);
	}
	cout<<"Concatenated string is: "<<c<<endl;
}

void strcmp(char *p,char *q)		//break the loop when enconter some element
{
	int c=0;
	for(int i=0;i<100;i++)
	{
		if(*(p+i)!=*(q+i))
		{
			c=0;
			break;
		}		
	}
	 
	cout<<((c==1) ? "The two strings match completely " : "The two strings are different.")<<endl;	
}

void strchr(char *p)			//find searched char
{
	char k;
	cout<<"Enter the character you want to search: ";
	cin>>k;
	for(int i=0;i<100;i++)
	{
		if(*(p+i)==k)
		{
			cout<<"The letter at "<<i+1<<" position matches your entry."<<endl;
		}
	}
}

char* strstr(char *str, char *substr)
{
	  while (*str) 
	  {
		    char *Begin = str;
		    char *pattern = substr;
		    
		    // If first character of sub string match, check for whole string
		    while (*str && *pattern && *str == *pattern) 
			{
			      str++;
			      pattern++;
		    }
		    // If complete sub string match, return starting address 
		    if (!*pattern)
		    	  return Begin;
		    	  
		    str = Begin + 1;	// Increment main string 
	  }

}

int main()
{
	char a[100], b[100];
	cout<<"Enter 1st string :";		//takes input
	cin>>a;

	strcpy(a,b);
	cout<<"Length of above string is: "<<strlen(a)<<endl;
	strchr(a);

	cout<<"Enter 2nd string: "; 		//takes input
	cin>>b;
	strcat(a,b);
	strcmp(a,b);
	strstr(a,b);

	return 0;
}
