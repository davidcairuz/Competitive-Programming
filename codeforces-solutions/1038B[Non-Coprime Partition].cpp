#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mk make_pair
#define watch(x) cout << "O valor de " <<<< "é: " << x << endl

vector<int> a;
vector<int> b;
 
int main() {
	int n;
  cin >> n;

	if(n == 1 or n == 2) {
		cout << "No" << endl;
		return 0;
	}

	for(int i = 1; i <= n; i++) {
		if(i % 2) a.pb(i);
		else b.pb(i);
	}

	cout << "Yes" << endl;
	cout << a.size() << " ";
	for(int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}

	cout << endl;

	cout << b.size() << " ";
	for(int i = 0; i < b.size(); i++) {
		cout << b[i] << " ";
	}

	cout << endl;
}
