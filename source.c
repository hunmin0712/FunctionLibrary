#include<stdio.h>  
#include"lib.h"   
int main(){
	int month;
	int years;
	int day = 0;
	int print_day;
	scanf("%d %d", &years, &month);
	for (int i = 1970; i < years; i++) {
		day += 365;
		if ((i % 4) == 0 && (i % 100) != 0 || (i % 400) == 0) {
			day++;
		}
	}
	for (int i = 1; i < month; i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
			day += 31;
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11) {
			day += 30;
		}
		else if(i==2){
			day += 28;
			if ((years % 4) == 0 && (years % 100) != 0 || (years % 400) == 0) {
				day++;
			}
		}
	}
	return 0;
}