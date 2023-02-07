#include<iostream>
using namespace std;
class destructor
{
public:
int a;
	destructor(int x)
	{
	    cout<<"Costructor is called\n";
	    a=x;
	    cout<<"Value of a is:"<<a<<endl;
	}	
	~destructor()
	{
		cout<<"Destructor is called\n";
	}
};
int main()
{
	destructor obj(4);
}
