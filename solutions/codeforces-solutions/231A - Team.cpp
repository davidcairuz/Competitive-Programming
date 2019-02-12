#include <bits/stdc++.h>
using namespace std;

int matrix[1000][3];

int main() {
	int cnt = 0;
	int ans = 0;
	int n;	cin >> n;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 3; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 3; j++) {
			if(matrix[i][j] == 1) cnt++;
		}
		if(cnt >= 2) ans++;
		cnt = 0;
	}

	cout << ans << endl;

}