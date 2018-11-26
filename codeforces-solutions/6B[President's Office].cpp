#include <bits/stdc++.h>
using namespace std;

char maps[110][110];

int main() {
	
	set<char> colors;
	int n, m;
	char p;
	
	cin >> n >> m >> p;
	
	for(int i = 1; i <=n; i++) {
		for(int j = 1; j <=m; j++) {
			char c; cin >> c;
			maps[i][j] = c;
		}
	}
	
	
	
	for(int i = 1; i <=n; i++) {
		for(int j = 1; j <=m; j++) {
			if(maps[i][j] == p) {
				if(maps[i][j+1] != p and colors.find(maps[i][j+1]) == colors.end() and maps[i][j+1] != "." and maps[i][j+1] != "\0") colors.insert(maps[i][j+1]);
				if(maps[i][j-1] != p and colors.find(maps[i][j-1]) == colors.end() and maps[i][j-1] != "." and maps[i][j-1] != "\0") colors.insert(maps[i][j-1]);
				if(maps[i+1][j] != p and colors.find(maps[i+1][j]) == colors.end() and maps[i+1][j] != "." and maps[i+1][j] != "\0") colors.insert(maps[i+1][j]);
				if(maps[i-1][j] != p and colors.find(maps[i-1][j]) == colors.end() and maps[i-1][j] != "." and maps[i-1][j] != "\0") colors.insert(maps[i-1][j]);
			}
		}
	}
	
	cout << colors.size() << endl;
}
