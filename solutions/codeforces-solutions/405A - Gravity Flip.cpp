#include <bits/stdc++.h>
using namespace std;

int v[110];

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) cin >> v[i];
	sort(v, v + n);
	for(int i = 0; i < n; i++) cout << v[i] << " ";
}