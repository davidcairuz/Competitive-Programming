#include <bits/stdc++.h>
using namespace std;

// “If we wait until we"re ready, we"ll be waiting for the rest of our lives.”

const int inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl

int main() {
	string s;
	int k;

	cin >> s >> k;

	int slen = 0;
	int symbols = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] != "?" and s[i] != "*") slen++;
		else symbols++;
	}

	int difference = abs(k - slen);

	if(slen == k) {
		for(int i = 0; i < s.size(); i++) {
			if(s[i] != "?" and s[i] != "*") printf("%c", s[i]);
		}
	}

	else if(slen < k) {
		int pos_to_add = -1;
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == "*"){
				pos_to_add = i;
				break;
			} 
		}

		if(pos_to_add == -1) return !printf("Impossible\n");
		for(int i = 0; i < s.size(); i++) {
			if(i == pos_to_add) while(difference--) printf("%c", s[i-1]);
			if(s[i] != "?" and s[i] != "*") printf("%c", s[i]);
		}

	} else {
		if(symbols < difference) return !printf("Impossible\n");
		for(int i = 0; i < s.size(); i++) {
			if(slen == k) break;
			if(s[i] == "?" or s[i] == "*") {
				s[i-1] = "*";
				slen--;
			}
		}

		for(int i = 0; i < s.size(); i++) if(s[i] != "?" and s[i] != "*") printf("%c", s[i]);
	}
}