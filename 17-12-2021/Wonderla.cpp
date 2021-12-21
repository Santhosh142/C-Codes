/*
PROBLEM STATEMENT:
Aakash loves to go to WONDERLA an amusement park.
They are offering students who can code well with some discount. Our task is to reduce the
cost of the ticket as low as possible.
They will give some k turns to remove the cost of one ticket where the cost of tickets are combined and given as string.
Input Format:
The first line contains a string, Tickets, denoting the given cost of each ticket . The next line contains an 
integer,K,denoting the number of tickets that is to be removed.

Constraints
1<=number of tickets <=10^5
1<=k<=number of tickets


Sample Input:
300166
2
Sample Output:
3001

*/

#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string n;
	int k;
	cin >> n;
	cin >> k;
	string comp=n;
	
	sort(n.begin(),n.end());
	
	n=n.substr(0,n.length()-k);
	
	string res;
	for(int i=0;i<comp.length();i++)
	{
	    for(int j=0;j<n.length();j++)
	    {
	        if(comp[i]==n[j])
	        {
	            res=res+comp[i];
	            break;
	        }
	    }
	}
	cout << res;
	return 0;
}















