#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl

int main() {
	string origin;
	cin >> origin;

	string rever = origin;
	reverse(rever.begin(), rever.end());

	string translation;
	cin >> translation;

	if(translation == rever) cout << "YES" << endl;
	else cout << "NO" << endl;

}