#include<iostream>
using namespace std;
template <class t1, class t2>
float addition(t1 x, t2 y)
{
	return x+y;
}
int main()
{
	cout<<addition(41,45)<<endl;
	cout<<addition(10.3,21.2)<<endl;
	cout<<addition(9.6,92)<<endl;
	cout<<addition(65,89.1)<<endl;
}

