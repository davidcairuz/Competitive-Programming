#include <bits/stdc++.h>
using namespace std;

int v[110];

int main() {
	int lower = 0;
	int upper = 0;

	string s;
	cin >> s;

	for(int i = 0; i < s.size(); i++) {
		if(islower(s[i])) lower++;
		else upper++;
	}

	if(upper > lower) {
		for(int i = 0; i < s.size(); i++) {
			if(islower(s[i])) s[i] = s[i] - 32;
		}

	} else {
		for(int i = 0; i < s.size(); i++) {
			if(!islower(s[i])) s[i] = s[i] + 32;
		}
	}

	cout << s << endl;

}