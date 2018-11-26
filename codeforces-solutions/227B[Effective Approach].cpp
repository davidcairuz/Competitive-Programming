#include <bits/stdc++.h>
using namespace std;

map<int, int> numbers;

int main() {
	
	int n;
	cin >> n;
	int x;
	for(int i = 0; i < n; i++){
		scanf("%d", &x);
		numbers[x] = i;
	}
	
	int m;
	cin >> m;
	
	long long v = 0, p = 0;
	
	for(int i = 0; i < m; i++){
		scanf("%d", &x);
		v += numbers[x] + 1;
		p += (n-1) - numbers[x] + 1;
	}
	
	cout << v << " " << p << endl;	
}
