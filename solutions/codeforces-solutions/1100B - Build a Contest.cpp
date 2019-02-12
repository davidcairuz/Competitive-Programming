#include <bits/stdc++.h>
using namespace std;

map<int, int> f;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	for(int i = 0; i < m; i++) {
		int x; cin >> x;
		f[x]++;

		if(f.size() == n) {
			cout << 1;
			
			for(auto i = f.begin(); i != f.end();) {
				i->second--;
				if(i->second == 0) i = f.erase(i);
				else i++;
			}
		} else cout << 0;
	}	
}