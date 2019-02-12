#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
typedef long long ll;

map<int, int> freq;
vector<int> current_set;

int check(int k, int mid) {
	int times = 0;
	for(auto i: freq) {
		times += i.second / mid;
	}

	return times;
}

int main() {
	int n, k;
	cin >> n >> k;

	for(int i = 0; i < n; i++) {
		int x;	cin >> x;
		freq[x]++;
	}

	int max_freq = 0;
	for(auto i:freq) max_freq = max(max_freq, i.second);

	int esq = 1;
	int dir = max_freq;
	int mid = (esq + dir)/2;
	int ans = 0;
	while(esq <= dir) {
		mid = (esq + dir)/2;
		int what = check(k, mid);
		if(what >= k){
			esq = mid + 1;
			ans = max(ans, mid);
		}
		else dir = mid - 1;
	}

	for(auto i : freq) {
		if(k == 0) break;
		int times_in = i.second / ans;
		for(int j = 0; j < times_in; j++){
			current_set.pb(i.first);
			k--;
			if(k == 0) break;
		}
	}

	for(auto i : current_set) cout << i << " ";
}