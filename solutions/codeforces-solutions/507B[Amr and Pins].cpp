#include <bits/stdc++.h>
using namespace std;

int main(){
	int r, x, y, xn, yn;
	double dist;
	cin >> r >> x >> y >> xn >> yn;
	dist = sqrt((pow((x-xn), 2) + pow((y-yn), 2)));
	cout << (int)(ceil((dist/r/2)));
	return 0;

}