#include <bits/stdc++.h>
using namespace std;

vector<char> letters;

int main() {
	string s;
	int n, k; 	cin >> n >> k;
	int count = 0;

	cin >> s;

	for(int i = 97; i < 123; i++) {
		char x = i;
		letters.push_back(x);
	}

	for(int i = 0; i < letters.size(); i++) {
		for(int j = 0; j < s.size(); j++) {
			if(s[j] == letters[i] && count < k) {
				s[j] = "#";
				count++;
			}
			if(count > k) break;
		}
		if(count > k) break;
	}

	for(int i = 0; i < s.size(); i++) {
		if(s[i] != "#") cout << s[i];
	}
}