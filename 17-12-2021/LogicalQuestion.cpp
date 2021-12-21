/*
PROBLEM STATEMENT:

You are given a list of numbers from 1 to 9 in which each number is separated by ','. Your job is to find the sum of two 
numbers. These two numbers are needed to be calculated as per following rules

1.First number should be calculated as:
Add all numbers that do not come between 4 and 7 in the input.
2.Second number should be calculated as:
Append all the numbers to each other that comes between 4 and 7 (inclusive).
Find the sum of both calculated numbers.
Note: 4 always comes before 7 in input

Sample Input          Sample Output
1,3,4,6,8,7,2,9       4702


*/

#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n;
	cin >> n;
	int ar[n];
	int start=0,end=0;
	for(int i=0;i<n;i++)
	cin >> ar[i];
	for(int i=0;i<n;i++)
	{
		if(ar[i]==4)
		start=i;
		if(ar[i]==7)
		{
			start=end;
			break;
		}	
	}
	int sum =0;
	for(int i=0;i<n;i++)
	{
		if(i<start || i>end)
		sum+=ar[i];
	}
	string tmp;
	for(int i=start;i<=end;i++)
	{
		string a = to_string(ar[i]);
		tmp+=a;
	}
	int temp = stoi(tmp);
	cout << temp+sum;
	return 0;
}




