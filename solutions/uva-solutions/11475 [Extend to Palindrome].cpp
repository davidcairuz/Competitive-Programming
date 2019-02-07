#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_function(string s) {
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
	
	string original_s;
	string reverse_s;
	string s;

	while(cin >> original_s) {
		reverse_s = original_s;
		reverse(reverse_s.begin(), reverse_s.end());

		if(original_s.compare(reverse_s) == 0) {
			cout << original_s << endl;
		} else {	
			s = reverse_s + original_s;
			vector<int> pi = prefix_function(s);

			int start_pos = pi[s.size() - 1];
			int end_pos = reverse_s.size();

			string to_palindrome = "";
			for(int i = start_pos; i < end_pos; i++) {
				to_palindrome += reverse_s[i];
			}
			cout << original_s + to_palindrome << endl;
		}
	}
}
