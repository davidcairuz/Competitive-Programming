#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl

vector<int> v;

int main() {
	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {
		int x;	cin >> x;
		v.pb(x);
	}

	sort(v.begin(), v.end());
	
	long long ans = 0;
	for(int i = 1; i < v.size(); i++) {
		ans += v[i] - v[i-1] - 1;
	}

	cout << ans << endl;
}