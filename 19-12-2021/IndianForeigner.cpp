/*
// PROBLEM 1 -------->

A seminar of Artificial Intelligence is going on, and the number of participants from Foreign is A, 
while from India is B. All the participants would be 
staying in the same hotel. In each room equal number of 
participants have to stay( can be 1 in a room). 
Also foreign and Indian cannot stay in the same room. 
Find the minimum number of rooms required, if in each room 
the same number of participants are to be seated. 

Input: First line consists of T test cases. Only line of every test case consists of 2 integers A and B. 

Output: Print the value of no of rooms required. 

Input: 
5 
60 84 
50 30
8  11
6  10 
1  2

Output:
12 8 19 8 3


*/
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	int i=1;
	int gcd=1;
	while(i<=a and i<=b)
	{
		if(a%i==0 and b%i==0)
		gcd=i;
		
		i++;
	}
	return gcd;
}
int main()
{
	int a,b,gc,t;
	cin >> t;
	vector<int> v;
	for(int i=0;i<t;i++)
	{
		cin >> a >> b;
		gc = gcd(a,b);
		int ans = (a+b)/gc;
		v.push_back(ans);
	}
	for(auto u : v)
	cout << u << "\t";
	
	return 0;
}




















