#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
typedef long long ll;

int floors[1000];

int main() {
	int n;
	cin >> n;

	for(int i = 1; i <= n; i++) {
		cin >> floors[i];
	}

	// for each floor as origin, we must find the one that would bring the smallest use ans set origin there

	int minimum = 0x3f3f3f3f;
	for(int i = 1; i<= n; i++) {
		int use = 0;
		for(int j = 1; j <= n; j++) {
			use += floors[j] * 2 *(abs(j-i) + abs(j - 1) + abs(i - 1));
		}
		
		if(use < minimum) minimum = use;
	}

	printf("%d\n", minimum);
}