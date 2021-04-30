#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include <map>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n;
	string names;
	cin >> n;

	map<string, int> phone_book;
	for (int i = 0; i < n; i++) {
		cin >> names;
		if (!phone_book[names]) {
			cin >> phone_book[names];
		}
	}

	while (cin >> names) {

		if (phone_book[names]) {
			cout<< names;
			cout << "=" << phone_book[names] << endl;
		}
		else {
			cout << "Not found" << endl;
		}
	}
	return 0;
}
