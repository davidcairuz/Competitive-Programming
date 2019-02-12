#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl;

int main() {
	int n;	cin >> n;
	string s;
	cin >> s;

	string ans = "";

	int current_size = 0;
	int reach = 1;
	for(int i = 0; i < s.size(); i++) {
		current_size++;
		if(current_size == reach) {
			current_size = 0;
			reach++;
			ans += s[i];
		}
	}

	cout << ans << endl;
}