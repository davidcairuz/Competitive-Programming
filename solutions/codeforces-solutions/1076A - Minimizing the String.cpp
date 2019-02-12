#include <bits/stdc++.h>
using namespace std;

const long long inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;

	string s;
	cin >> s;

	int pos;
	int maximum = 0;
	bool marked = false;
	for(int i = 0; i < s.size() - 1; i++) {
		if(s[i+1] < s[i]) {
			s[i] = "#";
			marked = true;
			break;
		}
	}

	if(!marked) s[n-1] = "#";

	for(int i = 0; i < s.size(); i++) {
		if(s[i] != "#") cout << s[i];
	}	
}