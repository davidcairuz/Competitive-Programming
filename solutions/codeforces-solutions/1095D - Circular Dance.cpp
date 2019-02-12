#include <bits/stdc++.h>
using namespace std;

vector<int> edges[200200];
bool visited[200200];
vector<int> path;

void dfs(int u) {
	path.push_back(u);
	visited[u] = true;
	for(int i : edges[u]) {
		if(!visited[i]) dfs(i);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	if(n == 3) {
		cout << "1 2 3" << endl;
		return 0;
	}

	int first_inx;
	int first_iny;
	for(int i = 1; i <= n; i++) {
		int x, y;
		cin >> x >> y;

		if(i == 1) {
			first_inx = x;
			first_iny = y;
		}

		edges[x].push_back(y);
		edges[y].push_back(x);
	}

	dfs(1);

	if((path[1] == first_inx and path[2] == first_iny) or (path[1] == first_iny and path[2] == first_inx)) {
		
	} else {
		reverse(path.begin(), path.end());
	}

	for(int i : path) cout << i << " ";
}