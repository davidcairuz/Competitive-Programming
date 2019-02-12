#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
typedef long long ll;

int n, num_boxes, box_size, mid, ans = 0;
int items[200200];

bool solve(int value) {
	int start_pos = n - value;
	int current_box = 1;
	int current_weight = 0;

	for(int i = start_pos; i < n; i++) {
		current_weight += items[i];
		if (current_weight > box_size) {
			current_box++;
			current_weight = 0;
			i--;
		}
		if(current_box > num_boxes){
			return false;
		}
	}
	return true;
}

int main() {

	cin >> n >> num_boxes >> box_size;
	for(int i = 0; i < n; i++) cin >> items[i];

	int left = 0;
	int right = n;
	
	while(left <= right) {
		mid = (left + right) / 2;
		bool what = solve(mid);
		if(what) {
			left = mid + 1;
			ans = max(ans, mid);

		} else right = mid - 1;
	}

	cout << ans << endl;
}