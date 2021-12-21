//MAPS

#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int> m;
	//First way
	m.insert(make_pair(1,2));
	//Second way
	m.insert({3,4});
	//Third way
	m[5]=7;
	
	
	cout << m.size() << endl;
	cout << m[5] << endl;
	
	for(auto u: m)
	cout << u.first << "\t" << u.second<<endl;
	
	
	return 0;
}
