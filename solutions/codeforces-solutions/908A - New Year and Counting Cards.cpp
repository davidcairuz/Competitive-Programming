#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl

int main() {
	string s;
	cin >> s;

	int ans = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i]=="a" or s[i]=="e" or s[i]=="i" or s[i]=="u" or s[i]=="o") ans++;
		if(s[i]=="1" or s[i]=="3" or s[i]=="5" or s[i]=="7" or s[i]=="9") ans++;
	}
	
	cout << ans << endl;
}