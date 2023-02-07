#include<iostream>
using namespace std;
class base
{
	public:
	void baseA()
	{
	cout<<"Base Class Method\n";	
	}	
};
class derived1:virtual public base
{
	public:
	void derivedA()
	{
	cout<<"Derived Class 1 Method\n";
	}
};
class derived2:virtual public base
{
	public:
	void derivedB()
	{
	cout<<"Derived Class 2 Method\n";
	}
};
class subderived:public derived1, public derived2
{
	public:
	void subderivedA()
	{
	cout<<"Sub Derived Class Method\n";
	}
};
int main()
{
	subderived obj;
	obj.baseA();
	obj.derivedA();
	obj.derivedB();
	obj.subderivedA();
}
