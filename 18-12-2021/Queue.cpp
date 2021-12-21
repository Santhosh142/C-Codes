//QUEUE
#include<bits/stdc++.h>
using namespace std;

int main()
{
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(0);
	cout << q.size() << endl;
	cout << q.front() << endl;
	q.pop();
	cout << q.size() << endl;
	
	
	
//	queue<int>::iterator itr;
//	for(itr=q.begin();itr != q.end();++itr)
//	{
//		cout << *itr << " " ;
//	}
	return 0;
}
