#include <bits/stdc++.h>
using namespace std;

int numbers[1000];

int main() {
        int n, k;
        cin >> n >> k;

        for(int i = 1; i <= n; i++) cin >> numbers[i];

        int limit = numbers[k];
        int ans = 0;
        
        for(int i = 1; i <= n; i++) {
                if(numbers[i] >= limit and numbers[i] > 0) ans++;
        }

        cout << ans << endl;
}