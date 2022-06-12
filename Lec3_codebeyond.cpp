#include <bits/stdc++.h>
using namespace std;

int main() {

//Bitset
	bitset<10> bt; // only store 1 or 0
//bitset -> 1bit
	cout << bt.all(); // returns t or f on basis of 1 or 0
	cout << bt.any(); //any  bit is set  then it will return true
	cout << bt.count(); //print the number of set bits
	bt.flip(2);//1->0 or 0->1
	cout << bt.set(); // if al bit are 0
	bt.set();//1111
	bt.reset();//set all 0
	bt.size();
	bt.test(1);//check index is set or not


	//********A L G O R I T H M *******

	sort(arr, arr + n); //in increasing order
	sort(vec.begin(), vec.end());

	reverse(arr, arr + n);
	int el = *max_element(arr, arr + n);
// same in min and vector

	int sum = accumulate(arr, arr + n, 0); //startiterator , enditerator , initialsum


	int cnt = count(arr, arr + n , 1); // fiterator , siterator , x


//to find 1st occurence of element
	auto it = find(arr, arr + n , 2); // return an iterator
	int ind = it - arr;


//binary search
	bool res = binary_search(arr, arr + n, 8);


//lower_bound function
//returns iterator pointing to the first element which is not less than x
	auto it = lower_bound(arr, arr + n, x);
	int = it - arr;

//upper bound ->just greater than x
	auto it = upper_bound(arr, arr + n, x);



//Next permutation
//string s ="abc"
	//s="bca"
	bool res = next_permutation(s.begin(), s.end());
	//return true next permutation is piossible and s = "cab" i.e next permutation
	//see striver video for how it works
	bool res = prev_permutation(s.begin(), s.end());


//COMPARATOR
	bool comp(int el1 , int el2) {
		if (el1 <= el2) {
			return true;
		}
		return false;
	}
	sort(arr , arr + 3 , comp); //comp is condition applied to sort
	sort(arr, arr + n , greater<int>); //in built comparator which works only in you wana do in descending order

	return 0;
}