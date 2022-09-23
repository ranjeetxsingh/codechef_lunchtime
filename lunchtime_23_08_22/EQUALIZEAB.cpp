#include<bits/stdc++.h>
using namespace std;

const int N = 0;

void solve(long long int a, long long int b, long long int x) {
	long long int diff = abs(a - b);

	if (a == b) {
		cout << "YES" << endl;
		return;
	}

	if (a % x == 0 and b % x == 0) {
		cout << "YES" << endl;
		return;
	}

	if (diff != x && diff % x == 0) {
		cout << "YES" << endl;
		return;
	}

	cout << "NO" << endl;
	return;
}

void solve2(long long int a, long long int b, long long int x) {

	if (a <= b) {

		if ((b - a) % (x * 2) == 0) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	else {

		if ((a - b) % (x * 2) == 0) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}

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

		long long int a, b, x;

		cin >> a >> b >> x;

		solve2(a, b, x);


	}

	return 0;
}
