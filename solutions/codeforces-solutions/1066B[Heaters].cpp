#include <bits/stdc++.h>
using namespace std;

int vet[1010];
int cnt[1010];

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, r;	cin >> n >> r;
	int ans = 0;


	for(int i = 0; i < n; i++) {
		cin >> vet[i];
		ans += vet[i];
	}

	if(ans == 0) {
		cout << -1 << endl;
		return 0;
	}

	for(int i = 0; i < n; i++) {
		int counter = 0;
		for(int j = max(0, i - r + 1); j < min(n, i + r); j++) {
			if(vet[j]) counter++;
		}
		cnt[i] = counter;
	}

	for(int i = 0; i < n; i++) {
		bool useful = false;

		if(cnt[i] == 0) {
			cout << -1 << endl;
			return 0;
		}

		if(vet[i] == 1) {
			for(int j = max(0, i - r + 1); j < min(n, i + r); j++) {
				if(cnt[j] == 1) {
					useful = true;
					break;
				}
			}

			if(!useful) {
				ans--;
				for(int j = max(0, i - r + 1); j < min(n, i + r); j++) {
					cnt[j]--;
				}
			} 
		}
	}

	cout << ans << endl;
}