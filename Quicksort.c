#include <stdio.h>
#include <stdlib.h>

void swap( int v[], int i, int j )
{
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int cmp(int x, int y){
    return x < y;
}

void quicksort1( int v[], int n )
{
    int i, last;
    if( n <= 1 ) return;

    swap(v, 0, rand() % n );
    last = 0;
    for( i=1; i<n; ++i ) // n
        if( cmp( v[i], v[0] ) ) // 1
            swap( v, ++last, i ); // 1
    swap( v, 0, last ); // 1
    last = 0; // 1
    quicksort1( v, last );
    quicksort1( v+last+1, n-last-1 );
} 

int main( void )
{
    int arr[] = {  25, 2 , 4 , 1, 10, 9 };
    int i, j;
    size_t size = sizeof( arr ) / sizeof( int );

    quicksort1( arr, size );
    for ( i=0; i<size; i++ ){
        printf(" %d ", arr[i] );
    }
}
