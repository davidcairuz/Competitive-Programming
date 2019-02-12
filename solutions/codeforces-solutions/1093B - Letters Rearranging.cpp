#include <bits/stdc++.h>
using namespace std;

map<char, int> freq;

int main() {
	int t;
	cin >> t;

	while(t--) {
		string s;
		cin >> s;

		for(int i = 0; i < s.size(); i++) {
			freq[s[i]]++;
		}

		if(freq.size() == 1){
			printf("-1\n");

		} else {
			for(auto i : freq) {
				for(int j = 0; j < i.second; j++) {
					cout << i.first;
				}
			}

			printf("\n");
		}

		freq.clear();
	}
}