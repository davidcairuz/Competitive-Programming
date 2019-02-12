#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int n;
	cin >> n;

	if(n == 1) return !printf("-1\n");
	else printf("%d 2\n", n - !(n % 2 == 0));
}