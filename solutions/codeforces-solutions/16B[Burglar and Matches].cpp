#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
vector<pii> matches;

int main(){
	int n, m;
	int amount, matchboxes;
	
	cin >> n >> m;
	
	for(int i = 0; i < m; i++) {
		cin >> amount >> matchboxes;
		matches.push_back(make_pair(matchboxes, amount));
	}
	
	sort(matches.rbegin(), matches.rend());
	long long sum = 0;
	
	for(int i = 0; i < matches.size();) {
		while(matches[i].second > 0) {
			if(n == 0) {
				cout << sum << endl;
				return 0;
			}
			//printf("pegando uma caixa de %d fosforos no lote de %d caixas\n", matches[i].first, matches[i].second);
			sum += matches[i].first;
			matches[i].second--;
			n--;
		}
		i++;
	}
	
	cout << sum << endl;
	return 0;
	
}
