#include <stdio.h>
#include <stdlib.h>

void insertionSort( int arr[], int size )
{
    for( int i=0; i < size ; i++ ){ // N
        for ( int j = 0 ; j < size; j++ ){ // N
            if( arr[i] < arr[j] ){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main( void )
{
    int arr[] = {  25, 2 , 4 , 1, 10, 9 };
    int i, j;
    int size = sizeof( arr ) / sizeof( arr[0] );

    insertionSort( arr, size );
    for ( i=0; i<size; i++ ){
        printf(" %d ", arr[i] );
    }
}
