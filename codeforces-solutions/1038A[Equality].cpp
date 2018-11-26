#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mk make_pair
#define watch(x) cout << "O valor de " <<<< "é: " << x << endl

int freq[27];

int main() {
	int n, k;
	char c;
	int mini = 0x3f3f3f3f;

	cin >> n >> k;
	
	for(int i = 0; i < n; i++) {
		cin >> c;
		freq[c - 65]++;
	}

	for(int i = 0; i < k; i++) {
		if(freq[i] < mini) mini = freq[i];
	}
	
	cout << mini * k << endl;
}
