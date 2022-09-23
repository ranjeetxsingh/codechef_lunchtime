#include<bits/stdc++.h>
using namespace std;

const int N = 0;
int a[100001], n, q;

bool check(int x) {
	for (int i = 2; i <= n; i++) {
		if (a[i] + x * i < a[i - 1] + x * (i - 1))
			return false;
	}

	return true;
}

void solve2() {
	cin >> n >> q;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1, x, y; i <= q; i++) {
		cin >> x >> y;
		a[x] = y;
		long long int L = 0, R = 1000000000;

		while (abs(L - R) >= 4)
		{
			int M = (L + R) / 2;
			if (check(M))
				R = M + 1;
			else
				L = M - 1;
		}
		for (int k = L; k <= R; k++) {
			if (check(k)) {
				cout << i << endl;
				break;
			}
		}
	}
}

void solve() {
	cin >> n >> q;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	while (q--) {
		int i, x;
		cin >> i >> x;
		arr[i - 1] = x;

		int mx = 0;

		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				mx = max(mx, abs(arr[j] - arr[j + 1]));
			}
		}

		cout << mx << endl;
	}

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t > 0) {
		t--;
		solve2();
	}

	return 0;
}
