#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;	cin >> n;
	string s;	cin >> s;
	deque<char> ans;

	for(int i = 0; i < s.size(); i++) {
		if(i % 2 == 0) {
			ans.push_back(s[i]);
		} else {
			ans.push_front(s[i]);
		}
	}

	if(n % 2 == 0) {
		for(int i = s.size() - 1; i >= 0; i--) {
			cout << ans[i];
		}

		cout << endl;

		return 0;

	}

	for(int i = 0; i < s.size(); i++) {
		cout << ans[i];
	}

	cout << endl;

}