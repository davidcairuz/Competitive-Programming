#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string magnets = "";
	int n;	cin >> n;

	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		magnets += s;
	}

	int ans = 1;
	for(int i = 1; i < magnets.size(); i++) {
		if(magnets[i] == magnets[i-1]) ans++;
 	}

 	cout << ans << endl;
}