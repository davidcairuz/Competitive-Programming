#include <bits/stdc++.h>
using namespace std;

vector<int> divisores;

int main() {
	int n;
	string s;
	cin >> n;

	for(int i = n; i > 0;) {
		if(n % i == 0) divisores.push_back(i);
		i--;
	}

	reverse(divisores.begin(), divisores.end());

	cin >> s;

	for(int i = 0; i < divisores.size(); i++) {
		int size = n - divisores[i];
		reverse(s.begin(), s.end() - size);
	}

	cout << s << endl;

}