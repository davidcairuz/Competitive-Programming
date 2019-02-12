#include <bits/stdc++.h>
using namespace std;

#define pb push_back

char g[1010][1010];
int a[1010][1010];

bool is_stroke(int x, int y) {
	if(g[x-1][y] == "#" and g[x+1][y] == "#" and g[x][y+1] == "#" and g[x][y-1] == "#" and 
		g[x-1][y-1] == "#" and g[x+1][y+1] == "#" and g[x+1][y-1] == "#" and g[x-1][y+1] == "#") return true;
	else return false;
}

void fill(int x, int y) {
	a[x-1][y] = a[x+1][y] = a[x][y+1] = a[x][y-1] = a[x-1][y-1] = a[x+1][y+1] = a[x+1][y-1] = a[x-1][y+1] = 1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int total_ink = 0;
	int count_ink = 0;

	int n, m;
	cin >> n >> m;

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin >> g[i][j];
		}
	}

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			
			if(is_stroke(i, j)) {
				fill(i, j);
			}
		}
	}

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			
			if((a[i][j] != 1 and g[i][j] == "#") ) {
				return !printf("NO\n");
			}
		}
	}

	printf("YES\n");
}