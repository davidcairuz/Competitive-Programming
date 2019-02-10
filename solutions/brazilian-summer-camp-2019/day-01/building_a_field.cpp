#include <bits/stdc++.h>
using namespace std;

int n;
set<int> point;

int main() {
	cin >> n;

	int sum = 0;
	point.insert(0);

	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		sum += x;
		point.insert(sum);
	}

	int ans = 0;
	for(set<int>::iterator it = point.begin(); it != point.end(); it++) {
		
        if(point.find((*it + sum/2) % sum) != point.end()) {
			ans++;
			point.erase(it);
			point.erase((*it + sum/2) % sum);
		}
	}

	cout << (ans >= 2 and sum%2 == 0 ? 'Y' : 'N') << endl;
}
