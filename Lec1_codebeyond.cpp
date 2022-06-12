#include <bits/stdc++.h>
using namespace std;//c++ which has into it pakage,we have to use it

namespace jayesh { //making own  pakage
int val = 50;
int getVal() {
	return val * 10;
}
}

struct node {
	string str;
	int nume;
	double doub;
	char x;

	node(str_, num_, doub_, x_) {
		str = str_;
		num = num_;
		doub = doub_;
		x = x_;
	}
};


array<int , 3>arr; //->{0,0,0}

int main() {
	double val = 10.0;
	cout << val << endl; //prints 10.0

	cout << jayesh::val << endl; //prints 50
	cout << jayesh::getVal() << endl; //print 500

// correct way
	node *jaya = new node("Jaya", 99, 91.0, "");

	array<int , 3>arr; //->{?,?,?}
	arr.fill(10);//->{10,10,10}
	arr.at(1);//->10

//iterator
	//begin(),end.rbegin(),rend()

	array<int , 5>arr = {1, 3, 4, 5, 6};
	for (auto it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}

	string s = "xhegcwe";
//x h e g c w e
	for (auto c : s) {
		cout << c << " ";
	}

	cout << arr.size();
	cout << arr.front();
	cout << arr.back();

//******* V E C T O R ***********

	vector<int>arr;//->{}
	arr.push_back(0);
	arr.push_back(2);
	arr.pop_back();
//segmentation fault if you acess bigger location of memory which is not acessible
	vec.clear();//-> erase all element at once
	vector<int>vec(4, 0); //->{0,0,0,0}

	vector<int> vec3(arr.begin(), vec1.end());
	vector<int>vec4(vec3);//copy entire vec3 in vec4

	vector<int> jayesh;
	jayesh.push_back(1); //jayesh.emplace_back(1); --> emplace_back takes lesser time than push_back
	jayesh.push_back(2);
	jayesh.push_back(3);
	jayesh.push_back(4);
	jayesh.push_back(5);

	vector<int>raj(jayesh.begin(), jayesh.begin() + 2); //->{1,2}
//lower bound , upper bound
//swap swap(v1,v2)
//begin(),end(),rbegin(),rend()

//to defining 2d vector
	vector<vector<int>> vec;

	vector<int>raj1;
	raj1.push_back(1);
	raj2.push_back(2);

	vector<int>raj2;
	raj1.push_back(1);
	raj2.push_back(2);

	vector<int>raj3;
	raj1.push_back(1);
	raj2.push_back(2);

	vec.push_back(raj1);
	vec.push_back(raj2);
	vec.push_back(raj3);

	for (auto vctr : vec) {
		for (auto it : vctr) {
			cout << it << " ";
		}
		cout << endl;
	}

	//define 10x20
	vector<vector<int>> vec(10, vector<int>(20, 0));
	vec.push_back(vector<int>(20, 0));

	vec[2].push_back(1);

	vector<int>arr[4];
	//arr of 4  with vector data type of particular element


	//10x20x30
	vector<vector<vector<int>>> vec(10, vector<vector<int>> vec(10, vector<int>(20, 0)));
}