#include <bits/stdc++.h>
using namespace std;

int main() {

	int q;
	while (scanf("%d", &q), q != 0) {
		int n, m;
		scanf("%d%d", &n, &m);

		while (q--) {
			int x, y;
			scanf("%d%d", &x, &y);

			if (x == n or y == m) printf("divisa\n");
			else if (x < n and y > m) printf("NO\n");
			else if (x < n and y < m) printf("SO\n");
			else if (x > n and y > m) printf("NE\n");
			else printf("SE\n");
		}
	}
}