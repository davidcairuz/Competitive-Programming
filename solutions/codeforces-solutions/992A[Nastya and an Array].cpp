#include <bits/stdc++.h>
using namespace std;

int v[100100];
set<int> counta;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, x;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x != 0) counta.insert(x);
    }
    
    cout << counta.size() << endl;
    
}