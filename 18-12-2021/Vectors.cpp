/*
VECTORS:


*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	int ind,ptr;
	int n;
	cin >> n;
	for(int i = 0;i<n;i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	
	cout << "Printing elements from the vector " << endl;
	
	//First way
	vector<int>::iterator itr;
	for(auto itr=v.begin();itr !=v.end();++itr)
	cout << *itr << " ";
	cout << endl;
	
	//Second way
	for(auto ind:v)
	cout << ind << " ";
	cout << endl;
	
	//third way
	for(int i=0;i<v.size();i++)
	cout << v[i] << " ";
	cout << endl;
	
	
	cout << endl<<"Size of the vetcor is " << v.size() << endl;
	
	v.pop_back();
	
	cout << "size of the vetcor after deleting " << endl;
	cout << v.size()<< endl;
	
	return 0;
}













