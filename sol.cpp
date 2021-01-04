#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// sort the array to compare current from previous value
	sort(a, a + n);
	int cnt = 0;
	// set 'prev' to the smallest integer value from the data type
	int prev = INT_MIN;
	for (int i = 0; i < n; i++) {
		// check if the a[i] is not equal to zero or the previous value
		if (a[i] != 0 && a[i] != prev) {
			cnt++;
			prev = a[i];
		}
	}
	cout << cnt << '\n';
	return 0;
}
