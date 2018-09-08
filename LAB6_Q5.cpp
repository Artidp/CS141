#include<iostream>		//library
#include<string>

using namespace std;

int sum(int a,int b) {		//sum using int
	int x=a+b;
	return x;
}


int max(int a,int b) {		//max using int
	int x;
	if (a>b){		// a>b
		x=a;
	}
	else {		//a<b
		x=b;
	}

	return x;
}


int min(int a,int b) {		//min using int
	int x;
	if (a>b){		// a>b
		x=b;
	}
	else {		//a<b
		x=a;
	}

	return x;
}



int main(){

	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This progrmme either gives sum or tells maximum or minimum of two numbers"<<endl; 		// intro

	cout<<"Enter two numbers: ";		//asks numbers
	int a,b;		//declaration
	cin>>a>>b;		//takes input
	
	int l;
	cout<<"Enter: 1(sum)/2(max)/3(min): ";
	cin>>l;
	

	if(l==1){
		int y=sum(a,b);		// calls sum
		cout<<"Sum of the numbers is: ";
		cout<<y<<endl;
	}

	else if (l==2){
		cout<<"Maximum of two numbers is: ";
		cout<<max(a,b);		// calls max
		cout<<endl;
	}

	else if(l==3){
		cout<<"Minimum of two numbers is: ";
		cout<<min(a,b);		// calls max
		cout<<endl;
	}
	else {
		cout << "command invalid"<<endl;
	}
	
	return 0;
}

