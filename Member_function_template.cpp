#include<iostream>
using namespace std;
class addition
{
	public:
	template <class t1, class t2>
	void sum(t1 x, t2 y)
	{
		cout<<"Addition is:"<<x+y<<endl;
	}
};
int main()
{
	addition obj;
	obj.sum(41,45);
	obj.sum(10.3,21.2);
	obj.sum(9.6,92);
	obj.sum(65,89.1);
}
