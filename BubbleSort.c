#include <stdio.h>


int bubbleSort(int *arr, int size)
{
    int temp = 0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    int arr[5] = {5,4,3,2,1};

    bubbleSort(arr, sizeof(arr)/sizeof(arr[0]));
    printArray(arr,sizeof(arr)/sizeof(arr[0]));

    return 0;
}