#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	while(cin >> n) {

		vector<int> v;
		for(int i = 0; i < n; i++) {
			int x; cin >> x;
			v.push_back(x);
		}

		int frequency[n];
		memset(frequency, 0, sizeof frequency);

		for (int i = 0; i < n-1; i++) frequency[abs(v[i] - v[i+1])] = 1;

		bool jolly = true;
		for (int i = 1; i < n; i++) {
			if (frequency[i] == 0) jolly = false;
		}

		cout << (jolly ? "Jolly" : "Not jolly") << endl;
	}
}
