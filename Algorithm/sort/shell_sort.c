#include "sort.h"

void
shell_sort(int *array, int sz) {
	int gap, i, j, temp;
	for(gap = sz >> 1; gap > 0; gap >>= 1) {
		for(i = gap; i < sz; i ++) {
			temp = array[i];
			for(j = i - gap; j >= 0 && array[j] > temp; j -= gap) {
				array[j + gap] = array[j];
			}
			array[j + gap] = temp;
		}
	}
}
