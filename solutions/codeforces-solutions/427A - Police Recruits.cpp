#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	
	int police_avaiable = -1;
	int crimes_uns = 0;
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		police_avaiable = max(-1, police_avaiable + ((x > 0 and police_avaiable < 0) ? x + 1 : x));
		if(police_avaiable == -1) crimes_uns++;
	}

	cout << crimes_uns << endl;
}