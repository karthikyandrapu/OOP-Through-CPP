#include<iostream>
using namespace std;
class binary_operator
{
	public:
		int a,b;
		void get()
		{
			cout<<"Enter a and b values:";
			cin>>a>>b;
		}
		void display()
		{
			cout<<"Values of a and b are:\n"<<a<<"\t"<<b<<endl;
		}
		friend binary_operator operator +(binary_operator obj1,binary_operator obj2);
};
binary_operator operator +(binary_operator obj1,binary_operator obj2)
{
	binary_operator res;
	res.a=obj1.a+obj2.a;
	res.b=obj1.b+obj2.b;
	return res;
}
int main()
{
	binary_operator obj1,obj2,obj3;
	obj1.get();
	obj2.get();
	obj3=obj1+obj2;
	obj3.display();
}
