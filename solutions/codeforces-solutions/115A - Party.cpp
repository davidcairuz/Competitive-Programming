#include <bits/stdc++.h>
using namespace std;

vector<int> edges[100100];
bool visited[100100];
int dist[100100];

void bfs(int s) {
	queue<int> q;
	q.push(s);
	visited[s] = true;
	dist[s] = 0;

	while(!q.empty()) {
		int u = q.front();
		q.pop();

		for(int v : edges[u]) {
			if(visited[v]) continue;
			visited[v] = true;
			q.push(v);

			dist[v] = dist[u] + 1;
		}
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
		if(x == -1) x = 0;
		edges[x].push_back(i);
	}

	for(int i = 0; i <= n; i++) {
		if(!visited[i]) bfs(i);
	}

	int ans = 0;
	for(int i = 0; i <= n; i++) ans = max(ans, dist[i]);
	printf("%d\n", ans);
}