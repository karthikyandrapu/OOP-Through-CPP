#include <iostream>
using namespace std;

class test {
	int* p;

public:
	test()
	{
		p = new int[3]{1,2,3};
		for (int i = 0; i < 3; i++) {
			cout << p[i] << " ";
		}
	}
};
int main()
{
	test obj;
}

