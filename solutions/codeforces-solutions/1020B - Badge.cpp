#include <bits/stdc++.h>
using namespace std;

vector<int> edges[100100];
bool visited[100100];

void dfs(int u) {
	visited[u] = true;
	for(int v : edges[u]) {
		if(!visited[v]) dfs(v);
		else printf("%d ", v);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for(int i = 1; i <= n; i++) {
		int x;
		cin >> x;

		edges[i].push_back(x);
	}

	for(int i = 1; i <= n; i++) {
		dfs(i);
		memset(visited, 0, sizeof visited);
	}
}