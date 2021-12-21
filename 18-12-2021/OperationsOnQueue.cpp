/*
Implement different operations on a queue q.

Input :
The first line of input contains an integer t denoting the no of queries. Then in the next line are t space separated queries

A query can be of four types :
1.x(pushes an element x at the end of the queue q)
2.(if queue is not empty pops the front element and prints it, else prints -1)
3.(prints the size of the queue)
4.(if queue is not empty prints the front element of the queue, else prints -1)
5.(if queue is not empty prints te last element of the queue else prints -1)


*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	queue<int> q;
	for(int i=0;i<t;i++)
	{
		cout << "1.push an element " << endl;
		cout << "2.pop an element" << endl;
		cout << "3.size of queue"<< endl;
		cout << "4.print front" << endl;
		cout << "5.print last " << endl;
		int n;
		cin >> n;
		switch(n)
		{
			case 1:
				int x ;
				cin >> x;
				q.push(x);
				break;
			case 2:
				if(q.size()==0)
				{
					cout << -1 << endl;
				}
				else
				{
					cout << q.front() << endl;
					q.pop();
				}
				break;
			case 3:
				cout << q.size() << endl;
				break;
			case 4:
				if(q.size()==0)
				{
					cout << -1 << endl;
				}
				else
				{
					cout << q.front() << endl;
				}
				break;
			case 5:
				if(q.size()==0)
				{
					cout << -1 << endl;
				}
				else
				{
					cout << q.back() << endl;
				}
				
				
		}
	}
	return 0;
}















