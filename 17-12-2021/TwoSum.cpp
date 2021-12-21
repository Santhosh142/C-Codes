/*
PROBLEM STATEMENT:
Given an unsorted array, find a pair with the given sum in it.

Input:
nums=[8,7,2,5,3,1]
target=10

Output:
pair found(8,2)


*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> v;
	int n,target;
	cin >> n;
	cin >> target;
	for(int i=0;i<n;i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(v[i]+v[j]==target)
			{
				cout << "Pair found ("<<v[i]<<","<<v[j]<<")"<< endl;
				break;
			}
			
		}
	}
	
	
	return 0;
}














