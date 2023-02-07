#include<iostream>
using namespace std;
#define pi 3.14
class overload
{
	public:
	void area(float c, float d)
	{
		cout<<"Area of Rectangle is:"<<c*d<<endl;
	}
	
	void area(float r)
	{
		cout<<"Area of Cricle is:"<<pi*r*r<<endl;
	}
	
	void area(float l,float b,float h)
	{
		cout<<"Area of Triangle is:"<<l*b*h<<endl; 
	}
};
int main()
{
	float c,d,r,l,b,h;
	overload obj;
	cout<<"Enter sides of Rectangle:";
	cin>>c>>d;
	obj.area(c,d);
	cout<<"Enter radius of cricle:";
	cin>>r;
	obj.area(r);
	cout<<"Enter length, breadth, height of triangle:";
	cin>>l>>b>>h;
	obj.area(l,b,h);
}
