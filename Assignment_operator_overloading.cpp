#include<iostream>
using namespace std;
class asssignment
{
	int a;
	public:
	asssignment(int x)
	{
		a=x;
	}
	void show()
	{
		cout<<a;
	}
};
int main()
{
	asssignment obj1(8),obj2(10);
	cout<<"\nBefore Assignment\n";
	cout<<"\nA=";
	obj1.show();
	cout<<"\tB=";
	obj2.show();
	obj1=obj2;
	cout<<"\nAfter Assignment\n";
	cout<<"\nA=";
	obj1.show();
	cout<<"\tB=";
	obj2.show();
}
