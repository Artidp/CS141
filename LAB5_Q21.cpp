#include<iostream>		//library
#include<string>

using namespace std;

int main (){

	cout<<"Welcome to Keshav's Programming"<<endl;
	cout<<"This programme calculates electricity bill."<<endl; // intro

	int x;  //declaration

	cout<<"Enter your bill units: "<<endl;
	cin>>x;			//takes input
	
		
	if (x>0){		//checks if its possible
		
	
		if (x<=50){		//<50 units
			float a = x*0.5;
			cout<<"Your bill is of "<<a*1.2<< "Rupees."<<endl;		//20%surcharge & bill amount
		} 		

		else if (x<=150){		//<150 units
			float b = 25 + (x-50)*0.75;
			cout<<"Your bill is of "<<b*1.2<< "Rupees."<<endl;		//20%surcharge & bill amount
		} 

		else if (x<=250){		//<250 units
			float c = 100+ (x-150)*1.2;
			cout<<"Your bill is of "<<c*1.2<< "Rupees."<<endl;		//20%surcharge & bill amount
		} 

		else {		//>250 units
			float d = 220+ (x-250)*1.5;
			cout<<"Your bill is of "<<d*1.2<< "Rupees."<<endl;		//20%surcharge & bill amount
		} 
	}
 	else {		//if its not unit of energy
		cout<<"Energy unit is always an integer."<<endl;
	}
	return 0;
 
	
}
	

