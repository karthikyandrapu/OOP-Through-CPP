#include<iostream>
using namespace std;
class unary_operator
{
	public:
		int a,b;
		num(int x, int y)
		{
			a=x;
			b=y;
			cout<<"Values of a and b are:\n"<<a<<"\t"<<b<<endl;
		}
		friend void operator ++(unary_operator obj );
		friend void operator --(unary_operator obj,int);
};
void operator ++(unary_operator obj )
{
	cout<<"\nAfter Increment\n";
	cout<<++obj.a<<"\t"<<++obj.b<<"\n";
}
void operator --(unary_operator obj,int)
{  
    cout<<"\nAfter Decrement\n";
	cout<<obj.a--<<"\t"<<obj.b--<<"\n";
}
int main()
{
	unary_operator obj;
	obj.num(4,10);
	++obj;
    obj--;
}
