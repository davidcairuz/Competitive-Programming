#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
typedef long long ll;

int v[200];

int main() {

	int n;
	int ans = 0;
	cin >> n;

	for(int i = 1; i <= n; i++) {
		cin >> v[i];
	}

	for(int i = 2; i < n; i++) {
		if(v[i] == 0 and v[i-1] == 1 and v[i+1] == 1) {
			ans++;
			v[i+1] = 0;
		}
	}
	
	printf("%d\n", ans);
}