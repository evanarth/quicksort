// this program shows how to quicksort floats and ints

#include <iostream>
#include <stdio.h>
#include <stdlib.h>


void quickSortFloat( float* a, int l, int r ) {
    float pivot, t;
    int i, j;
    if( l < r ) {
        pivot = a[l]; i = l; j = r+1;
        while( 1 ) {
            do ++i; while( a[i] <= pivot && i <= r );
            do --j; while( a[j] > pivot );
            if( i >= j ) break;
            t = a[i]; a[i] = a[j]; a[j] = t;
        }
        t = a[l]; a[l] = a[j]; a[j] = t;
        
        quickSortFloat( a, l, j-1);
        quickSortFloat( a, j+1, r);
    }
}

void quickSortInt( int* a, int l, int r ) {
    int pivot, t, i, j;
    if( l < r ) {
        pivot = a[l]; i = l; j = r+1;
        while( 1 ) {
            do ++i; while( a[i] <= pivot && i <= r );
            do --j; while( a[j] > pivot );
            if( i >= j ) break;
            t = a[i]; a[i] = a[j]; a[j] = t;
        }
        t = a[l]; a[l] = a[j]; a[j] = t;
        
        quickSortInt( a, l, j-1);
        quickSortInt( a, j+1, r);
    }
}
    



//==============================================================================
int main( int argc, char *argv[] ) //  RUN PROGRAM
//==============================================================================
{
    // floats
    float a[] = { 7.1, 7.0, 6.9, -7.1, -7.0, 12.1, 1.1, -2.1, 0.0, 15.0, 4.0, 11.0, 9.1, 100.0};
	printf("\n\nUnsorted array is:  ");
	for(int i = 0; i < 14; ++i)
		printf(" %4.1f ", a[i]);
	quickSortFloat( a, 0, 13);
	printf("\n\nSorted array is:  ");
	for(int i = 0; i < 14; ++i)
		printf(" %4.1f ", a[i]);
    printf("\n\n");
    
    // ints
    int b[] = { 7, 7, 6, -7, -7, 12, 1, -2, 0, 15, 4, 11, 9, 100};
	printf("\n\nUnsorted array is:  ");
	for(int i = 0; i < 14; ++i)
		printf(" %d ", b[i]);
	quickSortInt( b, 0, 13);
	printf("\n\nSorted array is:  ");
	for(int i = 0; i < 14; ++i)
		printf(" %d ", b[i]);
    printf("\n\n");
    
}
//==============================================================================
//==============================================================================
