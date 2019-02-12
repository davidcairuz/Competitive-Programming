#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mk make_pair
#define inf 0x3f3f3f3f

int vet[1000];

int main() {
	int n, pos;
	int ans = 0;
	cin >> n >> pos;

	for(int i = 1; i <= n; i++) {
		cin >> vet[i];
	}


	if(vet[pos] == 1){
		ans++;
	} 

	int dist = max(n - pos, pos);
	int left = pos;
	int right = pos;

	for(int i = 0; i < dist; i++) {
		if(left >= 1) 	left--;
		if(right <= n) 	right++;

		if(vet[left] + vet[right] == 2) ans += 2;
		else if(left == 0 and vet[right] == 1) ans++;
		else if(right == n+1 and vet[left] == 1) ans++;
		//printf("No ponto (%d, %d) o policial pegou %d bandidos\n", left, right, ans);
	}
	
	cout << ans << endl;
	
}
