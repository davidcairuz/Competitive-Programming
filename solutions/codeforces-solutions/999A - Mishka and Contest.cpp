#include <bits/stdc++.h>
using namespace std;

int values[100100];

int main() {
	int n, k;	cin >> n >> k;

	for(int i = 0; i < n; i++) {
		scanf("%d", &values[i]);
	}

	int count = 0;
	int i;
	int j;

	for(i = 0, j = n-1; i < n, j >= 0;) {
		if(values[i] <= k && i < j) {
			i++;
			count++;
		}

		if(values[j] <= k && j > i) {
			j--;
			count++;
		}

		if(values[i] > k && values[j] > k) break;
		if(j == i && values[j] <= k) {
			count++;
			break;
		}
	}

	cout << count << endl;

}