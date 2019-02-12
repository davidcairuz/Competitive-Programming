#include <bits/stdc++.h>
using namespace std;

int main() {

        long long n;    cin >> n;

        if(n % 2 == 0) {
                cout << n/2 << endl;
                return 0;
        }

        long long neg = ((-1 - (n % 2 == 0 ? n-1 : n)) * (n % 2 == 0 ? n/2 : n/2+1)) / 2;
        long long pos = ((2 + (n % 2 == 0 ? n : n-1)) * (n/2)) / 2;
        cout << pos + neg << endl;
        
}