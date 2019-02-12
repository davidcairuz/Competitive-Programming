#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_function(string s) {
	int n = s.size();
	vector<int> pi(n, 0);

	for(int i = 1; i < n; i++) {
		int j = pi[i-1];
		while (j > 0 && s[i] != s[j]) j = pi[j-1];
		if (s[i] == s[j]) j++;
		pi[i] = j;
	}
	return pi;
}

int main() {
	string normal_year = "312831303130313130313031";
	string leap_year = "312931303130313130313031";

	string some_years = normal_year + normal_year + normal_year + leap_year + normal_year + normal_year;

	string looking_for = "";
	
	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {
		string number_days;
		cin >> number_days;
		looking_for += number_days;
	}

	string full_string = looking_for + "#" + some_years;
	vector<int> pi = prefix_function(full_string);

	for (int i : pi) {
		if (i == looking_for.size()) return !printf("Yes\n");
	}

	printf("No\n");
	return 0;
}