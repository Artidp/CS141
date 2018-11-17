#include <iostream>
using namespace std;


// ********************************************************************
//  Declaration of class Point
// ********************************************************************

// class Point represents a two-dimensional point
class Point
{
public:
  // default class constructor (with no arguments):
  Point();

  // class constructor that sets the coordinates x, y to the values xval,
  // yval:
  Point(int xval, int yval);

  // member function for moving a point by dx, dy:
  void Move(int dx, int dy);

  // member functions for getting values of x, y:
  int Get_X() const;
  int Get_Y() const;

  // member functions for setting x, y to xval, yval respectively
  void Set_X(int xval);
  void Set_Y(int yval);

//Lab 7 exercise 4.1. Add declaration of member function Print here:
	void Print();


// private data members x, y represent coordinates of the point:
private:
  int X;
  int Y;
};


// ********************************************************************
//  Methods for class Point
// ********************************************************************

// class constructor sets X, Y to zero when no values are specified:
Point::Point()
{
  X = 0;
  Y = 0;
}

// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval)
{
  X = xval;
  Y = yval;
}

// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy)
{
  X += dx;
  Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const
{
  return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
  return Y;
}

// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval)
{
  X = xval;
}

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
  Y = yval;
}


//Lab 7 exercise 4.1. Add definition of member function print:

void Point::Print(){
	cout<<"("<<X<<","<<Y<<")"<<endl;
}


// ********************************************************************
//  Declaration of class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE:

class Rectangle{
	Point P1,P2,P3,P4;
	double side1,side2;

public:
	Rectangle();
	void Set1(int x,int y);
	void Set4(int x,int y);
	void Set2(int x,int y);
	void Set3(int x,int y);

	void Output();

	double length();
	double breadth();
	double area();

};

// ********************************************************************
//  Methods for class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE:

Rectangle::Rectangle(){
	P1.Set_X(0);P1.Set_Y(0);
	P2.Set_X(1);P2.Set_Y(0);
	P3.Set_X(0);P3.Set_Y(1);
	P4.Set_X(1);P4.Set_Y(1);
}

void Rectangle::Set1(int x,int y){
	P1.Set_X(x);
	P1.Set_Y(y);
}

void Rectangle::Set4(int x,int y){
	P4.Set_X(x);
	P4.Set_Y(y);

}

void Rectangle::Set2(int x,int y){
	P2.Set_X(x);
	P2.Set_Y(y);
}

void Rectangle::Set3(int x,int y){
	P3.Set_X(x);
	P3.Set_Y(y);
}

void Rectangle::Output(){
	cout<<"First point of rectangle is :";
	P1.Print();
	cout<<"Second point of rectangle is :";
	P2.Print();
	cout<<"Third point of rectangle is :";
	P3.Print();
	cout<<"Fourth point of rectangle is :";
	P4.Print();
}

double Rectangle::length(){
    int a= P4.Get_X()-P1.Get_X();
    return a;
}
double Rectangle::breadth(){
    int b= P4.Get_Y()-P1.Get_Y();
    return b;
}

double Rectangle::area(){
    return length()*breadth();
}

// ********************************************************************
//  main() function for testing classes Point and Rectangle
// ********************************************************************



// Testing classes Point and Rectangle
int main()
{
// Declaring a point using default class constructor (x = y = 0):
  Point p1;
	cout<<endl;
  cout<< "The x value for p1 is " << p1.Get_X() << endl;
  cout<< "The y value for p1 is " << p1.Get_Y() << endl;

// Declaring a point with coordinates X = 2, Y = 3:
  Point p2(2, 3);
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;
	cout<<endl;

// Moving point p2 by (1, -1):
  p2.Move(1, -1);
  cout<< "After the move:" << endl;
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

//Lab 7 exercise 4.1. Test member function print on points p1, p2:
	cout<<endl;
	cout<<"The first coordinate is: ";
	p1.Print();

	cout<<"The first coordinate is: ";
	p2.Print();
	cout<<endl;

//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:

	Rectangle R1;
	int x1,y1,x4,y4;

	cout<<"Enter x and y cordinate of 1st (bottom left) point: ";
	cin>>x1>>y1;
	R1.Set1(x1,y1);


	cout<<"Enter x and y cordinate of 4th (top right) point: ";
	cin>>x4>>y4;
	R1.Set4(x4,y4);

	R1.Set2(x4,y1);
	R1.Set3(x1,y4);

	cout<<endl;

	R1.Output();

	cout<<endl;

    cout<<"The length of rectangle is: ";
	cout<<R1.length();
    cout<<endl;
    cout<<"The breadth of rectangle is: ";
	cout<<R1.breadth();
 	cout<<endl;

 	cout<<"The area of rectangle is: ";
 	cout<<R1.area();
 	cout<<endl;

  return 0;
}

//---------------------- point.cpp ------------------------------------//

