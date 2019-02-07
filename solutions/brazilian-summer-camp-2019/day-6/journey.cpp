#include <bits/stdc++.h>
using namespace std;

vector<int> edges[100100];
bool vis[100100];

double result = 0.0;

void dfs(int u, int dist, double probability) {
	vis[u] = true;

	int children = 0;
	for(int i = 0; i < edges[u].size(); i++) {
		children += !vis[edges[u][i]];
	}
	
	if (children == 0){
		result += dist * probability;
		return;
	}

	for(int i = 0; i < edges[u].size(); i++) {
		int v = edges[u][i];
		if (!vis[v]) dfs(v, dist + 1, probability * 1.0/children);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	for(int i = 0; i < n-1; i++) {
		int x, y; cin >> x >> y;
		edges[x].push_back(y);
		edges[y].push_back(x);
	}

	dfs(1, 0, 1.0);
	cout << fixed << setprecision(10) << result << endl;
}
