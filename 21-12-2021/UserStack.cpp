/*
PROBLEM STATEMENT:
Build your own stack using array or vector. Input will consist of following
1-> Push 'a' into stack
2-> Pop 1 element from stack if stack is non-empty
3-> Print the top of stack
4->Check if stack is empty or not(0 if empty and 1 if non-empty)



*/
#include<bits/stdc++.h>
using namespace std;
int n;
int ind=0;

void push(int ar[],int ele)
{
	ar[ind++]=ele;

}

int pop(int ar[])
{
	int ele = ar[--ind];
	
	return ele;
}

int top(int ar[])
{
	return ar[ind-1];
}

void isEmpty()
{
	if(ind==0)
	cout << "stack is empty";
	else
	cout << "stack is not empty";
	
}
void printStack(int ar[])
{
	for(int i=ind-1;i>=0;i--)
	cout << ar[i] << " ";
	cout << endl;
}
int main()
{
	int ele;
	cin >> n;
	int ar[n];
	
	
	int k;
	do
	{
		cout << "1.push " << endl;
		cout << "2.pop " << endl;
		cout << "3.top " << endl;
		cout << "4.isEmpty " << endl;
		cout << "5.printStack " << endl;	
		cin >> k;
		switch(k)
		{
			case 1:
				int x;
				cin >> x;
				push(ar,x);
				break;
			case 2:
				ele = pop(ar);
				cout <<"popped item is " <<  ele << endl;
				break;
			case 3:
				ele = top(ar);
				cout << "top element is " << ele << endl;
				break;
			case 4:
				isEmpty();
				break;
			case 5:
				printStack(ar);
				break;
			
		}
	}
	while(k<=5);
	
	
	return 0;
}

