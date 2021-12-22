/*
Given an integer array and Q queries.in each query you are given L and R(0-based). For
each query print the sum of elements of array from Lth index to Rth index.

You can easily do this question with time complexity of O(Q*sizeof(array)). But try to solve the question in linear time 
complexity

Example:
5
1 2 3 4 5
3
0 3
2 4
1 2


Output:
10 12 5

*/
#include <bits/stdc++.h>
using namespace std;

int getsum(int ar[], int l,int r)
{
	int sum =0;
	for(int i=l;i<=r;i++)
	sum+=ar[i];
	
	return sum;
}

int main()
{
	int n;
	cin >>n;
	int ar[n];
	for(int i=0;i<n;i++)
	cin >> ar[i];

/*
	//O(N^2) APPROACH
	int q;
	cin >> q;
	for(int i=0;i<q;i++)
	{
		int l,r;
		cin >> l >> r;
		cout << getsum(ar,l,r) << endl;
	}
	
*/	



	//https://ideone.com/eCDED7
	//O(N)
	int prefix[n];
	prefix[0]=ar[0];
	for(int i=1;i<n;i++)
	{
		prefix[i]=prefix[i-1]+ar[i];
	}
	
	int q;
	cin >> q;
	for(int i=0;i<q;i++)
	{
		int l,r;
		cin >> l >> r;
		if(l==0)
		cout << prefix[r] << endl;
		else
		cout << prefix[r]-prefix[l-1] << endl;
	}
	return 0;
}













