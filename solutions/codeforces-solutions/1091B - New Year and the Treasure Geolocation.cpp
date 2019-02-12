#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl

vector<pii> origins;
vector<pii> directions;

map<pii, int> found;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		origins.eb(x,y);	
	}

	for(int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		directions.eb(x,y);
	}

	for(int i = 0; i < n; i++) {
		int x = origins[i].first;
		int y = origins[i].second;

		for(int j = 0; j < n; j++) {
			int x_change = x + directions[j].first;
			int y_change = y + directions[j].second;
			found[{x_change, y_change}]++;
		}
	}

	for (auto iter = found.rbegin(); iter != found.rend(); ++iter) {
		if(iter->second == n) {
			cout << iter->first.first << " " << iter->first.second << endl;
		}
	}
}