#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t > 0) {
		int n;
		cin >> n;

		if (n < 7) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		t--;
	}

	return 0;
}
