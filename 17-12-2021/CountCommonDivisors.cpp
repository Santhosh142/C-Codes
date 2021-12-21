/*
PROBLEM STATEMENT:
Littele Robert likes mathematics. Today his teacher has given him two integers and
asked to find out how many integers can divide both the numbers. Would you like to help him i completing his school assignment?
Input :
There is two integers a and b as input to the program
Output:
Print the number of common factor of a and b. Both the input value should be in a range of 1 to 10 ^ 12.

Example:
Inpout:
10 15
Output : 2;
Explaination : 
The common factors of 10 and 15 are 1 and 5 . So the answer will be 2.


*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
//	int a,b,c;
//	cin >> a >> b;
//	c=max(a,b);
//	int count =0;
//	for(int i=1;i<=c/2;i++)
//	{
//		if(a%i==0 and b%i==0)
//		{
//			cout << i << " ";
//			count++;
//		}	
//	}
//	cout << endl<<count<< endl;
//	
//	cout << "gcd of a and b is " <<__gcd(a,b);
//	
//	//to find the gcd of two numbers there is default function in c++ are __gcd(a,b);



	//ANOTHER APPROACH
	long long int n,m;
	cin>>n>>m;
 
	long long int g=__gcd(n,m);
 
	long long int cnt=0;
	for(long long int i=1;i<=sqrt(g);i++)
	{
		if(g%i==0)
		{
			long long int x=g/i;
 
			if(x!=i)
			cnt+=2;
			else
			cnt+=1;
 
		}
	}
 
	cout<<cnt;
 
 
 
	return 0;
	
	return 0;
}
















