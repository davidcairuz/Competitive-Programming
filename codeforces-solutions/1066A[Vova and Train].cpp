#include <bits/stdc++.h>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;	cin >> t;

	for(int i = 0; i < t; i++) {
		int distance, v, l, r;
		cin >> distance >> v >> l >> r;

		int allLamps = distance/v;
		int blockedLamps = (r/v) - (l-1)/v;

		cout << allLamps - blockedLamps << endl;
	}

}