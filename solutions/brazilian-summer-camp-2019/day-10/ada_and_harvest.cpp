#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename tA, typename tB=null_type> using ord_set = tree<tA, tB, less<tA>, rb_tree_tag, tree_order_statistics_node_update>;

map<int, ord_set<int> > vegetables;
int furrow[200100];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, q; cin >> n >> q;

	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		furrow[i] = x;
		vegetables[x].insert(i);
	}

	for(int i = 0; i < q; i++) {
		int position, new_veg;
		cin >> position >> new_veg;

		int current_veg = furrow[position];
		vegetables[current_veg].erase(position);

		cout << vegetables[new_veg].order_of_key(position) << endl;

		furrow[position] = new_veg;
		vegetables[new_veg].insert(position);
	}
}