#include <bits/stdc++.h>
using namespace std;

int main() {
	int q; cin >> q;

	while(q--) {
		map<char, int> cents;
		int paid; cin >> paid;

		for(int i = 0; i < paid; i++){
			char a; int value;
			cin >> a >> value;

			cents[a] = value;
		}
		
		string line;
		int lines; cin >> lines;
		
		int total_cents = 0;

		for(int i = 0; i < lines; i++) {
			getline (cin, line);

        	        for(int i = 0; i < line.size(); i++) {
                	        if (cents[line[i]]) total_cents += cents[line[i]];
               		 }
	
		}

		cout << total_cents/100 + "." + total_cents - total_cents/100 + "$" << endl;
	}
}
