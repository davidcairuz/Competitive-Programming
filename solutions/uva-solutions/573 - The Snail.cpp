#include <bits/stdc++.h>
using namespace std;

void snail(double height, double distance, double down, double fatigue) {
	double decrease = (fatigue * distance)/100;
	double current_position = 0;
	int day = 0;

	while(true) {
		day++;
		current_position += distance;
		distance = max(0.0, distance - decrease);

		if (current_position > height) {
			printf("success on day %d\n", day);
			return;
		}

		current_position -= down;

		if (current_position < 0 and day != 0) {
			printf("failure on day %d\n", day);
			return;
		}
	}
}

int main() {
	double height, down, fatigue;
	double distance;

	while(scanf("%lf%lf%lf%lf", &height, &distance, &down, &fatigue), height != 0) {
		snail(height, distance, down, fatigue);
	}	
}
