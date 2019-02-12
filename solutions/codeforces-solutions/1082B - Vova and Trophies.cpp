#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int> > points;

int main() {
	int n;
	int count_g = 0;
	string s;
	cin >> n >> s;

	int start_point = -1, end_point;

	if(s[0] == "G"){
		start_point = 0;
		count_g++;
	}

	for(int i = 1; i < s.size(); i++){
		if(s[i] == "G") count_g++;
		if(s[i] == "G" and s[i-1] == "S") start_point = i;
		if(s[i] == "S" and s[i-1] == "G") {
			end_point = i-1;
			points.emplace_back(start_point, end_point);
		} else if(i == n - 1 and start_point != -1 and s[i] == "G") {
			end_point = i;
			points.emplace_back(start_point, end_point);
		}
	}

	int ans = 0;
	if(points.size() == 0) ans = 0;
	else if(points.size() == 1) ans = points[0].second - points[0].first + 1;
	else {
		for(int i = 0; i < points.size() - 1; i++) {
			if (points[i+1].first - points[i].second == 2) {
				int possible = points[i+1].second - points[i].first + 1;
				ans = max(ans, possible);
			} else {
				int a = points[i].second - points[i].first + 2;
				int b = points[i+1].second - points[i+1].first + 2;
				int win = max(a,b);
				ans = max(win, ans);
			}
		}
	}

	if(ans == count_g + 1) ans--;
	printf("%d\n", ans);
}