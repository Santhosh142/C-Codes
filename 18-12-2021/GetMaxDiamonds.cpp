/*
PROBLEM STATEMENT:
There are N bags with diamonds in them
The i'th of these bags contains Ai diamonds

If you drop a bag with P diamonds , it changes to [p/2] diamonds, and you gain P diamonds where [p] is the greatest integer
less than p. Dropping a bag takes 1 minute.Find the maximum number of diamonds that you can take if you are given k minutes.

Example:
Input :
N=5
k=3
A[] ={2,1,7,4,2};

Output:
14

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;
	priority_queue<int> p;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		p.push(x);
	}
	int total = 0;
	for(int i=0;i<k;i++)
	{
		int max = p.top();
		total +=max;
		p.pop();
		p.push(max/2);
	}
	
	cout << total << endl;
	return 0;
}















