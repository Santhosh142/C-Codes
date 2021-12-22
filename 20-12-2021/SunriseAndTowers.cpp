/*
//Problem 2--------->
You are given the heights of few towers which lie adjacent to each other. 
Sunlight starts from left of the towers. If there is a tower of certain Height, 
all the towers to the right side of it having lesser heights cannot see the sun . 
The task is to find the total number of such towers that receive sunlight.

Input: First Line of input contains an integer T denoting the number of test cases. 
Then T test cases follow. Each test case consists of two lines. First line of each 
test case contains an integer N denoting the number of towers. Second line contains 
N space separated integers H1, H2,...HN denoting heights of towers.
Output: Corresponding to each test case, print the desired output in a new line

Input:
3 
6 
6 2 8 4 11 13
5 
2 5 1 8 3
7
3 4 1 0 6 2 3
Output:
4
3
3


*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin >> n;
		int ar[n];
		for(int i=0;i<n;i++)
		{
			cin >> ar[i];
		}
		
		int count =1, max_height=ar[0];
		for(int i=1;i<n;i++)
		{
			if(ar[i]>max_height)
			{
				count++;
				max_height=ar[i];
			}
		}
		cout << count << endl;
	}
	return 0;
}
















