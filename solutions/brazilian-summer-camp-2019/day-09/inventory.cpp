#include <bits/stdc++.h>
using namespace std;

int v[100100];
map<int, int> vis;

int main() {
	int n; cin >> n;

	for (int i = 0; i < n; i++){
		cin >> v[i];
		vis[v[i]]++;
	}

	set<int> need;

	for (int i = 1; i <= n; i++) {
		if(vis[i]) continue;
		else need.insert(i);
	}


	for (int i = 0; i < n; i++) {
		int value = v[i];
		if(vis[value] >= 2 or value > n) {
			int replace;
			
			for (auto i:need) {
				replace = i;
				need.erase(i);
				break;
			}

			v[i] = replace;
			vis[value]--;
		}
	}

	for(int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}