/*
PROBLEM STATEMENT:
Write a program in C++ to find the intersection of two arrays
Input:
A[] = {1,2,3,4,5}
B[] = {2,3,6}


*/

#include<iostream>
using namespace std;
int main()
{
	int n=5,m=4;
	int a[n]={1,2,3,4,5};
	int b[m]={1,2,6,4};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				cout << a[i] << " ";
				break;
			}
		}
	}
	
	
	return 0;
}
