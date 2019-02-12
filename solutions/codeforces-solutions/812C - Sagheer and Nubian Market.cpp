#include <bits/stdc++.h>
using namespace std;

// “If we wait until we"re ready, we"ll be waiting for the rest of our lives.”

const long long inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl

vector<ll> products = {inf};
ll total_price;

int go(ll k, ll sum) {
	vector<ll> prices;
	for(int i = 1; i <= products.size()-1; i++) {
		ll price = products[i] + (i * k);
		prices.pb(price);
	}

	sort(prices.begin(), prices.end());
	
	total_price = 0;
	for(int i = 0; i < k; i++) {
		if(prices[i] != inf) total_price += prices[i];
	}

	if(total_price > sum) return 0;
	if(total_price <= sum) return 1;
}

int main() {
	ll n, s;
	ll correct = 0, money = 0;
	cin >> n >> s;

	for(int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		products.pb(x);
	}

	ll begin = 0; 
	ll end = products.size() - 1;
	ll mid;

	while(begin <= end) {
		mid = (begin + end)/2;
		ll answer = go(mid, s);
		
		if(answer == 0) end = mid - 1;
		else if(answer == 1) {
			correct = max(correct, mid);
			money = max(money, total_price);
			begin = mid + 1;
		}
	}

	printf("%lld %lld\n", correct, money);
}