/*
PROBLEM STATEMENT:
Return all groups of strings that are anagrams.Array of string is given. The groups must be created 
in order of their appearance in the original array . Look at the sample case for clarification.

*An anagram is a word or phrase formed by rearrangin the letters of a different word or
phrase, typically using all original letters exactly once.

Example 1:
Input:
strs =[ "eat","tea","tan","ate","nat","bat"]

Output:
[["bat"],["nat","tan"],["ate","eat","tea"]]

*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    string arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
 
    string sorted_form[n];
    for(int i=0;i<n;i++)
    {
        sorted_form[i]=arr[i];
        sort(sorted_form[i].begin(),sorted_form[i].end());
    }
 
    int flag[n]={0};
    for(int i=0;i<n;i++)
    {
        if(flag[i]==0)
        {   flag[i]=1;
            cout<<arr[i]<<" ";
            for(int j=i+1;j<n;j++)
            {
                if(flag[j]==0 && sorted_form[i]==sorted_form[j])
                {
                    flag[j]=1;
                    cout<<arr[j]<<" ";
                }
            }
            cout<<"\n";
        }
    }
 
    return 0;
}
