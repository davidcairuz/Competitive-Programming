#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f; 
typedef long long ll;
typedef pair<int,int> pii;

#define eb emplace_back
#define pb push_back
#define watch(x) cout << #x << " is " << x << endl
long long n;

vector<long long> divisors;
vector<long long> ans;

void getDivisors(long long n) { 
	for (long long i = 1; i * i <= n; i++) { 
    		if (n % i == 0) {  
    			if (n/i == i)
    				divisors.pb(i);
    			else {
    				divisors.pb(i);
    				divisors.pb(n/i); 
    			}
    		} 
    	} 
}

long long pa(long long k) {
	long long terms = n/k;
	long long last = 1 + (terms-1) * k;
	ans.pb((1 + last) * terms/2);
}

int main() {
	cin >> n;
	getDivisors(n);

	for(long long i = 0; i < divisors.size(); i++) {
		if(divisors[i] == n) ans.pb(1);
		else pa(divisors[i]);
	}

	sort(ans.begin(), ans.end());
	for(long long i:ans) cout << i << " ";
}