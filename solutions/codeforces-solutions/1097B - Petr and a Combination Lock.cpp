#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> rot;
int mm[20][380];

int go(int i, int now) {
	if(mm[i][now] != -1) return mm[i][now];
	if(i >= n and now == 0) return mm[i][now] = 1;
	if(i >= n and now != 0) return mm[i][now] = 0;

	return mm[i][now] = go(i+1,((now+rot[i])%360+360)%360) or go(i+1,((now-rot[i])%360+360)%360);
}

int main() {
	cin >> n;

	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		rot.push_back(x);
	}

	memset(mm, -1, sizeof mm);
	cout << (go(0, 0) == 1 ? "YES" : "NO") << endl;
}