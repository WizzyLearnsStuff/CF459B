#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> b(n);

	for (int &i : b) {
		cin >> i;
	}

	sort(b.begin(), b.end());

	int ma = b[n - 1] - b[0];

	if (ma == 0) {
		long long int a = n;
		// cout << a;
		cout << ma << ' ' << ((a * (a-1)) >> 1);
		return 0;
	}

	long long int left = 1;
	long long int right = 1;

	int last = b[0];
	for (int i = 1; i < n - 1; i++) {
		if (b[i] == last) left++;
	}

	last = b[n - 1];
	for (int i = n - 2; i > 0; i--) {
		if (b[i] == last) right++;
	}

	cout << ma << ' ' << left * right;
}
