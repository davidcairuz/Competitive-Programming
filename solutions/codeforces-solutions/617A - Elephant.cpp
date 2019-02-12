#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl

int main() {

	int n;
	cin >> n;

	int ans = 0;
	int curr = 5;
	while(n > 0) {
		if(n - curr < 0) curr--;
		n -= curr;
		ans++;
	}

	cout << ans << endl;
}