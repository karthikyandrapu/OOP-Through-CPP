#include<iostream>
using namespace std;
class base1
{
	public:
	int a=10;
	void baseA()
	{
	cout<<"Base1 Class Method\n";	
	}	
};

class base2
{
	public:
	int b=20;
	void baseB()
	{
	cout<<"Base2 Class Method\n";	
	}	
};

class derived:public base1
{
	public:
	int c=30;
	void derivedA()
	{
	cout<<"Derived Class Method\n";
	}
};

class subderived:public derived, public base2
{
	public:
	int d=40;
	void subderivedA()
	{
	cout<<"Sub Derived Class Method\n";
	}
};
int main()
{
	subderived obj;
	cout<<"Values of a,b,c and d are:"<<endl;
	cout<<obj.a<<"\t"<<obj.b<<"\t"<<obj.c<<"\t"<<obj.d<<endl;
	obj.baseA();
	obj.baseB();
	obj.derivedA();
	obj.subderivedA();
}
