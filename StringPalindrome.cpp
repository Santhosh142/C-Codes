/*
PROBLEM STATEMENT:
Check if given string S is palindrome or not

Input :
Read string S
S=="abba"
Output:
1

Input:
S="abc"
outpout:
0
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	cin >> str;
	int len = str.length();
	
	int low = 0,flag=1;
	int high = len-1;
	
	while(low < high)
	{
		if(str[low]!=str[high])
		{
			flag=0;
			break;
		}
		low++;
		high--;
	}
	cout << flag;
	
	return 0;
}











