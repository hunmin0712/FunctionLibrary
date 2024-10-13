#include<stdio.h>  
#include"lib.h"   
#pragma warning(disable:4996)
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
	if (day % 7 == 0) {
		printf("            ");
	}
	else if (day % 7 == 1) {
		printf("               ");
	}
	else if (day % 7 == 2) {
		printf("                  ");
	}
	else if (day % 7 == 4) {
		printf("   ");
	}
	else if (day % 7 ==5) {
		printf("      ");
	}
	else if (day % 7 == 6) {
		printf("         ");
	}
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		print_day= 31;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		print_day= 30;
	}
	else if (month == 2) {
		print_day= 28;
		if ((years % 4) == 0 && (years % 100) != 0 || (years % 400) == 0) {
			print_day++;
		}
	}
	for (int i = 1; i < print_day; i++) {
		printf("%3d ", i);
		if (day % 7 == 2) {
			printf("\n");
		}
		day++;
	}
	return 0;
}