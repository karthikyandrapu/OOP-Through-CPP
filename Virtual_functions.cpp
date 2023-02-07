#include<iostream>
using namespace std;
class base
{
	public:
	virtual void display()
	{
	cout<<"Base Display\n";	
	}
	virtual void show()
	{
	cout<<"Base Show\n";	
	}	
};
class derived:public base
{
	public:
	void display()
	{
	cout<<"Derived Display\n";	
	}
	void show()
	{
	cout<<"Derived Show\n";	
	}
};

int main()
{
	base obj;
	base *bptr;
	bptr=&obj;
	bptr->display();
	bptr->show();
	derived obj2;
	bptr=&obj2;
	bptr->display();
	bptr->show();
}
