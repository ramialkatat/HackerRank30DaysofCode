#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<vector<int>> arr(6, vector<int>(6));
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
		}
	}
	int maximum = -9 * 7, hourglassSum;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (j + 2 < 6 && i + 2 < 6) {
				hourglassSum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
				if (hourglassSum > maximum) maximum = hourglassSum;
			}
		}
	}
	cout << maximum;
	return 0;
}