#include <iostream>
#include <cmath>

using namespace std;


//sum of even numbers

int sumEvenNumbers(int a, int b){
    int sum1=0,i;
    if (a%2==0){
   	 int i=a;
	}
	else{
   	 int i=a+1;
	}
   	 while(i<b){
   		 sum1= i+sum1;
   		 i=i+2;
   	 }
    
    return sum1;
}



//sum of odd numbers

int sumOddNumbers(int a, int b){
    int sum2=0;
    if (a%2==1){
   	 int i=a;
   	 while(i<b){
   		 sum2= i+sum2;
   		 i=i+2;
   	 }
    }

    else{
   	 int i=a+1;
   	 while(i<b){
   		 sum2=sum2+i;
   		 i=i+2;
   	 }
    }
    return (sum2);
}

	


//sum of square of even numbers

int sumSqureEvenNumbers(int a, int b){
    int sum3=0, i,x;
    if (a%2==0){   	 //if a is even
   	 i=a;
    }
    else{
   	 i=a+1;   		 //if a is odd
    }
   	 while(i<b){
   		 x=i*i;   	 //square of no.
   		 sum3=x+sum3;   				 // sum with stock
   		 i=i+2;   						 //increment
   	 
   	 } 
    return sum3;
}


//sum of square of odd numbers

int sumSqureOddNumbers(int a, int b){
    int sum4=0, i,x;
    if (a%2==0){   	 //if a is even
   	 i=a+1;
    }
    else{
   	 i=a;   		 //if a is odd
    }
   	 while(i<b){
   		 x=i*i;   	 //square of no.
   		 sum4=x+sum4;   				 // sum with stock
   		 i=i+2;   						 //increment
   	 
   	 } 
    return sum4;
}

//driver fun
int main()
{
    
    cout<<"Welcome to Keshav's Programming"<<endl;
    cout<<"This progrmme does something"<<endl;    	 // intro

    int a,b,sumEven,sumOdd,sumSquareEven,sumSquareOdd;
   	 
	cout<<"Enter two numbers: ";
	cin>>a>>b;
    
	sumEven=sumEvenNumbers(a,b);	
	cout<<"Sum of even numbers is "<<sumEven<<endl;

	sumOdd=sumOddNumbers(a,b);
	cout<<"Sum of odd numbers is "<<sumOdd<<endl;

	sumSquareEven=sumSqureEvenNumbers(a,b);
	cout<<"Sum of square of even numbers is "<<sumSquareEven<<endl;

	sumSquareOdd=sumSqureOddNumbers(a,b);
	cout<<"Sum of square of odd numbers is "<<sumSquareOdd<<endl;

	return 0;
    
}

