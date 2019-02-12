#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f;

typedef long long ll;
#define pb push_back
#define eb emplace_back

int main() {
	int ans, xcenter = 2, ycenter = 2;
	
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			int x;	cin >> x;
			if(x == 1) ans = abs(ycenter-i) + abs(xcenter - j);
		}
	}

	printf("%d\n", ans);
}