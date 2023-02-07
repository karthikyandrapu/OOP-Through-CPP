#include<iostream>
using namespace std;
class constructor
{
public:
int a,b;
	constructor()
	{
	    cout<<"Default Constructor\n";
	}	
	constructor(int x, int y)
	{
		a=x;
		b=y;
		cout<<"Parameterised Constuctor:\n";
		cout<<"a+b="<<a+b<<endl;
	}
	constructor(constructor &old)
	{
		a=old.a;
	    b=old.b;
		cout<<"Copy Constuctor:\n";
		cout<<"Values of a and b are:"<<a<<'\t'<<b;
	}x
};
int main()
{
	constructor obj;
	constructor obj2(3,4);
	constructor obj3=obj2;	
}
