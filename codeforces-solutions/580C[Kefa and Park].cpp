#include <bits/stdc++.h>
using namespace std;

int n, m;
bool vis[100100];
int hasCats[100100];
vector<int> edges[100100];

void dfs(int v, int catCount, int parent) {
	if(hasCats[parent] and hasCats[v]) catCount++;
	else catCount = hasCats[v];

	if(catCount > m) return;
	vis[v] = true;

	for(int i = 0; i < edges[v].size(); i++) {
		int u = edges[v][i];
		if(!vis[u]) dfs(u, catCount, v);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> n >> m;
	int ans = 0;

	if (n == 1) {
		cout << 1 << endl;
		return 0;
	}

	for(int i = 1; i <= n; i++) {
		cin >> hasCats[i];
	}

	for(int i = 1; i < n; i++) {
		int x, y;	
		cin >> x >> y;
		edges[x].push_back(y);
		edges[y].push_back(x);
	}

	dfs(1, 0, 1);

	for(int i = 2; i <= n; i++) {
		if(edges[i].size() == 1 and vis[i]) ans++;
	}

	cout << ans;
}