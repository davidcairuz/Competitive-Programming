#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	int scenario = 0;
	while(cin >> t, t != 0) {
		scenario++;
		cout << "Scenario #" << scenario << endl;

		queue<int> individual_queue[1010];
		queue<int> whole_queue;
		unordered_map<int, int> team_of;

		for (int i = 0; i < t; i++) {
			int n; cin >> n;
			
			while(n--) {
				int x; cin >> x;
				team_of[x] = i;		
			}
		}

		string command = "START";
		while (cin >> command, command[0] != 'S') {
			
			if (command[0] == 'E') {
				int person; cin >> person;
				int team = team_of[person];
				
				if (individual_queue[team].empty()) {
					whole_queue.push(team);
				}

				individual_queue[team].push(person);

			} else {
				int first_team = whole_queue.front();
				cout << individual_queue[first_team].front() << endl;
				individual_queue[first_team].pop();

				if (individual_queue[first_team].empty()) whole_queue.pop();
			}
		}

		cout << endl;
	}
}
