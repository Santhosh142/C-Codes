/*
PRIORITY QUEUE

empty()
size()
push(g)
pop()
top()
swap()
emplace()
*/
#include<bits/stdc++.h>
using namespace std;
void showPQ(priority_queue<int> q)
{
	priority_queue<int> g=q;
	while(!g.empty())
	{
		cout << g.top() << "\t" ;
		g.pop();
	}
	cout << endl;
}

int main()
{
	priority_queue<int> pq;
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		pq.push(x);
	}
	showPQ(pq);
	cout << pq.size() << endl;
	
	return 0;
}















