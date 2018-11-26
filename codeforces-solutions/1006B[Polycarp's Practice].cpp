#include <bits/stdc++.h>
using namespace std;

int vet[2020];
int ordvet[2020];
map<int, int> greatest;

int main() {
	int n, k;	cin >> n >> k;

	int sum = 0;

	for(int i = 0; i < n; i++) {
		cin >> vet[i];
		ordvet[i] = vet[i];
	}

	sort(ordvet, ordvet + n, greater<int>() );

	for(int i = 0; i < k; i++) {
		sum += ordvet[i];
		greatest[ordvet[i]]++;
	}

  	cout << sum << endl;

	int count = 0;
   	sum = 0;
	for(int i = 0; i < n; i++) {
    		if(k == 1) {
     			cout << n - sum << endl;
      			return 0;
    		}

		count++;
		if(greatest.find(vet[i]) != greatest.end() and greatest[vet[i]] != 0) {
     			sum += count;
			cout << count << " ";
			greatest[vet[i]]--;
			count = 0;
     			k--;
		}
	}
}