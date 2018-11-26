#include <bits/stdc++.h>
using namespace std;

int freq[3000];
vector<string> lamps;

int main() {
        int lines, nlamps;      cin >> lines >> nlamps;

        // getting input
        for(int i = 0; i < lines; i++) {
                string lamp;    cin >> lamp;
                lamps.push_back(lamp);
        }

        // filling the frequency vector
        for(auto i : lamps) {
                for(int j = 0; j < nlamps; j++) {
                        if(i[j] == "1") freq[j]++;
                }
        }

        // checking if lamp is useful
        for(auto i : lamps) {
                bool useful = false;
                for(int j = 0; j < nlamps; j++) {
                        if(freq[j] - (i[j] - "0") == 0) useful = true;
                }

                if(useful == false) {
                        cout << "YES" << endl;
                        return 0;
                }
        }

        cout << "NO" << endl; 

        //for(int i = 0; i < nlamps; i++) cout << freq[i] << " ";
}