#include <bits/stdc++.h>
using namespace std;

char p[550][550];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin >> p[i][j];
			if(p[i][j] == ".") p[i][j] = "D";
		}
	}

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			if(p[i][j] == "S" and (p[i+1][j] == "W" or p[i-1][j] == "W" or p[i][j+1] == "W" or p[i][j-1] == "W")) {
				return !printf("No\n");
			}
		}
	}

	cout << "Yes" << endl;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cout << p[i][j];
		}
		cout << endl;
	}
}