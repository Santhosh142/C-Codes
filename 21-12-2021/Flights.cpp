/*
PROBLEM STATEMENT:
There are three planes A,B, and C

Plane A will takeoff on every pth day i.e p,2p,3p and so on.
Plane B will takeoff on every qth day and 
Plane C will takeoff on every rth day.

There is only one runway and takeoff timing is same for each of the three planes on each day. Now
her task is to find out the maximum number of flights that will successfully takeoff in the period of N days

Note : If there is collision between the flights no flight will take off on that day

Input Format:
The first line of the input contains a single integer T, the numbe of test cases.

Then T lines follow each containing four space separated integers N,p,q and r as denoted in the statement.

Output:
For each test case print a single integer representing the maximum number of flights that 
will successfully takeoff in the period of N days



*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int p,q,r;
	cin>>p>>q>>r;
	
	int A=(n/p);
	int B=(n/q);
	int C=(n/r);
	
	int lcmpq = (p*q)/(__gcd(p,q));
	int lcmqr = (q*r)/(__gcd(q,r));
	int lcmpr = (p*r)/(__gcd(p,r));
	
	int AB=(n/lcmpq);
	int BC=(n/lcmqr);
	int CA=(n/lcmpr);
	
	int lcmpqr = (r*lcmpq)/(__gcd(r,lcmpq));
	
	int ABC = (n/lcmpqr);
	
	int ans= A + B + C - 2*AB - 2*BC - 2 *CA + 3*ABC;
	
	cout<<ans;
	
	return 0;
}
















