#include <bits/stdc++.h>
using namespace std;

map<string, int> frequency;

string fill_with_zeros(string& pattern) {
	string to_fill = "";
	for(int i = 0; i < 20 - pattern.length(); i++)
		to_fill += '0';	

	return to_fill + pattern;
}

string get_pattern(string& number) {
	string pattern = "";
	
	for(int i = 0; i < number.length(); i++) {
		if ((number[i] - '0') % 2 == 0) pattern += '0';
		else pattern += '1';
	}

	return fill_with_zeros(pattern);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int q; cin >> q;

	while(q--) {
		char op; cin >> op;

		if (op == '+') {
			string s; cin >> s;
			frequency[get_pattern(s)]++;
		} else if (op == '-') {
			string s; cin >> s;
			frequency[get_pattern(s)]--;
		} else {
			string s; cin >> s;
			cout << frequency[fill_with_zeros(s)] << endl;
		}
	}
}
