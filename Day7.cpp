#include<iostream>
using namespace std;
int main() {
	const int SIZE = 100;
	int N;
	cin >> N;
	int A[SIZE];
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = N - 1; i >= 0; i--) {
		cout << A[i] << " ";
	}
	return 0;
}
