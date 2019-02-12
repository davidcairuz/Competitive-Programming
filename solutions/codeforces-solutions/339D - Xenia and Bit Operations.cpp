#include <bits/stdc++.h>
using namespace std;

#define left(node) 2 * node
#define right(node) 2 * node + 1
#define inf 0x3f3f3f3f
#define N 132000

int values[N];
int segtree[4*N];

void build(int node, int start, int end, int operation) {
	if (start == end) {
		segtree[node] = values[start];

	} else {
		int mid = (start+end)/2;
		build(left(node), start, mid, !operation);
		build(right(node), mid + 1, end, !operation);

		if(operation == 1) segtree[node] = segtree[left(node)] | segtree[right(node)];
		else segtree[node] = segtree[left(node)] ^ segtree[right(node)];
	}
}

void update(int n, int start, int end, int idx, int new_value, int operation) {
	int mid = (start+end)/2;

	if(start == end) {
		values[idx] = new_value;
		segtree[n] = new_value;
		return;
	}

	if(start <= idx and idx <= mid) {
		update(left(n), start, mid, idx, new_value, !operation);

	} else {
		update(right(n), mid+1, end, idx, new_value, !operation);
	}

	if(operation == 1) segtree[n] = segtree[left(n)] | segtree[right(n)];
	else segtree[n] = segtree[left(n)] ^ segtree[right(n)];
}

int main() {
	int n, m;
	cin >> n >> m;

	int first_op = (n & 1);
	n = pow(2, n);

	for(int i = 1; i <= n; i++) cin >> values[i];
	build(1, 1, n, first_op);
	
	while(m--) {
		int p, b;
		cin >> p >> b;
		update(1, 1, n, p, b, first_op);

		cout << segtree[1] << endl;
	}
}
