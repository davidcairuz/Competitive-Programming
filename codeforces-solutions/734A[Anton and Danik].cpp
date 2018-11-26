#include <bits/stdc++.h>
using namespace std;

int main(){
	char w;
	int n, a = 0, d = 0;

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> w;
		if (w == "A") a++;
		else if (w == "D") d++;
	}

	if (a > d) cout << "Anton" << endl;
	else if (d > a) cout << "Danik" << endl;
	else cout << "Friendship"<< endl;

}