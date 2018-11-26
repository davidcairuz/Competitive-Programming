#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	int max = 0;
	cin >> n;
	
	int x;
	for(int i = 0; i < n; i++){
		scanf("%d", &x);
		if(x > max) max = x;
	}
	
	cout << max << endl;
}
