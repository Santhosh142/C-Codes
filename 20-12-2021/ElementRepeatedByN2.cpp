/*
//PROBLEM 1 ----------->
Given an array A of N elements. 
Find element in an array A of size N is an element that appears more than N/2 times in the array.
Input Format: 
In first line enter the N i.e. is size of an array.
In second line enter the N no of elements.
Output Format:
Print the integer i.e. is an element that appears more than N/2 times in the array.
Test Cases: 

INPUT
9
3 3 5 2 5 5 2 5 5

OUTPUT
5


*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int ar[n];
	
	for(int i=0;i<n;i++)
	cin >> ar[i];
	
	map<int,int> m;
	for(int i=0;i<n;i++)
	{
		int a = m[ar[i]];
		a++;
		m[ar[i]]=a;
		if(a>=n/2)
		{
			cout << ar[i] << endl;
			break;
		}
	}
	
	
	
	return 0;
}
























