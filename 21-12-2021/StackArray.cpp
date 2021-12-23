/*

PROBLEM STATEMENT:
Build your own stack using array or vector. Input will consist of following
1-> Push 'a' into stack
2-> Pop 1 element from stack if stack is non-empty
3-> Print the top of stack
4->Check if stack is empty or not(0 if empty and 1 if non-empty)
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int MAXLIMIT;
	cin>>MAXLIMIT;
	
	int arr[MAXLIMIT];
	
	int q;
	cin>>q;
	
	int top=-1;
	
	while(q>0)
	{
		int type;
		cin>>type;
		
		// 1 a -> Push ‘a’ into stack
		if(type==1)
		{
			int a;
			cin>>a;
			top++;
			if(top<MAXLIMIT)
			arr[top]=a;
			else{
			cout<<"STACK IS FULL\n";
			top--;
			}
			
		}
		
		// 2 -> Pop 1 element from stack if stack is non-empty

		if(type==2)
		{
			if(top==-1)
			cout<<"STACK IS EMPTY\n";
			else
			top--;
		}
		
		// 3 -> Print the top of stack

		if(type==3)
		{
			if(top==-1)
			cout<<"STACK IS EMPTY\n";
			else
			cout<<arr[top]<<endl;
		}
		
		// 4 -> Check if stack is empty or not (0 if empty and 1 if non-empty)

		if(type==4)
		{
			if(top==-1)
			cout<<"STACK IS EMPTY\n";
			else
			cout<<"STACK IS NOT EMPTY\n";
		}
		
		
		q--;
	}
	
	return 0;
}
