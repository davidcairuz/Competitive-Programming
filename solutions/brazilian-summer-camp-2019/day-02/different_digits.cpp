#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define inf 0x3f3f3f3f

int repeated(int n) {
    set<int> digits;
    while(n > 0) {
        int digit = n % 10;
        if(digits.find(digit) != digits.end()) return false;

        digits.insert(digit);
        n /= 10;
    }  

    return true;
} 

int main() {
    int n, m;
    
    while(cin >> n >> m) {
        int ans = 0;
        for(int i = n; i <= m; i++) {
            ans += repeated(i);
        }

        cout << ans << endl;
    }
}
