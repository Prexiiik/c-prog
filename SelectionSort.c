#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int MAX = 12;
int arr[3];
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    { min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
           if(min_idx != i)
            swap(&arr[min_idx], &arr[i]);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    srand(time(NULL));
    for (int i = 0; i < MAX; i++){
        arr[i] = rand() % 100;
    }
    printf("Array: \n");
    printArray(arr, MAX);
    selectionSort(arr, MAX);
    printf("Sorted array: \n");
    printArray(arr, MAX);
    return 0;
}