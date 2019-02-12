#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
typedef long long ll;

map<int, int> m;

int main() {
	int n, k;
	cin >> n >> k;

	for(int i = 1; i <= n; i++) {
		int x;	cin >> x;
		if(m.find(x) == m.end()) {
			m[x] = i;
		}
	}

	if(m.size() >= k) {
		cout << "YES" << endl;

		for(auto i : m) {
			if(!k) break;
			cout << i.second << " ";
			k--;
		}

	} else cout << "NO" << endl;
}