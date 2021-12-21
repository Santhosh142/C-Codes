/*
SET

uniqueness
sorted
immutable
unindexed
internal implementation (bst);



*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
	// SETS in C++
 
	set<int> s;
 
	s.insert(12);
	s.insert(30);
	s.insert(2);
	s.insert(5);
 
	// 1ST WAY
	if(s.find(4)!=s.end())
	cout<<"Present\n";
	else
	cout<<"NOT Present\n";
 
	// 2nd WAY
	if(s.count(4)!=0)
	cout<<"Present\n";
	else
	cout<<"NOT Present\n";
 
	for(auto u:s)
	cout<<u<<" ";
 
	return 0;
}
