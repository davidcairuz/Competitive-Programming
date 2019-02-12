#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
typedef long long ll;

int v[5050];
int maxim[5050];
int current_inter[5050];
int n;

int main() {
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}

	for(int i = 0; i < n; i++) {
		memset(current_inter, 0, sizeof(current_inter));
		int biggest = 0;

		for(int j = i; j < n; j++) {
			current_inter[v[j]]++;
			if(current_inter[v[j]] > current_inter[biggest] || (current_inter[v[j]] == current_inter[biggest] && v[j] < biggest)){
				biggest = v[j];
			}
			maxim[biggest]++;
		}
	}

	for(int i = 1; i <= n; i++) cout << maxim[i] << " ";
}