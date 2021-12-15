/*
PROBLEM STATEMENT
You have a given a Integer value print "zero" if value 0,if value is less than zero "negative" else "Positive"
if absolute value of is less than 1 then add "small" to output else add "large" to the output

*/




#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int f;
	cin >> f;
	if(f==0)
	{
		cout << "Zero";
	}
	else if(f<0)
	{
		cout << "Negative ";
	}
	else if(f>0)
		cout << "Positive ";
	if(abs(f)<1)
		cout << "small";
	else if(abs(f)>1000000)
		cout <<"large";
}
