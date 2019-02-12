#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl

map<int, int> breaks;
int ans[200200];

int main() {
	int n, m, d;
	cin >> n >> m >> d;

	for(int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		breaks[x] = i;
	}

	int day = 1;
	int current = breaks.begin()->first;
	ans[breaks.begin()->second] = day;
	breaks.erase(breaks.begin());
	
	while(!breaks.empty()) {
		current += d + 1;
		auto it = breaks.lower_bound(current);

		// couldn"t find next possible break
		if(it == breaks.end()) {
			day++; // se ficar com um dia a mais o problema ta aqui!!!
			current = 0;

			it = breaks.lower_bound(current);
		}

		current = it -> first;
		ans[it->second] = day;
		breaks.erase(it);
	}

	cout << day << endl;
	for(int i = 1; i <= n; i++) cout << ans[i] << " ";
}