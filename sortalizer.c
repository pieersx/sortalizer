#include <stdbool.h>
#include "sort.h"

void swap(int *x, int *y) 
{
    int aux = *y;
    *y = *x;
    *x = aux;
}

bool shuffle(int n, int vector[]) 
{
    for (int i = 0; i < 100; ++i) {
		if (n == vector[i]) {
			return true;	    
		}
	}
    return false;    
}