/*
PROBLEM STATEMENT:
Consider a permutation of numbers from 1 to n written on a paper. let's denote the product of its element as 'prod' and te sum of its element
as 'sum' .Given a positive integer 'N' your task is to determine whether 'prod' is divisible by 'sum' or not

Input Format:


*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	for(int i=0;i<test;i++)
	{
		int n;
		cin >> n;
		int prod=1,sum=0;
		for(int i=1;i<n;i++)
		{
			prod*=i;
			sum+=i;
		}
		if(prod%sum==0)
		cout << "YEAH"<<endl;
		else
		cout << "NAH"<<endl;
	}
	
	return 0;
}




