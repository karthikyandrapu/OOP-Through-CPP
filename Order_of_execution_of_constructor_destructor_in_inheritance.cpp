#include<iostream>
using namespace std;
class one
{
	public:
	one()
	{
	cout<<"Class 1 Constructor\n";
	}
	~one()
	{
	cout<<"Class 1 Destructor\n";
	}
};

class two: public one
{
	public:
	two()
	{
	cout<<"Class 2 Constructor\n";
	}
	~two()
	{
	cout<<"Class 2 Destructor\n";
	}
};

class three: public two
{
	public:
	three()
	{
	cout<<"Class 3 Constructor\n";
	}
	~three()
	{
	cout<<"Class 3 Destructor\n";
	}
};

int main()
{
	three obj;
}
