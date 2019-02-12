#include <bits/stdc++.h>
using namespace std;

int main() {

	double pay, loan;
	int months, n;

	while(scanf("%d%lf%lf%d", &months, &pay, &loan, &n), months >= 0) {
		
		double monthly_pay = loan/months;
		map<int, double> depreciation;
		
		for(int i = 0; i < n; i++) {
			int month; double percent;
			scanf("%d%lf", &month, &percent);
			depreciation[month] = percent;
		}

		double car_value = loan + pay;
		double current_depreciation = depreciation[0];

		car_value = car_value - (current_depreciation * car_value);
		if (car_value > loan){
			printf("0 months\n");

		} else {
			for (int i = 1; i <= months; i++) {
				if (depreciation[i]) current_depreciation = depreciation[i];
				car_value = car_value - (current_depreciation * car_value);
				loan -= monthly_pay;

				if (car_value > loan) {
					if (i == 1) printf("1 month\n");
					else printf("%d months\n", i);
					break;
				}
			}
		}
	}
}