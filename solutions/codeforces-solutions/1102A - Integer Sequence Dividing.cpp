#include <bits/stdc++.h>
using namespace std;

const long long inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;

	int ans = n % 4;

	if(ans == 0 or ans == 3) printf("0\n");
	else printf("1\n");
}