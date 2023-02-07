#include<iostream>
using namespace std;
class base
{
	public:
	int a=10,b=20;
	void baseA()
	{
	cout<<"Base Class Method\n";	
	}	
};

class derived1:public base
{
	public:
	int c=30;
	void derivedA()
	{
	cout<<"Derived Class 1 Method\n";
	}
};

class derived2:public base
{
	public:
	int d=40;
	void derivedB()
	{
	cout<<"Derived Class 2 Method\n";
	}
};
int main()
{
	derived1 obj1;
	derived2 obj2;
	cout<<"Values of a,b,c and d are:"<<endl;
	cout<<obj1.a<<"\t"<<obj2.b<<"\t"<<obj1.c<<"\t"<<obj2.d<<endl;
	obj1.baseA();//using derived 1
	obj2.baseA();//using derived 2
	obj1.derivedA();
	obj2.derivedB();
}
