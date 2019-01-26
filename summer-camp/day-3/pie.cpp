#include <bits/stdc++.h>
using namespace std;

#define pi acos(-1)

int n, f;
vector<double> v;

double get_volume(int r) {
	return pi * r * r;
}

bool eat(double volume) {
	int could_eat = 0;

	for(int i = 0; i < v.size(); i++) {
		could_eat += floor(v[i]/volume);
	}

	if (could_eat < f) return 0;
	else return 1;

}

int main() {

	int t; cin >> t;

	while(t--) {
		cin >> n >> f;
		f++;

		double low = 0;
		double high = 10000000000000;

		for(int i = 0; i < n; i++) {
			int r; cin >> r;
			double volume = get_volume(r);

			v.push_back(volume);
		}

		int cnt = 300;
		while(cnt--) {
			double mid = (low + high)/2;
			bool result = eat(mid);

			if (!result) high = mid;
			else low = mid;
		}

		cout << low << endl;
		v.clear();
	}
}
