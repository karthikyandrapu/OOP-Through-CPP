#include <iostream>
using namespace std;
template<class t1>
void sort(t1 a[],int n)
{
    for(int i=0; i<n; i++)
    {
    	for (int j=0; j<n; j++)
    	{
    		if(a[j+1]<a[j])
    		swap(a[j+1],a[j]);
		}
	}
}
int main() {
	int a[5]={2,1,6,3,5};
	sort<int>(a,5);
	cout<<"Array is:";
	for(int i=1; i<=5; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	float b[5]={8.0,1.2,2.4,1.3,3.2};
	sort<float>(b,5);
	cout<<"Array is:";
	for(int i=1; i<=5; i++)
	{
		cout<<b[i]<<" ";
	}
}
