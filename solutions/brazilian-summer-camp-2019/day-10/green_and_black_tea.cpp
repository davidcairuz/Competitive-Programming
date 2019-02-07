#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, green, black;
	cin >> n >> k >> green >> black;

	vector<char> sequence;
	bool last_greater = false;
	int unchanged = 0;
	
	for(int i = 0; i < n; i++) {
		bool greater = green > black;
		if (last_greater != greater) unchanged = 0;

		if (unchanged == k){
			greater = !greater;
			unchanged = 0;
		}

		if (greater and green > 0){
			sequence.push_back('G');
			green--;
			unchanged++;

		} else if (!greater and black > 0) {
			sequence.push_back('B');
			black--;
			unchanged++;

		} else {
			cout << "NO" << endl;
			return 0;
		}

		last_greater = greater;
	}

	for(auto i:sequence) cout << i;

}