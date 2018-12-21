#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
typedef long long ll;

int main() {
	ll op;
	while(scanf("%lld", &op), op != 0) {
		double perfect = sqrt(op);

		cout << ((perfect - floor(perfect) == 0) ? "yes" : "no");
		cout << endl;
	}
}
