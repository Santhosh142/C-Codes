/*
PROBLEM STATEMENT:
Given an input string s, reversse the order of the words.A word is defined as a sequence of non-space characters.
The words in s will be separated by at least one space. Return a string of the words in reverse order concanated by a single space.

Input:
Enter the string 
"the sky is blue"
Output:
"blue  is sky the"


*/
#include<iostream>
#include<string>

using namespace std;
int main()
{
	string str ;
	getline(cin,str);
	int len = str.length();
	string temp="";
	int ind = len-1;
	while(ind>=0)
	{
		
		if(str[ind] != ' ')
		{
			temp=str[ind]+temp;
		}
		else
		{
			cout << temp << " ";
			temp="";
		}
		if(ind==0)
		{
			cout << temp << endl;
		}
		ind--;
	}
	
	
	return 0;
}





