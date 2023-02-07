#include<iostream>
using namespace std;
class pointer_to_class
{
	public:
		int a=10,b=20;
		void gets(int x, int y)
		{
			a=x;
			b=y;
			cout<<"This function is accessed using pointer to class\n";
			cout<<"Values assigned to a and b are:\n";
			cout<<a<<"\t"<<b<<endl;
		}
};
int main()
{
	pointer_to_class obj;
	pointer_to_class *ptr;
	ptr=&obj;
	cout<<"Initial Values of a and b are:\n";
	cout<<ptr->a<<"\t"<<ptr->b<<endl;
	ptr->gets(5,6);
}
