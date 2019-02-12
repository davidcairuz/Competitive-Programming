#include <bits/stdc++.h>
using namespace std;

set<int> path;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;

	path.insert(b);
	while(b > a) {
		if(b & 1) {
			if((b - 1) % 10 == 0) b = (b-1) / 10;
			else {
				cout << "NO" << endl;
				return 0;
			}
		}
		else b = b/2;

		path.insert(b);
	}

	if(path.find(a) != path.end()){
		cout << "YES" << endl << path.size() << endl;
		for(auto i:path) cout << i << " ";

	} else cout << "NO" << endl;
}