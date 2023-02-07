#include <iostream>
using namespace std;
class test
{

public:
	float area;
	test()
	{
		area = 0;
		cout<<"Area is:"<<area<<endl;
	}
	test(int a, int b)
	{
		area = a * b;
		cout<<"Area is:"<<area<<endl;
	}
};

int main()
{
	test o;
	test o2( 10, 20);
}
