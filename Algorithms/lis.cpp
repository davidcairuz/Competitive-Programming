#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f;
vector<int> values;
int I[1001000];
int L[1001000];

int Lis(int n) {
	
	I[0] = -inf;
	for (int j = 1; j <= n; ++j) {
		I[j] = inf;
	}

	int lisLenght = 0;

	for(int i = 0; i < n; i++) {
		int low = 0;
		int high = lisLenght;

		while(low <= high) {
			int mid = (high	+ low) / 2;

			if(I[mid] < values[i]) low = mid + 1;
			else high = mid - 1;
		}

		I[low] = values[i];
		L[i] = low;
		if(low > lisLenght) lisLenght = low;
	}

	return lisLenght;
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		values.push_back(x);
	}

	cout << Lis(n) << endl;

}
