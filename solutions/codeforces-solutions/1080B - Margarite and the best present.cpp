#include <bits/stdc++.h>
using namespace std;

long long neg_sum(long long start, long long num_of_terms) {
	int last = -start - 2*(num_of_terms-1);
	return (-start + last) * num_of_terms/2;
}

long long pos_sum(long long start, long long num_of_terms) {
	int last = start + 2*(num_of_terms - 1);
	return (start + last) * num_of_terms/2;
}

int main() {
	int t;
	cin >> t;

	while(t--) {
		long long l, r, ans;
		cin >> l >> r;

		long long range = r - l + 1;

		long long pos_terms = range/2;
		long long neg_terms = range/2;

		if(range & 1 and l & 1) neg_terms++;
		else if(range & 1 and l % 2 == 0) pos_terms++;

		if(l & 1) {
			ans = neg_sum(l, neg_terms) + pos_sum(l+1, pos_terms);
		} else {
			ans = pos_sum(l, pos_terms) + neg_sum(l+1, neg_terms);
		}

		cout << ans << endl;
	}
}