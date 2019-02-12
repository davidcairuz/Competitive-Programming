#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	float k;
	cin >> n >> k;

	int red = 2 * n;
	int green = 5 * n;
	int blue = 8 * n;

	int ans = ceil(red/k) + ceil(green/k) + ceil(blue/k);
	printf("%d\n", ans);
}