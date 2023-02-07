#include<iostream>
using namespace std;
int str_len(char *str1)
{
	int l=0;
	while(*str1!='\0')
	{
		l++;
		str1++;
	}
	return l;
}
void str_cpy(char *str3, char *str2)
{
	while(*str2)
	{
		*str3=*str2;
		str2++;
		str3++;
	}
	*str3='\0';
}
void str_cat(char *str1,char *str2)
{
	while(*str1!='\0')
	{
	*str1++;
	}
	while(*str2!='\0')
	{
		*str1=*str2;
		str1++;
		str2++;
	}
	*str1='\0';
}
int main()
{
	int len;
	char str1[30]="Hello World! ";
	len=str_len(str1);
	cout<<"Length of String1 is:"<<len<<endl;
	char str2[30]="This is SRKR College";
	char str3[30];
	str_cpy(str3,str2);
	cout<<"Copied String is:\n"<<str3<<endl;
	str_cat(str1,str2);
	cout<<"Concatenated String is:\n"<<str1<<endl;
}
