#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int> numbers;
int ans = 0;

int main() {
	int n, sum = 0;
	cin >> n;

	for(int i = 0; i < n; i++) {
		int x;	
		cin >> x;
		numbers.push_back(x);
		sum += x;
	}

	sort(numbers.begin(), numbers.end());
	bool divisible = (sum % n == 0);

	int desired_value;
	int from_now_on = 0x3f3f3f3f;

	desired_value = sum / n;

	// from this point on, desired value += 1
	if(!divisible) from_now_on = n - (sum % n);

	// ans will consider only positive changes, because negative must match.
	for(int i = 0; i < n; i++) {
		if (i == from_now_on) desired_value++;
		int change = desired_value - numbers[i];

		if(change > 0) ans += change;
	}

	printf("%d\n", ans);
}