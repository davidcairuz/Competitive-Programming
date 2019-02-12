#include <bits/stdc++.h>
using namespace std;

vector<int> edges[100100];
bool visited[100100];

void dfs(int u) {
	visited[u] = true;
	for(int v : edges[u]) {
		if(!visited[v]) dfs(v);
	}
}

int main() {
	int n, t;
	cin >> n >> t;

	for(int i = 1; i <= n - 1; i++) {
		int a;
		cin >> a;
		edges[i].push_back(a + i);
	}

	dfs(1);
	if(visited[t]) cout << "YES" << endl;
	else cout << "NO" << endl;
}