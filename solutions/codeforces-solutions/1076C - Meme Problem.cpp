#include <bits/stdc++.h>
using namespace std;

const long long inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl

/*
	-b^2 + db -d = 0
	a, b, c = -1, d, -d

	delta = d^2 - 4d
	x = [-d +- sqrt(delta)] / -2 == [d +- sqrt(delta)]/2

	delta must be >= 0, so d must be >= 4
	example has 9 decimal places
*/
void solve(int d) {
	double delta, a = 0.0, b = 0.0;

	if(d == 0) {
		cout << fixed << setprecision(9) << "Y " << a << " " << b << endl;
		return;
	}

	if (d < 4) {
		cout << "N" << endl;
		return;
	}

	delta = d * d - 4 * d;
	a = (d + sqrt(delta))/2;
	b = (d - sqrt(delta))/2;

	cout << fixed << setprecision(9) << "Y " << a << " " << b << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--) {
		int d;
		cin >> d;
		solve(d);
	}	
}