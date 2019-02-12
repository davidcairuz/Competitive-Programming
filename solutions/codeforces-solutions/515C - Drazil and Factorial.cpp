#include <bits/stdc++.h>
using namespace std;

string possible[10] = {"", "", "2", "3", "322", "5", "35", "7", "7222", "7332"};

int main() {
	int n;
	string in, ans = "";
	cin >> n >> in;

	for(auto i : in) ans += possible[i - "0"];
	sort(ans.rbegin(), ans.rend());
	
	cout << ans << endl;
}