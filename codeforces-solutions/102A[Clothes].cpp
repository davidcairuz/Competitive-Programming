#include <bits/stdc++.h>
using namespace std;

int prices[1000];
int matches[1000][1000];

bool match(int i, int j, int k) {
	if(matches[i][j] and matches[i][k] and matches[j][k]) return true;
	else return false;
}

int main() {
	int mini = 0x3f3f3f3f;
	int n, m;
	cin >> n >> m;

	for(int i = 1; i <= n; i++) {
		cin >> prices[i];
	}

	for(int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		matches[u][v] = matches[v][u] = 1;
	}

	for(int i = 1; i <= n; i++) {
		for(int j = i; j <= n; j++) {
			for(int k = j; k <= n; k++) {
				int price = prices[i] + prices[j] + prices[k];
				if(match(i, j, k) and price < mini) {
					mini = price;
				} 
			}
		}
	}

	mini == 0x3f3f3f3f ? cout << -1 << endl : cout << mini << endl;

}