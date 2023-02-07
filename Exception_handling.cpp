#include<iostream>
using namespace std;
int main()
{
	float a,b;
	cout<<"Enter a and b values:";
	cin>>a>>b;
	try
	{
		if(b==0)
		{
			throw 0;
		}
		cout<<"Division is:"<<a/b<<endl;
	}
	catch(int x)
	{
		cout<<"Zero Division is not possbile\n";
	}
}
