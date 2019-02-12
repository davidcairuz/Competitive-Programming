#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl

int main() {
	int y, b, r;
	cin >> y >> b >> r;

	if(b > y) b = y + 1;
	else y = b - 1;
	
	if(r > b) r = b + 1;
	else {
		r = r;
		b = r - 1;
		y = b - 1;
	}

	cout << r + y + b << endl;
}