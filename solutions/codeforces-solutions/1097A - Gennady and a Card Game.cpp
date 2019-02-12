#include <bits/stdc++.h>
using namespace std;

int main() {
	char a, b;
	cin >> a >> b;
	
	for(int i = 0; i < 10; i++) {
		char k;	cin >> k;
		if(k == a or k == b) return !printf("YES\n");
	}
	
	printf("NO\n");
}