#include <bits/stdc++.h>
using namespace std;
int dist[10010];
vector<int> edges[100100];

int rb(int n) {
	return n * 2;
}

int bb(int n) {
	return n-1;
}

void bfs(int s) {
	memset(dist, -1, sizeof dist);
	queue<int> q;
	dist[s] = 0;
	q.push(s);
	while(q.size()) {
		int u = q.front();
		q.pop();
		for(int i = 0; i < edges[u].size(); i++) {
			int v = edges[u][i];
			if(dist[v] == -1) {
				dist[v] = dist[u] + 1;
				q.push(v);
			}
		}
	}
}

int main() {
	int a, b;
	cin >> a >> b;
	
	for(int i = 0; i < 10010; i++) {
		edges[i].push_back(rb(i));
		edges[i].push_back(bb(i));
	}
	
	bfs(a);
	cout << dist[b] << endl;
	
}
