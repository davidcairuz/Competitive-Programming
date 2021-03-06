#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int isPrime(ll n){
	while(n%2 == 0) n/=2;
	for(int i = 3; i*i <= n; i+=2){
		if(n%i == 0) return 0;
	}

	return 1;
}

int main(){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	ll n, ans = 0;

	cin >> n;

	if(n % 2 == 0 && n != 2) ans = 2;
	else if(isPrime(n)) ans = 1;
	else if(isPrime(n-2)) ans = 2;
	else ans = 3;

	cout << ans << endl;

	return 0;
}