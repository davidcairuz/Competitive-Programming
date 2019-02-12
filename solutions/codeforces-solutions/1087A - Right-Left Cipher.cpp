#include <bits/stdc++.h>
using namespace std;

deque<char> enc;
char ans[100];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;

	for(int i = 0; i < s.size(); i++) enc.push_back(s[i]);
	
	int pos = s.size() - 1;
	if(s.size() % 2 == 0){
		while(!enc.empty()) {
			ans[pos] = enc.back();
			enc.pop_back();
			pos--;

			if(enc.empty()) break;

			ans[pos] = enc.front();
			enc.pop_front();
			pos--;
		}
	} else {
		while(!enc.empty()) {
			ans[pos] = enc.front();
			enc.pop_front();
			pos--;

			if(enc.empty()) break;

			ans[pos] = enc.back();
			enc.pop_back();
			pos--;
		}
	}
	for(int i = 0; i < s.size(); i++) cout << ans[i];
}