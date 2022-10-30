#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int MAX = 10;
int arr[3];

 
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
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
    bubbleSort(arr, MAX);
    printf("Sorted array: \n");
    printArray(arr, MAX);
    return 0;
}