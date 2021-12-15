/*
PROBLEM STATEMENT:
given a number find whether the number is prime or not

*/


#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int flag = 1;
	if(n==1)
	{
		cout << "Not Prime";
		return 0;
	}
		
	for(int i =2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag)
	cout << "Prime number";
	else
	cout << "Not Prime";
	return 0;
}
