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
		t--;

		int a, b;

		cin >> a >> b;
		int flag = 0;

		if (a % b == 0) {
			cout << "0" << endl;
		}
		else {
			cout << "1" << endl;
		}

	}

	return 0;
}
