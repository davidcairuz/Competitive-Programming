#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f;

typedef long long ll;
#define pb push_back
#define eb emplace_back

vector<int> stu;

int main() {
	int n;	cin >> n;
	for(int i = 0; i < n; i++) {
		int x;	cin >> x;
		stu.pb(x);
	}

	sort(stu.begin(), stu.end());

	int ans = 0;
	for(int i = 0; i < stu.size() - 1; i += 2) {
		ans += stu[i+1] - stu[i];
	}

	printf("%d\n", ans);

}