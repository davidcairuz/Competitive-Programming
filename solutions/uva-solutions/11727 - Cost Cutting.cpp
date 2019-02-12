#include <bits/stdc++.h>
using namespace std;

int main() {

	int q; cin >> q;
	vector<int> salaries(3);
	
	for(int cases = 1; cases <= q; cases++) {
		
		for(int i = 0; i < 3; i++) cin >> salaries[i];
		sort(salaries.begin(), salaries.end());

		cout << "Case " << cases << ": " << salaries[1] << endl;
	}
}