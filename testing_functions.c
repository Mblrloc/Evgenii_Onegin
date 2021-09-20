#include <stdio.h>
#include "testing_functions.h"

extern bool test;

void mbl_qs(char s_arr[], int first, int last) {
    if (last > first) {
        int left = first, right = last, pivot = first;
        char middle = s_arr[pivot];
		while (left < right) {
            while(s_arr[left] <= middle && left <= last) {
                left++;

            }
            while(s_arr[right] >= middle && right >= first) {
                right--;

            }
            if (left < right) {
				swap(s_arr, left, right);

            }
        }
		printf("%s\n", s_arr);
		printf("%i %i %i %i\n", left, right, first, last);
		swap(s_arr, right, pivot);
        mbl_qs(s_arr, first, right - 1);
        mbl_qs(s_arr, right + 1, last);
    }

}

void swap(char *arr, int left, int right){
    char buf = arr[left];
    arr[left] = arr[right];
    arr[right] = buf;

}