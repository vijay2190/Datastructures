#include <stdio.h>


int insertionSort(int *arr, int size)
{

    int key = 0;
    int j = 0;

    for(int i = 1; i< size; i++)
    {
        key = arr[i];
        j = i - 1;

        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }

        arr[j+1] = key;
    }
    return 0;
}


int printArray(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


int main()
{
    int arr[10] = {9,8,7,6,5,4,3,2,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);


    insertionSort(arr,size);
    printArray(arr,size);

    return 0;
}