#include <bits/stdc++.h>
using namespace std;

map<int, int> note;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	int n;	cin >> n;

	for(int i = 0; i < n; i++) {
		int p, q;	cin >> p >> q;
		note[p] = q;
	}

	int last = 0;
	for(auto i : note) {
		if(i.second < last) {
			cout << "Happy Alex" << endl;
			return 0;
		}
		
		last = i.second;
	}
	cout << "Poor Alex" << endl;
} 