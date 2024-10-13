#include "lib.h"
void Swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void IntAscendingSort(int* a) {
	int size = _msize(a) / sizeof(int);
	for (int i = 0; i < size-1; i++) {
		for (int j = i+1; j < size; j++) {
			if (a[i] > a[j]) {
				Swap(&a[i], &a[j]);
			}
		}
	}
}
void IntDescendingSort(int* a) {
	int size = _msize(a) / sizeof(int);
	for (int i = 0; i < size - 1; i++) {   
		for (int j = i + 1; j < size; j++) {
			if (a[i] < a[j]) {
				Swap(&a[i], &a[j]);
			}
		}
	}
}
void IntAscendingBubbleSort(int* a) {
	int size = _msize(a) / sizeof(int);
	for (int i = 0; i < size - 1; i++){
		for (int j = 0; j < size - 1 - i; j++){
			if (a[j] > a[j + 1]){
				Swap(&a[j], &a[j+1]);
			}
		}
	}
}
void IntDescendingBubbleSort(int* a) {
	int size = _msize(a) / sizeof(int);
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (a[j] < a[j + 1]) {
				Swap(&a[j], &a[j+1]);
			}
		}
	}
}