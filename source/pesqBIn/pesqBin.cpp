#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

int searchBin(int array[], int size, int target) {
    int left = 0, right = size - 1; 
    while (left <= right) { 
        int mid = left + (right - left) / 2;  
        int mid_value = array[mid]; 
        if (mid_value == target) { 
            return mid; 
        } else if (mid_value < target) { 
            left = mid + 1; 
        } else { 
            right = mid - 1; 
            } 
    } 
    return -1;
}