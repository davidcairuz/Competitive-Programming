#include <bits/stdc++.h>
using namespace std;

int holes[1001000];

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n, h, q;
	cin >> n >> h >> q;

	for(int i = 0; i < h; i++) {
		int x;	cin >> x;
		holes[x] = 1;
	}

	int curr = 1;

	for(int i = 0; i < q; i++) {
		int x, y;
		cin >> x >> y;

		if(holes[curr] == 1) {
			cout << curr << endl;
			return 0;
		}

		if(x == curr) {
			curr = y;
		} else if(y == curr) {
			curr = x;
		}

	}

	cout << curr << endl;

}