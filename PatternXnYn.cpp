/*
PROBLEM STATEMENT:
Given a string s of x and y.You need to verity whether the string follows the pattern xnyn.
That is the string is valid only if equal number of ys follow equal number of xs.
As an example: xxyyxxyy is valid. xy is valid. xxyyx is invalid. xxxyyyxxyyxy is valid
 
Input:
s=xxyy
output:
1
 
Input:
xyx
Output
0;

*/
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	cin >> str;
	int len = str.length();
	int flag=1;
	int count_x=0,count_y=0,ind=0;
	while(ind < len)
	{
		while(ind <len && str[ind]=='x')
		{
			count_x++;
			ind++;
		}
		while(ind < len && str[ind]=='y')
		{
			count_y++;
			ind++;
		}
		if(count_x!=count_y)
		{
			flag=0;
			break;
		}
		else
		{
			count_x=0;
			count_y=0;
		}
	}
	cout << flag << endl;
	return 0;
}














