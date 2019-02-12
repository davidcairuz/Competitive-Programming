#include <bits/stdc++.h>
using namespace std;

vector<int> numbers;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int q;
	cin >> q;

	while(q--) {	
		int ans;
		int pages, x, y, d;
		cin >> pages >> x >> y >> d;

		int distance = abs(y - x);
		if(distance % d == 0) ans = distance / d;
		else {
			int ans_from_begin, ans_from_end;
			int dist_from_begin, dist_from_end;

			ans_from_begin = abs(ceil((x-1)/(float)d) + (y-1)/d);
			ans_from_end = abs(ceil((pages-x)/(float)d) + (pages-y)/d);

			dist_from_begin = abs(y-1);
			dist_from_end = abs(pages - y);

			if(dist_from_begin % d == 0 and dist_from_end % d == 0) {
				ans = min(ans_from_begin, ans_from_end);

			} else if (dist_from_begin % d == 0) {
				ans = ans_from_begin;

			} else if (dist_from_end % d == 0) {
				ans = ans_from_end;

			} else ans = -1;
		}

		printf("%d\n", ans);
	}
}