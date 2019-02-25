#include <bits/stdc++.h>
using namespace std;

int main() {

	int q; cin >> q;
	int original_q = q;
	
	q++;
	getchar();

	while(q--) {
		string tree;
		map<string, int> trees;
		int total_trees = 0;
		while(true) {
			getline(cin, tree);
			if (tree.empty()) break;
			trees[tree]++;
			total_trees++;
		}

		for (auto i : trees) {
			cout << fixed << setprecision(4) << i.first << " " << (i.second/(double)total_trees) * 100 << endl;
		}

		if(q != original_q and q != 0) cout << endl;
	}
}