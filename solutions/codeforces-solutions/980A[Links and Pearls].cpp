#include <bits/stdc++.h>
using namespace std;

int main() {
	int balls = 0, dashes = 0;
	string s;	cin >> s;

	for (auto i : s) {
		if (i == "o") balls++;
		else dashes++;
	}

        if(balls == 0) {
                cout << "YES" << endl;
                return 0;
        }

	if(dashes % balls == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
}