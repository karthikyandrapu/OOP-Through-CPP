#include<iostream>
#include<cstdlib>
using namespace std;
class friend_function
{
	private:
	int a,b;
	public:
	void add(int x, int y)
	{
		a=x;
		b=y;
		cout<<"Addition is:"<<a+b<<endl;
	}
	friend void sub(friend_function);
};
void sub(friend_function obj)
{
	int c;
	c=abs(obj.a-obj.b);
	cout<<"Subtraction is:"<<c;
}
int main()
{
	friend_function obj;
	obj.add(10,20);
	sub(obj);
}
