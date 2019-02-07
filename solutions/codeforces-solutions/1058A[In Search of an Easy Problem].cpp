#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum = 0;
    int n;  cin >> n;
    
    for(int i = 0; i < n; i++) {
        int x;  cin >> x;
        sum+=x;
    }
    
    if(sum == 0) cout << "EASY\n";
    else cout << "HARD\n";
}