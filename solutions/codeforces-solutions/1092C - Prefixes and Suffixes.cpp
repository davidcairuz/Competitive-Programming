#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f;

typedef long long ll;
#define pb push_back
#define eb emplace_back
#define print_vector(vec, n) for(int i = 0; i < n; i++) cout << vec[i];

vector<string> big_substrings;
vector<string> substrings;
char ans[500];

/*
	we only need to check two strings:
	n-1 sized substring + last letter of the other n-1 sized substring
	and the other way around

	i was only capable of solving this problem thanks to preischadt :p yo
*/

bool check_substrings(string& s) {
	map<string, int> checked_prefix;
	map<string, int> checked_suffix;

	for(int i = 0; i < substrings.size(); i++) {
		string substring = substrings[i];

		if (substring == s.substr(0, substring.size()) and !checked_prefix[substring]) {
			checked_prefix[substring] = 1;
			ans[i] = "P";

		} else if (substring == s.substr(s.size() - substring.size()) and !checked_suffix[substring]) {
			checked_suffix[substring] = 1;
			ans[i] = "S";

		} else return false;
	}

	return true;
}

int main() {
	int n;
	cin >> n;

	for(int i = 0; i < 2*n-2; i++) {
		string sub;
		cin >> sub;

		if(sub.size() == n-1) big_substrings.pb(sub);
		substrings.pb(sub);
	}

	string possible1 = big_substrings[0] + big_substrings[1][n-2];
	string possible2 = big_substrings[1] + big_substrings[0][n-2];

	if(check_substrings(possible1) or check_substrings(possible2)) print_vector(ans, 2*n-2);
}