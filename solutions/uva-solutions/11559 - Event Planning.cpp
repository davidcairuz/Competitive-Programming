#include <bits/stdc++.h>
using namespace std;

int main() {

	int participants, budget, hotels, weekends;
	while(cin >> participants >> budget >> hotels >> weekends) {
		int price = 0x3f3f3f3f;

		while(hotels--) {
			int day; cin >> day;
			for (int i = 0; i < weekends; i++) {
				int beds; cin >> beds;
				
				if (beds >= participants) {
					if (participants * day <= budget) 
						price = min(price, participants * day);
				}
			}
		}

		if (price == 0x3f3f3f3f) cout << "stay home" << endl;
		else cout << price << endl;
	}
}