#include <bits/stdc++.h>
using namespace std;

int vis[110];
vector<int> edges[110];
int cnt = -1;
bool isCycle = false;

void dfs(int u, int root, int pred) {
  cnt++;
  vis[u] = 1;

  for(int i = 0; i < edges[u].size(); i++) {
    int v = edges[u][i];
    if(!vis[v]) dfs(v, root, u);
  }

  for(int i = 0; i < edges[u].size(); i++) {
    if(edges[u][i] == root && root != pred) {
      isCycle = true;
      cnt++;
    }
  }
}

int main() {
  int n, m;	cin >> n >> m;
  int ans = 0;

	for(int i = 0; i < m; i++) {
		int x, y;	cin >> x >> y;
		edges[x].push_back(y);
		edges[y].push_back(x);
	}


  for(int i = 1; i <= n; i++) {
    if(!vis[i]) {
      dfs(i, i, i);

      if (isCycle && cnt % 2 != 0 && cnt != 0) ans++;
      isCycle = false;
      cnt = -1;
    } 
  }

  if((n - ans) % 2 != 0) ans++;
  cout << ans << endl;
  
}
