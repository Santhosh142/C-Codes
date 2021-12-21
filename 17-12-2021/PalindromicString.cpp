/*
You are provided with a string of numbers, check whether it is a palindrome or not.
if it is not a palindrome, then, reverse the substring add it to the original string and check again

you are required to repeat the process until it becomes palindrome. Find the length of palindromic string.

Sample inpt 0:
"1"
Sample output 0:
1
Sample Input 1:
"145"

Sample Output 1:
6


*/
#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;
int isPalindrome(string word)
{
	int len = word.length();
	for(int i=0;i<len/2;i++)
	{
		if(word[i]!=word[len-i-1])
			return 0;
	}
	return 1;
}
string reverse(string word)
{
	int len = word.length();
	string res ;
	for(int i=len-1;i>=0;i--)
	{
		res+=word[i];
	}
	return res;
}

int main()
{
	string n;
	cin >> n;
	
	while(!isPalindrome(n))
	{
		n=n+reverse(n);
	}
	cout << n.length() << "  \t " << n;
	
	return 0;
}




