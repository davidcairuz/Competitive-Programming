#include <bits/stdc++.h>
using namespace std;

const long long inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl

vector<int> v;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, x, y;
	cin >> n >> x >> y;

	int smaller = 0;
	int kindasmaller = 0;

	for(int i = 0; i < n; i++) {
		int z; cin >> z;
		v.pb(z);

		if(z <= x and z + y > x) kindasmaller++;
		else if(z <= x) smaller++;

		if(x == y and z <= x and (z <= x and z + y > x)) smaller++;
	}

	if(x > y) printf("%d\n", n);
	if(x < y) printf("%d\n", smaller + (int)ceil(kindasmaller/2.0));
	if(x == y) printf("%d\n", (int)ceil(smaller/2.0));
}