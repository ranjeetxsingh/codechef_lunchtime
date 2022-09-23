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

		int n, faceUp;

		cin >> n >> faceUp ;

		int faceDown = n - faceUp;

		int result = (faceUp <= faceDown) ? faceUp : faceDown;

		cout << result << endl;
	}

	return 0;
}


// while (c >= 0 and flag == 0) {
// 	c = c - x;
// 	d = d + x;
// 	if (c == d) {
// 		flag = 1;
// 		break;
// 	}
// }

// c = a;
// d = b;

// while (d >= 0 and flag == 0) {
// 	c = c + x;
// 	d = d - x;
// 	if (c == d) {
// 		flag = 1;
// 		break;
// 	}
// }
