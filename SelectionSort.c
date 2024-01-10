#include <stdio.h>


int selectionSort(int *arr, int size)
{
    int current_min = 0;
    int current_item = 0;

    for(int j=0;j<size;j++)
    {
        current_min = j;

        for(current_item = current_min + 1; current_item < size; current_item++)
        {
            if(arr[current_item] < arr[current_min])
            {
                current_min = current_item;
            }
        }

        if(current_min != j)
        {
            int temp = arr[j];
            arr[j] = arr[current_min];
            arr[current_min] = temp;
        }
    }
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

    selectionSort(arr, size);

    printArray(arr, size);
    return 0;
}