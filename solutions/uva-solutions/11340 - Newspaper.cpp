#include <bits/stdc++.h>
using namespace std;

int cost[500];

int main() {
        int q; cin >> q;

        while(q--) {
                memset(cost, 0, sizeof cost);
                int paid; cin >> paid;

                for(int i = 0; i < paid; i++){
                        unsigned char a; int value;
                        cin >> a >> value;

                        cost[(int)a] = value;
                }

                int lines; cin >> lines;
                long long total_cents = 0;

                for(int i = 0; i < lines; i++) {
                        char line[12000];
                        cin.getline(line, 12000, '\n');

                        if(line[0] == '\0' and i == 0) {
                                i--; continue;
                        }

                        for(int j = 0; j < 12000; j++) {
                                if (line[j] == '\0') break;
                                int k = (unsigned char)line[j];
                                total_cents += cost[k];
                         }
                }

                cout << total_cents/100 << "." << setfill('0') << setw(2) <<  total_cents%100 << "$" << endl;
        }
}      
