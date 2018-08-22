#include <bits/stdc++.h>
using namespace std;

int values[100100];
int tree[400100];

/* the tree is built from the leafs to the top recursively. 
*  we keep building nodes until we reach the leafs, then we
*  use the sum of their values in the parent node and build
*  the tree bottom up. */

void build(int node, int start, int end) {
	if(start == end) tree[node] = values[start]; 			/* when the interval we are looking includes only one
							 		* number we assing that value to the current node */
	else {
		int mid = (start + end) / 2;
		build(2 * node, start, mid);
		build(2 * node + 1, mid + 1, end);

		tree[node] = tree[2 * node] + tree[2 * node + 1]; 	/* assing the sum of the precalculated values 
									 * of the sons to the current node */
	}
}

void update(int node, int start, int end, int idx, int value) {
	if(start == end) {
		values[idx] = value;
		tree[node] = value;
	}

	else {
		int mid = (start + end) / 2;
		if( start <= idx and idx <= end) update(2 * node, start, mid, idx, value);
		else update(2 * node + 1, mid + 1, end, idx, value);

		tree[node] = tree[2 * node] + tree[2 * node + 1];
	}
}

int query(int node, int start, int end, int l, int r) {
	if (r < start or l > end) 	return 0;		/* no overlap, totally out of bounds */
	if (l <= start and r <= end) 	return tree[node];	/* total overlap */

	/* the other possibility is partial overlap. in this case we check the sons of the curent node: */
	int mid = (start + end) / 2;
	int p = query(2 * node, start, mid, l, r);
	int q = query(2 * node + 1, mid + 1, end, l, r);
	return p + q;
}

int main() {
	int n, m;	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> values[i];
	build(1, 1, n);

	for(int i = 0; i < m; i ++) {
		int op, x, y;	cin >> op >> x >> y;
		if(op == 0) 	 update(1, 1, n, x, y);
		else if(op == 1) query(1, 1, n, x, y);
	}
}
