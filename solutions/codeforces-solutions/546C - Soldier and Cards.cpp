#include <bits/stdc++.h>
using namespace std;

// “If we wait until we"re ready, we"ll be waiting for the rest of our lives.”

const long long inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl

int main() {
	deque<int> a;
	deque<int> b;

	int n;	cin >> n;
	int k1; cin >> k1;
	for(int i = 0; i < k1; i++) {
		int x; cin >> x;
		a.push_front(x);
	}

	int k2; cin >> k2;
	for(int i = 0; i < k2; i++) {
		int x; cin >> x;
		b.push_front(x);
	}

	int rounds = 0;
	while(!a.empty() and !b.empty()) {
		int card_a = a.back();
		a.pop_back();

		int card_b = b.back();
		b.pop_back();

		if(rounds > 1000) return !printf("-1\n");

		if(card_a > card_b) {
			a.push_front(card_b);
			a.push_front(card_a);
			
		} else {
			b.push_front(card_a);
			b.push_front(card_b);
		}

		rounds++;
	}

	printf("%d %d\n", rounds, (a.empty() ? 2 : 1));
}