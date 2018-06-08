#include <bits/stdc++.h>
using namespace std;

int coins[1000];
long long int dp[1000][1000];
int m;

long long int solve(int i, int total) {
	
	if(dp[i][total] != -1) return dp[i][total];

	if (total == 0) return 1;
	if (total < 0) return 0;
	if (i == m && total > 0) return 0;

	return dp[i][total] = solve(i, total - coins[i]) + solve(i+1, total);
}

int main() {

	int n;

	cin >> n >> m;

	memset(dp, -1, sizeof(dp));

	for(int i = 0; i < m; i++) {
		scanf("%d", &coins[i]);
	}

	cout << solve(0, n) << endl;
	cin >> n;
}