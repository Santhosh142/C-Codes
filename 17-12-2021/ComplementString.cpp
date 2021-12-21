/*
PROBLEM STATEMENT:
Given two strings s1 and s2, display 'yes' if given two strings are 
complementary otherwise display 'no'.
If we join alphabets of both the strings we should get all 26 capital letters
exactly once, then only we can call them as complementary.

Input :
You are given two strings 's1' and 's2'.
Constraints
1<=length of strings <=100
Outut:
Print 'yes' if given two strings are complementary, otherwise prit 'no'

Sample Input 0:
ABDCFGIJKLMNOPQUVWXYZ
EHRST

Sample Output 0:
yes

*/

//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string s1,s2,s;
//	cin >> s1;
//	cin >> s2;
//	s = s1+s2;
//	
//	sort(s.begin(),s.end());
//	int len = s.length();
//	
//	if(len!=26)
//	{
//		cout << "no";
//		return 0;
//	}
//	for(int i=0;i<len;i++)
//	{
//		if(i==0)
//		{
//			if(s[i+1]==s[i])
//			{
//				cout << "no";
//				return 0;
//			}
//		}
//		else if(i==len-1)
//		{
//			if(s[i]==s[i-1])
//			{
//				cout << "no";
//				return 0;
//			}
//		}
//		else
//		{
//			if(s[i]==s[i-1] || s[i]==s[i+1])
//			{
//				cout << "no";
//				return 0;
//			}
//		}
//	}
//	cout << "yes";
//	return 0;
//}


#include<iostream>
#include<string>


using namespace std;
int main() 
{
    string s1,s2;
    cin >> s1;
    cin >> s2;
    string s=s1+s2;
    int len1=s.length();
    if(len1<26 || len1>26)
    {
        cout << "no";
        return 0;
    }
    sort(s.begin(),s.end());
    for(int i=0;i<len1;i++)
    {
        if(i==0)
        {
            if(s[i]==s[i+1])
            {
                cout << "no";
                return 0;
            }
        }
        else if(i==len1-1)
        {
            if(s[i]==s[i-1])
            {
                cout << "no";
                return 0;
            }
        }
        else
        {
            if(s[i]==s[i-1] || s[i]==s[i+1])
            {
                cout << "no";
                return 0;
            }
        }
    }
    cout << "yes";
        
    
    return 0;
}
