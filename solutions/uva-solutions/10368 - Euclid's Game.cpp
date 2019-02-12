#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f;

typedef long long ll;
#define pb push_back
#define eb emplace_back

long long play(ll a, ll b) {
	if(a < b) swap(a, b);
	if(b == 0) return 0;
	if(a/b > 1) return 1; // <-------- why?

	return 1 + play(b, a % b);
}

int main() {
	ll a, b;
	
	while(cin >> a >> b){
		if(a == 0 and b == 0) break;
		cout << (play(a, b) & 1 ? "Stan wins" : "Ollie wins") << endl;
	}
}
