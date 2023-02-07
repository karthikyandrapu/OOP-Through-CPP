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
class derived:public base
{
	public:
	int b=20;
	void derivedA()
	{
	cout<<"Derived Class Method\n";
	}
};
int main()
{
	derived obj;
	cout<<"Values of a and b are:"<<endl;
	cout<<obj.a<<"\t"<<obj.b<<endl;
	obj.baseA();
	obj.derivedA();
}
