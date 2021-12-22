/*
// Problem 3 ------->

Write a C++ program to read elements in a matrix and 
interchange elements of primary(major) diagonal with secondary(minor) diagonal. 
Input Format: 
Enter the elements of the matrix of size[3, 3]
Output Format:
Print the matrix after interchanging the elements of major diagonal with secondary diagonal.

INPUT
1 2 3
4 5 6
7 8 9

OUTPUT
3 2 1
4 5 6 
9 8 7


*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;


	cin >>n;
	int ar[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> ar[i][j];
			
		}
	}
	cout << "Before changing the elements" << endl;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout << ar[i][j] << " " ;
		}
		cout << endl;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			swap(ar[i][j] ,ar[i][n-i-1]);
			
		}
	}
	cout << "After changing the elements" << endl;
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout << ar[i][j] << " " ;
		}
		cout << endl;
	}
	
	
}












