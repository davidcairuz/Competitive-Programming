#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
typedef long long ll;

int main() {
	int op;
	while(scanf("%d", &op), op != 0) {
		float perfect = sqrt(op);

		cout << ((perfect - floor(perfect) == 0) ? "yes" : "no");
		cout << endl;
	}
}