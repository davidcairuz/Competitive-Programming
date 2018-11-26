#include <bits/stdc++.h>
using namespace std;

int numbers[200200];

int main() {
	
	int n, k;
	cin >> n >> k;
	int x;
	for(int i = 0; i < n; i++){
		scanf("%d", &x);
		numbers[i] = x;
	}
	
	int sum = 0;
	for(int i = 0; i < k; i++) {
		sum += numbers[i];
	}
	
	int minimum = sum;
	int index = 0;
	
	for(int i = k; i < n; i++) {
		sum = sum + numbers[i] - numbers[i - k];
		if(sum < minimum) {
			minimum = sum;
			index = i - k + 1;
		}
	}
	
	cout << index + 1 << endl;
}
