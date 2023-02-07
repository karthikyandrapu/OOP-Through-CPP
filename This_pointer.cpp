#include<iostream>
using namespace std;
class this_pointer
{
	public:
		int a,b;
		void gets(int a, int b)
		{
			this->a=a;
			this->b=b;
			cout<<"Values assigned using this pointer";
		}
		void display()
		{
			cout<<"Values of a and b are:"<<endl;
			cout<<a<<"\t"<<b<<endl;
		}
};
int main()
{
	this_pointer obj;
	obj.display();
	obj.gets(5,6);
	obj.display();
}
