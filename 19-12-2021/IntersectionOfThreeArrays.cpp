/*
// Problem 5 ----------->

Given three increasingly sorted arrays
A, B, C of sizes N1, N2, and N3 respectively, 
you need to print all common elements in these arrays. 

Input Format: 
First line contains 3 integer of size of an array i.e N1,N2,N3.
Second line contain N1 i.e is  no of integer array elements.
Third line contain N2 i.e is no of integer array elements.
Fourth line contain N3 i.e is no of integer array elements.

Output Format:
Print integer i.e  is all common elements in these arrays.

INPUT
4 4 5
1 2 3 4
1 2 30 40
1 2 60 70 80

OUTPUT
1 2



*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	map<int,int> m;
	
	int ara[a],arb[b],arc[c];
	
	for(int i=0;i<a;i++)
	{
		cin >> ara[i];
		m[ara[i]]=1;
	}
	
	
	for(int i=0;i<b;i++)
	{
		cin >> arb[i];
		
		if(m[arb[i]]==1)
		m[arb[i]]=2;
	}
	
	
	for(int i=0;i<c;i++)
	{
		cin >> arc[i];
		if(m[arc[i]]==2)
		{
			m[arc[i]]=3;
			cout << arc[i] << " ";
		}
	}
	
	
	
	
	
	
	return 0;
}























