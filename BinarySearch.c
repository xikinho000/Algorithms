#include <stdio.h>
// log(N)
void BinSearch(int arr[], int low, int high, int key){
    int mid = low + (high - low) / 2;
    if(arr[mid] == key){
        printf("Key found @  index %d \n", mid);
        return;
    }
    if(arr[mid] < key){
        BinSearch(arr, mid+1, high, key);
    }
    if(arr[mid] > key){
        BinSearch(arr, low, mid-1, key);
    }
}

int main()
{
    int arr[] = {1, 2,3,4,5,6,7,8,9,12,13,14,15,165};
    BinSearch(arr, 0, sizeof(arr)/sizeof(arr[0]), 4);

}
