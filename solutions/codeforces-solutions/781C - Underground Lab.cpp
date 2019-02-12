#include <bits/stdc++.h>
using namespace std;

int n, m, k, x, y;
bool vis[2*100100];
vector<int> edges[2*100100];
vector<int> path;

//pegando caminho completo
void dfs(int v) {
	vis[v] = true;
	path.push_back(v);

	for(int i = 0; i < edges[v].size(); i++) {
		int u = edges[v][i];
		if(!vis[u]) {
			dfs(u);
			path.push_back(v);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> n >> m >> k;

	for(int i = 0; i < m; i++) {
		cin >> x >> y;
		x--;
		y--;
		edges[x].push_back(y);
		edges[y].push_back(x);
	}

	dfs(0);

	int range = ((2 * n) % k == 0) ? (2 * n) / k : (2 * n) / k + 1;
	long long pathsize = path.size();

	//pra cada clone, vamos exibir o quanto ele pode andar
	for(int i = 0; i < k; i++) {
		//tanto que cada clone pode andar * ith clone
		long long start = i * range;
		if(start >= pathsize) {
			cout << "1 1"; // nao tem mais o que visitar
		} else {
			long long end = min(start + range, pathsize); // nao pode passar do max
			cout << end - start; //tamanho
			for(int j = start; j < end; j++) {
				cout << " " << path[j] + 1;
			}
		}
		cout << endl;
	}
}