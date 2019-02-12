#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl

int main() {
	ll a, b, x, y;
	cin >> a >> b >> x >> y;

	long long GCD = __gcd(x, y);
	x = x/GCD;
	y = y/GCD;

	cout << min(a/x, b/y) << endl;
}