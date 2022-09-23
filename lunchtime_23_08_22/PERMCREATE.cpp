#include<bits/stdc++.h>
using namespace std;

const int N = 0;

void solve() {
	int n;
	cin >> n;

	if (n < 4) {
		cout << -1 << endl;
		return;
	}

	if (n == 4) {
		cout << 2 << " " << 4 << " " << 1 << " " << 3 << endl;
		return;
	}

	for (int i = 1; i <= n; i += 2) {
		cout << i << " ";
	}

	for (int i = 2; i <= n; i += 2) {
		cout << i << " ";
	}

	cout << endl;
	return;
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
		solve();
	}


	return 0;
}
