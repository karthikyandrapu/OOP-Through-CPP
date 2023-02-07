#include<iostream>
using namespace std;
class base
{
	public:
	int a=10;
	void baseA()
	{
	cout<<"Base Class Method\n";	
	}	
};

class intermediate:public base
{
	public:
	int b=20;
	void intermediateA()
	{
	cout<<"Intermediate Class Method\n";	
	}	
};

class derived:public intermediate
{
	public:
	int c=30;
	void derivedA()
	{
	cout<<"Derived Class Method\n";
	}
};
int main()
{
	derived obj;
	cout<<"Values of a, b and c are:"<<endl;
	cout<<obj.a<<"\t"<<obj.b<<"\t"<<obj.c<<endl;
	obj.baseA();
	obj.intermediateA();
	obj.derivedA();
}
