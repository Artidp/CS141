#include <iostream>

using namespace std;

class Box {
   public:
      double length;         // Length of a box
      double breadth;        // Breadth of a box
      double height;         // Height of a box

      // Member functions declaration
      double getPeri(void);
      double getArea(void);
      void setLength( double len );
      void setBreadth( double bre );

};

// Member functions definitions
double Box::getPeri(void) {
   return 2*(length + breadth);
}

double Box::getArea(void) {
   return length * breadth;
}

void Box::setLength( double len ) {
   length = len;
}
void Box::setBreadth( double bre ) {
   breadth = bre;
}

// Main function for the program
int main() {
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   double peri1= 0.0, peri2= 0.0;     // Store the perimeter of a box here
   double area1= 0.0;     // Store the volume of a box
   double l1,l2,b1,b2;      // user input dimensions
    double area2=0.0;
   cout<<"Enter length and breadth of 1st rectangle"<<endl;
   cin>>l1>>b1;

   cout<<"Enter length and breadth of 2nd rectangle"<<endl;
   cin>>l2>>b2;

   cout<<endl;

   // box 1 specification
   Box1.setLength(l1);
   Box1.setBreadth(b1);

   // box 2 specification
   Box2.setLength(l2);
   Box2.setBreadth(b2);

   // perimeter of box 1
   peri1 = Box1.getPeri();
   cout << "Perimeter of Box1 : " << peri1 <<endl;

    // perimeter of box 1
   peri2 = Box2.getPeri();
   cout << "Perimeter of Box2 : " << peri2 <<endl;

   if(peri1>peri2){
        cout<<"Perimeter of 1st is greater than 2nd."<<endl;
   }
   else if(peri1<peri2){
        cout<<"Perimeter of 2nd is greater than 1st."<<endl;
    }
    else
    cout<<"Both has equal perimeter"<<endl;


   cout<<endl;

   // area of box 1
   area1 = Box1.getArea();
   cout << "Area of Box1 : " << area1 <<endl;

   // area of box 2
   area2 = Box2.getArea();
   cout << "Area of Box2 : " << area2 <<endl;

   if(area1>area2){
        cout<<"Area of 1st is greater than 2nd."<<endl;
   }
   else if(peri1<peri2){
        cout<<"Area of 2nd is greater than 1st."<<endl;
    }
    else
    cout<<"Both has equal area"<<endl;



   return 0;
}
