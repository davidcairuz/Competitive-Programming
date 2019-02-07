#include <bits/stdc++.h>
using namespace std;

double fat(double n){
	double factorial = 1;

	for(double i = 1; i <=n; ++i){
        	factorial *= i;
        }    
        return factorial;
}

int main() {
	double n, m;
	while(cin >> n >> m){
		if(n == 0 and m == 0) break;
		double cut_value = max(n-m, m);
		
		int cut_option;
		if (n - m > m) cut_option = 1;
		else cut_option = 2;

		double partial = 1;
		for(double i = n; i > cut_value; i--) partial *= i;

		double ans;
		if(cut_option == 1) ans = partial/fat(m);
		if(cut_option == 2) ans = partial/fat(n-m);

		cout << fixed << setprecision(0) << n << " things taken " << m << " at a time is " << ans << " exactly." << endl;
	}
}
