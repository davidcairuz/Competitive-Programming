#include <bits/stdc++.h>
using namespace std;

int main() {
	int hour, minutes, add_minutes;
	
	scanf("%d:%d", &hour, &minutes);
	scanf("%d", &add_minutes);

	int add_to_hour = add_minutes/60;
	add_minutes = add_minutes % 60;

	if(minutes + add_minutes > 59) {
		add_to_hour++;
		add_minutes = (minutes + add_minutes) % 60;
		minutes = 0;
	}

	hour += add_to_hour;
	hour = hour % 24;
	minutes += add_minutes;
	minutes = minutes % 60;

	printf("%02d:%02d\n", hour, minutes);
	
}