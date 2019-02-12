#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	string colors = "ROYGBIV";
	string colors2 = "GBIVGBI";
	int n;	cin >> n;

	while(n >= 7) {
		n -= 7;
		cout << colors;
	}

	for(int i = 0; i < n; i++) {
		cout << colors2[i];
	}

	cout << endl;
}