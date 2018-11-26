#include <bits/stdc++.h>
using namespace std;

vector<int> position;

int main() {

	long long n, l;
	double maxDist = 0;
	double minL = 0x3f3f3f3f;
	double maxL = 0;

	cin >> n >> l;

	for(int i = 0; i < n; i++) {
		int x;	cin >> x;
		position.push_back(x); 
	}

	sort(position.begin(), position.end());

	maxL = position[n-1];
	minL = position[0];

	if(l - maxL > maxDist) maxDist = l - maxL;
	if(minL > maxDist) maxDist = minL;

	for(int i = 0; i < position.size() - 1; i++) {
		double dist = (position[i+1] - position[i]) / 2.0;
		if(dist > maxDist) maxDist = dist;
	}

	printf("%lf", maxDist);
  
}