#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f;

typedef long long ll;
#define pb push_back
#define eb emplace_back

int n, m, k, t;

int to_line(int row, int column) {
	return row * m + column;
}

vector<int> wastes = {0};
set<int> waste_set;
string ans[3] = {"Carrots", "Kiwis", "Grapes"};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m >> k >> t;

	while(k--) {
		int x, y;
		cin >> x >> y;
		x--; y--;
		wastes.pb(to_line(x, y));
		waste_set.insert(to_line(x, y));
	}

	sort(wastes.begin(), wastes.end());

	while(t--) {
		int x, y;
		cin >> x >> y;
		x--; y--;
		int pos = to_line(x, y);

		if(waste_set.find(pos) != waste_set.end()) {
			cout << "Waste" << endl;

		} else {
			int lower_pos = max(0, lower_bound(wastes.begin(), wastes.end(), pos) - wastes.begin() - 1);
			int valid_pos = pos - lower_pos;
			cout << ans[valid_pos % 3] << endl;
		}
	}
}