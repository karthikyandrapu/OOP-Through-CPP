#include<iostream>
#include<stdlib.h>
using namespace std;
#define max 10

class Stack
{
	public:
	int s[max],top=-1,ch,x
	int stackempty()
	{
		if (top==-1)
		return 1;
		else
		return 0;
	}
	int stackfull()
	{
		if(top==max-1)
		return 1;
		else
		return 0;
	}
	void push(int x)
	{
		if(stackfull())
		cout<<("Stack is Full");
		else
		{
			top++;
			s[top]=x;
		}
	}
	int pop()
	{
		if(stackempty())
		cout<<("Stack is Empty");
		else
		{
			x=s[top];
			top--;
		}
		return x;
	}
	void display()
	{
		int i;
		if(top==-1)
		{
			cout<<"Stack Empty\n";
		}
		else
		{
			cout<<"Contents of the Satck are:<<\n";
			for(i=0;i<top;i++)
			{
				cout<<s[i]<<"\n";
			}
			cout<<endl;
		}
	}
};

void main()
{
	stack op;
	while(1)
	{
		cout<<"1.PUSH 2.POP 3.DISPLAY 4.EXIT";
		cout<<"Enter Choice:"
		cin>>op.ch;
		switch(op.ch)
		{
			case 1:
				cout<<"Enter Element:"
				cin>>op.x;
				op.push(op.x);
				break;
			case 2:
				op.x=op.pop()
				cout<<"Popped Element is"<<op.x;
				break;
			case 3:
				op.display();
				break;
			case 4:
				exit(0);
		}
	}
}
