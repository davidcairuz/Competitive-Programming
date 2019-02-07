#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	priority_queue<int> a;
	priority_queue<int> b;

	long long ansA = 0, ansB = 0;
	int x;

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> x;
		a.push(x);
	}

	for(int i = 0; i < n; i++) {
		cin >> x;
		b.push(x);
	}

	int turno = 0;
	while(!a.empty() && !b.empty()) {
		turno = !turno;

		if(a.top() > b.top()) {
			ansA += a.top();
			a.pop();
		} else {
			b.pop();
		}

		if(a.empty() || b.empty()) break;

		turno = !turno;

		if(b.top() > a.top()) {
			ansB += b.top();
			b.pop();
		} else {
			a.pop();
		}
	}

	while(a.size()){
    if(!turno) ansA += a.top();
		a.pop();
    turno = !turno;	
	}

	while(b.size()){
		if(turno) ansB += b.top();
		b.pop();
    turno = !turno;
	}

	cout << ansA - ansB << endl;

}