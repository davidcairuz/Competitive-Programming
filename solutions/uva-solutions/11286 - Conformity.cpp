#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;

	while(cin >> n, n != 0) {
		map<string,int> freq;

		for(int i = 0; i < n; i++) {
			vector<string> courses;

			for(int i = 0; i < 5; i++) {
				string s; cin >> s;
			       	courses.push_back(s);
			}
			
			sort(courses.begin(), courses.end());
			string string_hash = "";

			for(int i = 0; i < 5; i++) string_hash += courses[i];
			freq[string_hash]++;
		}

		int most_popular = 0;
		int ans = 0;

		for(auto i : freq) most_popular = max(most_popular, i.second);
		for(auto i : freq) (i.second == most_popular ? ans += i.second : ans = ans);
		
		cout << ans << endl;
	}
}
