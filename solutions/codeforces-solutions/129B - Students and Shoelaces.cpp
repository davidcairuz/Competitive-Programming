#include <bits/stdc++.h>
using namespace std;

int ties[110][110];

int main() {
	int n, m, ans = 0;
	cin >> n >> m;

	for(int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		ties[x][y] = 1;
		ties[y][x] = 1;
	}

	while(true) {
		vector<pair<int,int> > to_remove;

		for(int i = 1; i <= n; i++) {
			int sum = 0;
			int posx, posy;
			for(int j = 1; j <= n; j++) {
				if(ties[i][j]) {
					sum++;
					posx = j;
					posy = i;
				}
			}

			if(sum == 1) to_remove.emplace_back(posx, posy);
		}

		if(to_remove.empty()) break;
		else {
			ans++;
			for(auto i : to_remove) {
				ties[i.first][i.second] = 0;
				ties[i.second][i.first] = 0;
			}
		}
	}
	cout << ans << endl;
}