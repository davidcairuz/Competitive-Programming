#include <bits/stdc++.h>
using namespace std;

multimap<int, int> instruments;
set<int> learnt;

int main() {

	int n, days;	cin >> n >> days;

	for(int i = 1; i <= n; i++) {
		int time;	cin >> time;
	        instruments.insert(make_pair(time, i));
	}

	int sum = 0;
	for(auto i : instruments) {
		if(sum + i.first > days) break;
		
		sum += i.first;
		learnt.insert(i.second);
	}

	cout << learnt.size() << endl;
	for(auto i : learnt) {
		cout << i << " ";
	}

        cout << endl;

}