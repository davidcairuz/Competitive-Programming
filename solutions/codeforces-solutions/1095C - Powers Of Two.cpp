#include <bits/stdc++.h>
using namespace std;

string toBinary(int n) {
	string r;
	while(n!=0) {
    		r = (n % 2 == 0 ?"0":"1") + r; 
    		n/=2;
    	}

    	return r;
}

vector<int> v;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	string binary = toBinary(n);
	reverse(binary.begin(), binary.end());

	int curr = 1;
	for(int i = 0; i < binary.size(); i++) {
		if(binary[i] == "1") v.push_back(curr);
		curr *= 2;
	}

	if(v.size() > k) {
		cout << "NO" << endl;
		return 0;
	}

	bool entered = true;
	while(v.size() < k) {
		entered = false;
		for(int i = v.size() - 1; i >= 0; i--) {
			if(v[i] % 2 == 0 and v[i] != 1 and (double)log2(v[i]/2) - floor(log2(v[i]/2)) == 0) {
				entered = true;
				v[i] = v[i]/2;
				v.push_back(v[i]);
			}

			if(v.size() == k) break;
		}
		if(!entered) break;
	}

	if(!entered) cout << "NO" << endl;
	else {
		cout << "YES" << endl;
		for(auto i:v) cout << i << " ";

	}
}