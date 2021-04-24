#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		char s[30];
		cin.getline(s, 30);
		for (int j = 0; s[j] != '\0'; ++j) {
			if(j%2==0)
			cout << s[j];
		}
		cout << "\t";
		for (int j = 0; s[j] != '\0'; ++j) {
			if (j % 2 != 0)
				cout << s[j];
		}
		cout << endl;
	}
	system("PAUSE");
	return 0;
}

