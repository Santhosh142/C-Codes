/*
// Problem 4 ------------>

The problem is to count all the possible paths from top left 
to bottom right of a MxN matrix with the constraints that from 
each cell you can either move to right or down.
Input Format: 
First line of the input contains an integers row and col. .
Output Format:
Number of ways possible from top left to reach bottom right
Test Cases:  

INPUT
2 2
OUTPUT
2

INPUT
4 4
OUTPUT
20


*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int ans[n][m];
	
	for(int i=0;i<n;i++)
	ans[i][0]=1;
	
	for(int j=0;j<m;j++)
	ans[0][j]=1;
	
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			ans[i][j]=ans[i-1][j]+ans[i][j-1];
		}
	}
	
	cout << ans[n-1][m-1];
	
	
	return 0;
}














