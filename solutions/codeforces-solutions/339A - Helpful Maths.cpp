#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	vector<int> numbers;

	cin >> s;

	for(int i = 0; i < s.size(); i += 2) {
		numbers.push_back(s[i] - 48);
	}

	sort(numbers.begin(), numbers.end());

	cout << numbers[0];
	for(int i = 1; i < numbers.size(); i++) {
		cout << "+" << numbers[i];
	}

	cout << endl;
}