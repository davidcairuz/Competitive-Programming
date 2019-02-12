#include <bits/stdc++.h>
using namespace std;

// find all numbers in a way that x2-x1 = pos[x2] - pos[x1] - 1

int numbers[1000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);

	int maxdist = 0;

	int n;	cin >> n;

	if(n == 1) {
		cout << 0 << endl;
		return 0;
	}

	for(int i = 1; i <= n; i++) {
		cin >> numbers[i];
	}

	numbers[0] = 0;
	numbers[n+1] = 1001;

	bool entered = false;

	for(int i = 0; i <= n+1; i++) {
		for (int j = i; j <= n+1; j++) {
			int dist = numbers[j] - numbers[i];
			if(dist == j - i and dist > maxdist){
				entered = true;
				maxdist = dist;
			}
		}
	}

	if(entered)
		cout << maxdist - 1 << endl;
	else
		cout << 0 << endl;
}