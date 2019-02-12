#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int n, s;
	cin >> n >> s;

	int count = 0;
	while(s > 0) {
		if(s - n < 0) n--;
		else {
			s -= n;
			count++;
		}
	}

	cout << count << endl;
}