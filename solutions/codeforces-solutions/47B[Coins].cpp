#include <bits/stdc++.h>
using namespace std;

pair<int, int> weight[3];

int charToInt(char a) {
	if(a == "A") return 0;
	else if(a == "B") return 1;
	else if(a == "C") return 2;
	return 0;
}

int main() {
	
	for(int i = 0; i < 3; i++) {
		weight[i].second = i;
	}

	string s;
	for(int i = 0; i < 3; i++) {
		cin >> s;
		if(s[1] == ">") {
			int increasePos = charToInt(s[0]);
			for(int j = 0; j < 3; j++) {
				if(j == increasePos) weight[j].first++;
				else weight[j].first--;
			}
		} else if(s[1] == "<") {
			int increasePos = charToInt(s[2]);
			for(int j = 0; j < 3; j++) {
				if(j == increasePos) weight[j].first++;
				else weight[j].first--;
			}
		}
	}

	sort(weight, weight + 3);

	if(weight[0].first == weight[1].first and weight[1].first == weight[2].first) {
		cout << "Impossible" << endl;
		return 0;
	}

	for(int i = 0; i < 3; i++) {
		if(weight[i].second == 0) cout << "A";
		if(weight[i].second == 1) cout << "B";
		if(weight[i].second == 2) cout << "C";
	}

	cout << endl;


}