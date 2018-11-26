#include <bits/stdc++.h>
using namespace std;

set<double> angular;

int main() {
	int n, x0, y0, x, y;
	double m;
	cin >> n >> x0 >> y0;
	
	for(int i = 0; i < n; i++) {
		cin >> x >> y;
		if(x - x0 == 0) m = 0x3f3f3f3f;
		else m = (y-y0)/(double)(x-x0);
		
		if(angular.find(m) == angular.end()) angular.insert(m);
	}
	
	cout << angular.size() << endl;
	
}
