#include<iostream>
using namespace std;
template < class t1, class t2, class t3>
class demo
{
	public:
		t1 a;
		t2 b;
		t3 c;
		void get()
		{
			cout<<"Enter a,b,c:\n";
			cin>>a>>b>>c;
		}
		double sum()
		{
			cout<<"Sum is:"<<a+b+c;
		}
};
int main()
{
	demo <int,float,double> obj;
	obj.get();
	obj.sum(); 
}
