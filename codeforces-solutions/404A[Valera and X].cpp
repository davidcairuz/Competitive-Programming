#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;	cin >> n;
	bool isOk = true;

	int count = 0;
	char diagonal;
	char notDiag;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			char letter;
			cin >> letter;
			
			if (count < 2) {
				if(count == 0) diagonal = letter;
				else if(count == 1) notDiag = letter;

				count++;
			}

			if(count == 2) {
				if(diagonal == notDiag) {
					cout << "NO" << endl;
					return 0;
				}

				count++;
			}

			else {
				if(i == j or i + j == n - 1) {
					if (letter != diagonal) {
						cout << "NO" << endl;
						return 0;
					}
				} else {
					if(letter != notDiag) {
						cout << "NO" << endl;
						return 0;
					}
				}
			}
		}
	}

	cout << "YES" << endl;
}