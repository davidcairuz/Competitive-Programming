#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
typedef long long ll;

int main() {
	int n;
	cin >> n;
	int max_cnt = 0;
	int cnt = 0;
	int last = 0;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		cnt++;
		if(x < last) {
			cnt--;
			max_cnt = max(max_cnt, cnt);
			cnt = 1;
		}
		last = x;
	}
	max_cnt = max(max_cnt, cnt);
	cout << max_cnt << endl;
}