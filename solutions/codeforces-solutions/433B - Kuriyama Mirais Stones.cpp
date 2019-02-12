#include <bits/stdc++.h>
using namespace std;

int ordvet[100100];
long long sums[100100];
long long ordsums[100100];

int main() {
	int n;	cin >> n;
	int a;
	
	long long sum = 0;
	for(int i = 1; i <= n; i++) {
		cin >> a;
		ordvet[i] = a;
		sum += a;
		sums[i] = sum;
	}
	
	sort(ordvet, ordvet + n + 1);
	
	sum = 0;
	for(int i = 1; i <=n; i++) {
		sum += ordvet[i];
		ordsums[i] = sum;
	}
	
	int q;	cin >> q;
	int op, x, y;
	
	for(int i = 0; i < q; i++) {
		cin >> op >> x >> y;
		if(op == 1) {
			cout << sums[y] - sums[x-1] << endl;
		} else {
			cout << ordsums[y] - ordsums[x-1] << endl;
		}	
	}
}
