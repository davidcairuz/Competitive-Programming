#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
typedef long long ll;

ll acc_sum[200200];
ll v[200200];
int freq[1001000];
vector<int> ans;
int n;

ll sum_removing_i(int i) {
	return acc_sum[i-1] + (acc_sum[n] - acc_sum[i]);
}

int main() {
	cin >> n;

	ll sum = 0;
	for(int i = 1; i <= n; i++) {
		cin >> v[i];
		sum += v[i];

		freq[v[i]]++;
		acc_sum[i] = sum;
	}

	for(int i = 1; i <= n; i++) {
		ll soma = sum_removing_i(i);
		//cout << "SOMA: " << soma << endl; 

		float look_for = soma/(float)2;
		if(look_for - (int)look_for != 0) continue;

		int times = (v[i] == look_for) ? 1 : 0;
		if(look_for > 1000000) continue;

		if(freq[(int)look_for] > times) ans.pb(i);
	}

	cout << ans.size() << endl;
	for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
}