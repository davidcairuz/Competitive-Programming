#include <bits/stdc++.h>
using namespace std;

int result[1000001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int k, l, n;
	cin >> k >> l >> n;

	int biggest_tower = 0;

	vector<int> input(n);
	for(int i = 0; i < n; i++){
		cin >> input[i];
		biggest_tower = max(biggest_tower, input[i]);
	}

	result[0] = 0;
	for(int i = 1; i <= biggest_tower; i++) {
		if(result[i-1] == 0) result[i] = 1;
		if(i-l >= 0 and result[i-l] == 0) result[i] = 1;
		if(i-k >= 0 and result[i-k] == 0) result[i] = 1;
	}
	
	for(int i = 0; i < n; i++) {
		int tower = input[i];
		cout << (result[tower] ? 'A' : 'B');
	}
}