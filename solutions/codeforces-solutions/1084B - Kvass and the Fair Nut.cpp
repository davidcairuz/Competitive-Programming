#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int> v;

int solve(ll s, ll num) {
	ll sum = 0;
	for(int i = 0; i < v.size(); i++) {
		if(v[i] < num) return 1;
		if(v[i] > 0 and v[i] > num) sum += v[i] - num;
	}

	//printf("SUM %d ", sum);
	if(sum < s) return 1;
	return 0;
}

int main() {
	ll left = 0;
	ll right = 0;
	ll total_sum = 0;
	ll n;	cin >> n;
	ll s;	cin >> s;

	for(int i = 0; i < n; i++) {
		ll x;	cin >> x;
		right = max(right, x);
		total_sum += x;
		v.push_back(x);
	}

	if(total_sum < s) return !printf("-1\n");

	ll mid = 0;
	while(left <= right) {
		mid = (left + right)/2;
		//printf("RIGHT %lld LEFT %lld MID %lld", right, left, mid);
		int decision = solve(s, mid);
		//printf(" DECISION %d\n", decision);
		if (decision) right = mid - 1;
		else left = mid + 1;
	}

	//if(solve(s, mid) != 2) mid--;
	printf("%lld\n", right);

}