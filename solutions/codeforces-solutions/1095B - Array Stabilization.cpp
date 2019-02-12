#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl;

vector<int> v;

int main() {
	int n;
	int mi = inf;
	int ma = 0;

	cin >> n;

	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;

		v.pb(x);
	}

	if(v.size() == 1) {
		cout << 0 << endl;
		return 0;
	}

	sort(v.begin(), v.end());

	int poss1 = v[n-1] - v[1];
	int poss2 = v[n-2] - v[0];

	if(poss1 < poss2) cout << poss1 << endl;
	else cout << poss2 << endl;
	
}