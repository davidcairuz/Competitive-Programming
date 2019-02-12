#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl

/*
	n * ang = 180 * k,
	k in [1, n-2]

	multiple = lcm(180, ang)
	n = multiple / ang
	k = multiple / 180

	if k is out of range, we increase the multiple

*/

ll lcm(ll a, ll b) {
	return a * b / __gcd(a,b);
}

int main() {

	int t;
	cin >> t;

	while(t--) {
		int ang, multiple, increase;
		cin >> ang;

		multiple = increase = lcm(ang, 180);

		while(multiple/180 > multiple/ang - 2) {
			multiple += increase;
		}

		cout << multiple/ang << endl;
	}
}