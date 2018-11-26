#include <bits/stdc++.h>
using namespace std;

#define N 2*100100

vector<int> edges[N];
int vis[N];
int subtree_size[N];
vector<int> path;
int pos[N];

int dfs(int u) {
	vis[u] = 1;

	for(int i = 0; i < edges[u].size(); i++) {
		int v = edges[u][i];
		if(!vis[v]) {
			path.push_back(v);
			subtree_size[u] += 1 + dfs(v);
		} 
	}

	return subtree_size[u];
}

int main() {
	int n, q;	cin >> n >> q;
	int v;
	int u, k;

	path.push_back(1);

	for(int i = 2; i <= n; i++) {
		cin >> v;
		edges[i].push_back(v);
		edges[v].push_back(i);
	}

	dfs(1);

  for(int i = 0; i < path.size(); i++) {
    pos[path[i]] = i;
  }

	for(int i = 0; i < q; i++) {
		cin >> u >> k;
		if(subtree_size[u] + 1 < k) cout << -1 << endl;
		else cout << path[(pos[u] - 1) + k] << endl;
	}

}