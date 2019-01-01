#include <bits/stdc++.h>
using namespace std;

#define left(node) 2 * node
#define right(node) 2 * node + 1
#define inf 0x3f3f3f3f
#define N 100100

/*
	Representation of the segment tree
	The segment tree is a binary tree. Binary trees can be easily represented
	using a vector:

	The tree vector will work like this:
	- Position 1 represents the root of the tree
	- A left child is represented by -> 2 * current_node
	- A right child is represented by -> 2 * current_node + 1

	In the segment tree, the root represents the range from [1, n] of the original vector. 
	Its left child represents the first half of the elements [1, n/2] and the other child 
	represents the other half [n/2 + 1, n]. This goes on until we reach a range that begins and
	ends at the same position.
*/

int values[N];
int segtree[4*N];

/*
	Building the segment tree
	The simplest way to build a segment tree is recursevely follow the algorithm above.
	We start looking at range [1, n], we then divide it to a point where each interval represents
	a single value of the original vector. At this point, we exit the recursion and evaluate what
	we are interested in. It's easier to understand by looking at the code:
*/
void build(int node, int start, int end) {
	if (start == end) {
		segtree[node] = values[start];

	} else {
		int mid = (start+end)/2;
		build(left(node), start, mid);
		build(right(node), mid + 1, end);

		// Here we decide what our segtree will evaluate, in this case we'll go with maximum value.
		segtree[node] = max(segtree[left(node)], segtree[right(node)]);
	}
}

/*
	Updating the segment tree
	When updating the segment tree, we will only move the recursion to the index
	we want to update. This segment tree works with single index update, if you want
	a segment tree that can update a range, you should use Lazy Propagation. I also
	have a code of a segment tree with lazy propagation if you need it.
*/
void update(int n, int start, int end, int idx, int new_value) {
	int mid = (start+end)/2;

	if(start == end) {
		values[idx] = new_value;
		segtree[node] = new_value;
	}

	if(start <= idx and idx <= mid) {
		update(left(n), start, mid, idx, new_value);

	} else {
		update(right(n), mid+1, end, idx, new_value);
	}

	segtree[node] = max(segtree[left(n)], segtree[right(n)]);
}

/*
	Simple query
	Let's suppose we want to know the maximum value in range [l, r].
	We need to see if the desired interval overlaps the interval covered by the current node
	of the segment tree. Let's denote the interval covered by the node we are currently 
	looking at as [s, e]. There are three possible cases:

	1. Partial overlap
	Here, [l, r] overlaps, but not completely, [s, e]. In this case we must look at
	our current node's both children.
	
	2. Total overlap
	Here, [l, r] totally overlaps [s, e]. That means that the interval covered by the node we are
	currently looking at is completely inside our desired range -> [s, e] is inside [l, r], so
	it must be part of our answer. Return its value.

	3. No overlap
	Here, [l, r] doesn't overlap [s, e] at all. In this case we return something that will not
	change our final result.
	In a maximum segment tree, we return a very small element, like -inf.
	In a minimum segment tree, we return a very large element, like inf.
	In a sum segment tree, we return 0.
*/
int query_max(int n, int start, int end, int l, int r) {
	int nl, nr, mid = (start+end)/2;

	/* No overlap */
	if(r < start or l > end) {
		return -inf;
	}

	/* Total overlap */
	if(start <= l and r <= end) {
		return segtree[n];
	}

	/* If we reached this point, it's a partial overlap */
	nl = query_max(left(n), start, mid, l, r);
	nr = query_max(right(n), mid+1, end, l, r);

	return max(nl, nr);
}
