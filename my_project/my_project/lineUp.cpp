#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <numeric>

#include "lineUp.h"

using namespace std;

int main() {
	
	vector<int>v {1, 2, 3, 4, 5, 6, 7, 8, 9, 4, 11 }; // 1
	cout << count_if(v.cbegin(), v.cend(), [](int i) { return i == 4; }) << endl; //2
	cout << count_if(v.cbegin(), v.cend(), [](int i) { return i > 4; }) << endl; //3
	_Erase_remove_if(v, [](int n) { return n < 8; }); //4
	copy(v.cbegin(), v.cend(), ostream_iterator<int>(cout, " ")); //5
	cout << endl;
	vector<int>v_diff (v.size() - 1); // 6
	transform(v.cbegin() + 1, v.cend(), v.cbegin(), v_diff.begin(), minus<>{}); //7
	copy(v_diff.cbegin(), v_diff.cend(), ostream_iterator<int>(cout, " ")); //8
	cout << endl;
	cout << accumulate(v_diff.begin(), v_diff.end(), 0); //9
	

}
