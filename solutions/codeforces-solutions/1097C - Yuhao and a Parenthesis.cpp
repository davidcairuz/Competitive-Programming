#include <bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
unordered_map<int, int> needs;
vector<int> searching;

int solve(string& s) {
	int close = 0;
	stack<char> check;
	for(int i = 0; i < s.size(); i++) {
		char current = s[i];
		if(current == "(") check.push(current);
		if(current == ")") {
			if (check.empty()) close++;
			else check.pop();
		}
	}
	int open = check.size();
	if (open and close) return inf;
	if (open) return open;
	return -close;
}

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		string s; cin >> s;
		int k = solve(s);
		if(k != inf) needs[k]++;
		if(k != inf and k >= 0) searching.push_back(k);
	}

	int ans = 0;
	for(int i : searching) {
		int a = i;
		int b = -a;

		if(needs[b]) {
			if(a == b and needs[a] == 1) continue;
			ans++;
			needs[a]--;
			needs[b]--;
		}
	}

	cout << ans << endl;
}