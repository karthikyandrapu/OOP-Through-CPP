#include<iostream>
using namespace std;
template <class t1, class t2>
class addition
{
	public:
	t1 a;
	t2 b;
	void get()
	{
		cout<<"Enter a and b values:";
		cin>>a>>b;
	}
	float display()
	{
		return a+b;
	}
};
int main()
{
	addition <float,float> obj;
	obj.get();
	cout<<obj.display()<<endl;
}
