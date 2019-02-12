#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	deque<int> cards;
	int n;	cin >> n;

	for(int i = 0; i < n; i++) {
		int card;
		cin >> card;
		cards.push_back(card);
	}

	int players[2] = {0, 0};
	int turn = 0;
	while(!cards.empty()) {
		if(cards.back() > cards.front()) {
			players[turn%2] += cards.back();
			cards.pop_back();

		} else {
			players[turn%2] += cards.front();
			cards.pop_front();
		}
		turn++;
	}

	cout << players[0] << " " << players[1] << endl;
}