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
		void operator ++()
		{   
		    ++a;
		    ++b;
			cout<<"\nAfter Increment\n";
			cout<<a<<"\t"<<b<<"\n";
		}
		void operator --(int)
		{
			a--;
			b--;
			cout<<"\nAfter Decrement\n";
			cout<<a<<"\t"<<b<<"\n";
		}
};
int main()
{
	unary_operator obj;
	obj.num(4,10);
	++obj;
	obj--;
}
