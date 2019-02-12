#include <bits/stdc++.h>
using namespace std;

/*
0 -> descanso: 0
1 -> contest: 1
2 -> sports: 1

we want max of sports + contests that implies minimum rest

*/

int n;
int days[110];
int dp[110][3];

long long go(int i, int lastDay) {
	if(dp[i][lastDay] != -1) return dp[i][lastDay];

	if(i > n-1) {
		//printf("end\n");
		return dp[i][lastDay] = 0;
	}

	// no contest and no gym -> rest and go to next day
	if(days[i] == 0){
		//printf("can"t do anything\n");
		return dp[i][lastDay] = go(i+1, 0);
	} 

	// only contest -> do contest if no contest happened on the last day
	if(days[i] == 1 and lastDay != 1){
		//printf("days[i] == 1 and lastday != 1\n");
		return dp[i][lastDay] = max(1 + go(i+1, 1), go(i+1, 0));
	}
	else if(days[i] == 1 and lastDay == 1){
		//printf("days[i] == 1 and lastday == 1\n");
		return dp[i][lastDay] = go(i+1, 0);
	}

	// only gym -> go to the gym if no gym last day
	if(days[i] == 2 and lastDay != 2){
		//printf("days[i] == 2 and lastday != 2\n");
		return dp[i][lastDay] = max(1 + go(i+1, 2), go(i+1, 0));
	}
	else if(days[i] == 2 and lastDay == 2){
		//printf("days[i] == 2 and lastday == 2\n");
		return dp[i][lastDay] = go(i+1, 0);
	}

	// gym or contest
	if(days[i] == 3 and lastDay == 0) return dp[i][lastDay] = max(1 + go(i+1, 2), 1 + go(i+1, 1));
	else if(days[i] == 3 and lastDay == 1) return dp[i][lastDay] = max(1 + go(i+1, 2), go(i+1, 0));
	else if(days[i] == 3 and lastDay == 2) return dp[i][lastDay] = max(1 + go(i+1, 1), go(i+1, 0));

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	memset(dp, -1, sizeof dp);
	
	cin >> n;

	for(int i = 0; i < n; i++) 
		cin >> days[i];

	printf("%d\n", n - go(0, 0));

} 