#include <bits/stdc++.h>
using namespace std;

long long n;
set<long long> added;
long long freq[100100];
vector<long long> coins;
long long dp[100100][2];

long long go(long long i, long long last) {
	if(i >= coins.size()) return 0;
	if(dp[i][last] != -1) return dp[i][last];

	if(last and (coins[i]) == coins[i-1] + 1) return dp[i][last] = go(i+1, 0);
	return dp[i][last] = max(coins[i] * freq[coins[i]] + go(i+1, 1), go(i+1, 0));
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	memset(dp, -1, sizeof dp);

	cin >> n;

	coins.push_back(-0x3f3f3f3f);
	for(long long i = 1; i <= n; i++){
		long long x;	cin >> x;
		if(added.find(x) == added.end()) coins.push_back(x);
		freq[x]++;
		added.insert(x);
	}

	sort(coins.begin(), coins.end());

	printf("%lld\n", go(1, 0));
} 