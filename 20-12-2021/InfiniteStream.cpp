/*
PROBLEM STATEMENT:
Return largest element in a stream 
Given an infinite stream of integers, return the element representing the largest element in the stream
we are given an infinite stream instead of a fixed length array

Input:
infinite stream of integers
4
5
12
8
9
10
20
42

Outpu:
4
5
12
12
12
12
20
42



*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	priority_queue<int> pq;
	
	while(cin >> x)
	{
		pq.push(x);
		cout << pq.top() << endl;
	}
}















