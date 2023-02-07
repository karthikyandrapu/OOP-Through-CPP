#include <iostream>
using namespace std;
class Shape {
   public:
   	float l,b,b1,h;
      virtual int Area(float,float) = 0;
};
class Rectangle: public Shape {
   public:
      int Area(float length, float breadth)
	  {
	  	l=length;
	  	b=breadth;
        cout<<"Area of Rectangle:"<<l*b<<endl;
      }
};
class Triangle: public Shape {
   public:
      int Area(float base, float height)
	  {
	  	b1=base;
	  	h=height;
        cout<<"Area of Triangle:"<<(b1*h)/2<<endl;
      }
};
int main()
{
   Rectangle obj1;
   obj1.Area(5.3,7.2);
   Triangle obj2;
   obj2.Area(9.1,4.4); 
}
