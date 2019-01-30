#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_function(vector<int>& s) {
	int n = s.size();
	vector<int> pi(n, 0);

	for(int i = 1; i < n; i++) {
		int j = pi[i-1];
		while(j > 0 and s[i] != s[j]) j = pi[j - 1];
		if(s[i] == s[j]) j++;

		pi[i] = j;
	}
	return pi;
}

int main() {

	int n; cin >> n;

	vector<int> values1;
	vector<int> values2;
	vector<int> clock1;
	vector<int> clock2;

	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		values1.push_back(x);
	}

	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		values2.push_back(x);
	}

	sort(values1.begin(), values1.end());
	sort(values2.begin(), values2.end());

	for(int i = 0; i < n; i++) values1.push_back(values1[i]);

	for(int i = 1; i < values1.size(); i++) clock1.push_back((values1[i] - values1[i-1] + 360000) % 360000);
	for(int i = 1; i < values2.size(); i++) clock2.push_back((values2[i] - values2[i-1] + 360000) % 360000);

	vector<int> verify = clock2;
	verify.push_back(999999999);
	for(int i = 0; i < clock1.size(); i++) verify.push_back(clock1[i]);
	
	vector<int> pi = prefix_function(verify);
	for(int i : pi) if (i == clock2.size()) return !printf("possible\n");
	printf("impossible\n");

}
