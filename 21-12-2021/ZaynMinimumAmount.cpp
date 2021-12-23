/*
PROBLEM STATEMENT:
Zayn purchased an array A having N integer values. After playing it for a while, he was bored of it and decided
to update value of its element. In one second he can increase value of each array element by 1. He wants each 
array element's value to become greater than or equal to K. please help zayn to find out the minimum amount of
time it will take, for him to do so.

Input:
First line consists of a single integer, T denoting the number of test cases.
First line of each test case consists of two space separated integers denoting N and K
Second line of each test case consists of N space separated integers denoting the array A

Outpt:
For each test case , print the minimum time in which all array elements will become greater than or equal to K 
print a new line after each test case.



Input:
1
4 5
1 2 4 3

Output:
4


*/
#include<bits/stdc++.h>
using namespace std;

int firstApproach(int ar[],int n,int k)
{
	sort(ar,ar+n);
	return k-ar[0];
}
int secondApproach(int ar[],int x,int k)
{
		int min=0;
		for(int i=0;i<x;i++)
		{
			if(ar[i]>=k)
			continue;
			else
			{
				if(min<k-ar[i])
				{
					min=k-ar[i];
				}
			}
			
		}
		return min;
}

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int x, k;
		cin >> x >> k;
		int ar[x];
		for(int i=0;i<x;i++)
		cin>> ar[i];
		
		int ans1 = firstApproach(ar,x,k);
		int ans2 = secondApproach(ar,x,k);
		
		cout << ans1 << endl;
		cout << ans2 << endl;
		
		
	}
	
	return 0;
}














