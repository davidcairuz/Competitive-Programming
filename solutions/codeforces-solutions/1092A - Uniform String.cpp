#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f;

typedef long long ll;
#define pb push_back
#define eb emplace_back

string alpha[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

int main() {
	int t;	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;

		string ans = "";
		for(int i = 0; i < n; i++) {
			ans += alpha[i % k];
		}

		cout << ans << endl;
	}

}