#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f;

typedef long long ll;
#define pb push_back
#define eb emplace_back

int main() {
	int n;	cin >> n;
	string s;
	cin >> s;

	int cnt = 0;
	for(int i = 1; i < s.size(); i++) {
		if(s[i] == s[i-1]) cnt++;
	}

	cout << cnt << endl;
}