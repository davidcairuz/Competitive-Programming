#include <bits/stdc++.h>
using namespace std;

int cnt[5];
int sum[5];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	string s; cin >> s;

	for(int i = 0; i < n; i++) {
		cnt[s[i] - "0"]++;
	}

	int must_be = n/3;
	bool dec = false;
	
	int i = 0;
	while(cnt[2] > must_be) {
		if(s[i] == "2"){
			s[i] = "#";
			cnt[2]--;
		}
		i++;
	}

	dec = false;
	if(cnt[0] < must_be) i = 0;
	else {
		dec = true; i = n - 1;
	}
	while(cnt[1] > must_be) {
		if(cnt[0] + sum[0] >= must_be and !dec) {
			i = n-1;
			dec = true;
		}

		if(s[i] == "1"){
			s[i] = "#";
			cnt[1]--;

			if(cnt[0] + sum[0] < must_be) sum[0]++;
		}
		dec ? i-- : i++;
	}

	i = n - 1;
	while(cnt[0] > must_be) {
		if(s[i] == "0"){
			s[i] = "#";
			cnt[0]--;
		}
		i--;
	}

	i = 0;
	while(cnt[0] < must_be) {
		if(s[i] == "#"){
			s[i] = "0";
			cnt[0]++;
		}
		i++;
	}

	i = 0;
	while(cnt[1] < must_be) {
		if(s[i] == "#"){
			s[i] = "1";
			cnt[1]++;
		}
		i++;
	}

	i = 0;
	while(cnt[2] < must_be) {
		if(s[i] == "#"){
			s[i] = "2";
			cnt[2]++;
		}
		i++;
	}

	cout << s << endl;
}