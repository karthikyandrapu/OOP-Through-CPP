#include<iostream>
using namespace std;
class base1
{
	public:
	int a=10;
	void baseA()
	{
	cout<<"Base 1 Class Method\n";	
	}	
};

class base2
{
	public:
	int b=20;
	void baseB()
	{
	cout<<"Base 2 Class Method\n";	
	}	
};

class derived:public base1, public base2
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
	cout<<"Values of a,b and c are:"<<endl;
	cout<<obj.a<<"\t"<<obj.b<<"\t"<<obj.c<<endl;
	obj.baseA();
	obj.baseB();
	obj.derivedA();
}
