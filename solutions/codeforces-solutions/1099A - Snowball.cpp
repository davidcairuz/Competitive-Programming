#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int w, h;
	cin >> w >> h;

	int r1w, r1h, r2w, r2h;
	cin >> r1w >> r1h >> r2w >> r2h;

	h++;
	while(h--) {
		w += h;
		if(h == r1h) w = max(0, w - r1w);
		if(h == r2h) w = max(0, w - r2w);
	}

	cout << w << endl;
}