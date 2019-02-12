#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f;

typedef long long ll;
#define pb push_back
#define eb emplace_back

int main() {
	int ans = 0, curr = 0;
	int n;	cin >> n;

	for(int i = 0; i < n; i++) {
		int exit, enter;
		cin >> exit >> enter;

		curr = curr - exit + enter;
		ans = max(curr, ans);
	}
	
	cout << ans << endl;
}