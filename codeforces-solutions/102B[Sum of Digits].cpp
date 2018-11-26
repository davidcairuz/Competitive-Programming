#include <bits/stdc++.h>
using namespace std;

int solve(int sum) {
	if (sum == 0) return 0;
	else return sum % 10 + solve(sum/10);
}

int main() {

	string s;
	cin >> s;

	if(s.size() == 1) {
		cout << 0 << endl;
		return 0;
	}

	int sum = 0;

	for(int i = 0; i < s.size(); i++) {
		sum += s[i] - "0";
	}

	int count = 0;
	while(sum >= 10) {
		sum = solve(sum);
		count++;
	}
	
	cout << count + 1 << endl;

}