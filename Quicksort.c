#include <stdio.h>
#include <stdlib.h>

// Macro for array size
#define ArrSize(arr) sizeof(arr)/sizeof(arr[0])

void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
};

int cmp(int x, int y)
{
    return x < y;
};

int partition(int arr[], int low, int high)
{
    int lowIndex = low;
    int highIndex = high + 1;
    while(1){
        while(cmp(arr[++lowIndex], arr[low]))
            if(lowIndex == high) break;
        
        while(cmp(arr[low], arr[--highIndex]))
            if(highIndex == low) break;
        
        if(lowIndex >= highIndex)
            break;
        swap(arr, lowIndex, highIndex);
    }
    swap(arr, low, highIndex);
    return highIndex;
};

void quicksort(int arr[], int low, int high)
{
    if(low>=high) return;
    int pivot = partition(arr, low, high);
    quicksort(arr, low, pivot - 1);
    quicksort(arr, pivot + 1, high);
};

void print(int data[], int s)
{
    printf("Printing sorted array of %d element(s). \n", s);
    for(int i=0; i<s; i++)
        printf("%d - ", data[i]);
}

int main()
{
    int data [] = {55, 44, 33, 110, 100, 101, 46};
    quicksort(data, 0 , ArrSize(data));
    print(data, ArrSize(data));
    return 1;
}
