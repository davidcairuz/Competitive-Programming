#include <bits/stdc++.h>
using namespace std;

char ans[110][110];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> ans[i][j];

			if(ans[i][j] == ".") {
				if((i + j) & 1) ans[i][j] = "W";
				else ans[i][j] = "B";
			}
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cout << ans[i][j];
		}
		cout << endl;
	}
}