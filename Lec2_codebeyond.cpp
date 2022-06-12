#include <bits/stdc++.h>
using namespace std;


int main() {

	set<int> st;
	int n;
	cin >> n;
	for (int i = 0 ; i < n; i++) {
		int x ;
		cin >> x;
		st.insert(x);
	}
	//can only be acces using st.begin() not using st[]
	//erase function
	st.erase(st.begin());

	st.erase(st.begin(), st.begin() + 2); //->(]

	st.erase(5); //key

	set<int> st = {1, 5, 7, 8};

	auto it = st.find(5); //it will be iterator to 7
	auto it = st.find(9); //it = st.end();
	st.emplace(6); //st.insert(6)
	cout << st.size();


	unordered_set<int> st;

	st.insert(2);
	st.insert(3);
	st.insert(4);
//avg time complexity is o(1)
	//tle -> switch to set
	//but the worst case is linear in nature , o(set size)


	multiset<int> ms;

	ms.insert(1);
	ms.insert(1);
	ms.insert(2);
	ms.insert(2);
	ms.insert(3);
	//st->{1,1,2,2,3,}

	st.count(2); //give frequency
	ms.erase(2);//all instance will be erased
	auto it = ms.find(2);
	ms.clear();
	ms.erase(ms.begin(), ms.end()); //delete the entire set

//map only store unique keys in order
	//logn is tc of map
	map<string , int> mpp;
	mpp["jayesh"] = 27;
	mpp["ram"] = 99;
	mpp["sam"] = 56;
	mpp["ram"] = 100; //overwrite

	for (auto it : mpp) {
		cout << it.first << " " << it.second << endl;
	}

	for (int it = mpp.begin(); it != mpp.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}

//does not store any order
	unordered_map<int, int>mpp;
//O(1) in almost all the clases and worst case isO(n)


//pair
	pair<int, int>pr;
	pr.first = 1;
	pr.second = 10;

	pair<int , int> pt = {1, 2};
	pair<pair<int, int>, int> pr = {{1, 3}, 2};
	cout << pr.first.second << endl; //->3

	pair<pair<int, int>, pair<int, int>> pr = {{1, 2}, {3, 4}};
	cout << pr.second.second; //->4



//********* S T A C K *********

	stack<int> st; //lifo
//pop , top , size , empty
	st.push(2);
	st.push(3);
	st.push(4);

	cout << st.top();
	st.pop();

	while (!st.empty()) {
		st.top(); //delete entire stack
	}

//QUEUE

	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	cout << q.front();
	q.pop();
//TC is O(1)


// ****** PRIORITY_QUEUE *********
//tc is O(n)
//pus size top pop empty

	priority_queue<int> pq;
	pq.push(1);
	pq.push(5);
	pq.push(2);
	pq.push(6);

	cout << pq.top;

	priority_queue<pair<int, int>> pq;
	pq.push(1, 5);
	pq.push(1, 6);
	pq.push(1, 7);

	priority_queue<int> pq;
//for minimum priority queue
	pq.push(-1);
	pq.push(-5);

	cout << -1 * pq.top() << endl;


	priority_queue<int, vector<int>, greater<int>> pq;
	pq.push(1);
	pq.push(2);
//min priority queue
	cout << pq.top;


	dequeue<int>dq;
//push_front() push_back() pop_front() pop_back() begin,end,rbegin,rend size clear empty at


//*****LIST***

	list<int> ls;
//push_front() push_back() pop_front() pop_back() begin,end,rbegin,rend size clear empty at
//remove ->O(1)




	return 0;
}