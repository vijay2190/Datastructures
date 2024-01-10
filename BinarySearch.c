#include <stdio.h>
#include <stdlib.h>



//int mid = low + (high - low) / 2;  -> its fine avoids integer overflow

int sortAscending(const void *a, const void *b) //const void *a, const void *b
{
    return *(int *)a > *(int *)b;
}

int binarySearch(int *arr, int size, int key)
{

    int low = 0;
    int high = size -1;
    int mid = 0;

    while(low <= high)  //<=
    {
        mid = (high + low)/2;
        if(arr[mid] == key)
        {
            return mid;
        }else if(arr[mid] < key)
        {
            low = mid + 1;
        }else if(arr[mid] > key)
        {
            high = mid - 1;
        }
    }
    return -1;
}

int binarySearchRecursive(int *arr, int high, int low, int size, int key)
{
    if(low <= high)
    {
        int mid = (low + high) / 2;
        
        if(arr[mid] == key)
        {
            return mid;
        }else if(arr[mid] < key)
        {
            return binarySearchRecursive(arr,high,mid+1,size,key);
        }else
        {
            return binarySearchRecursive(arr,mid-1,low,size,key);
        }
    }

    return -1;
}

int main()
{
    int arr[10] = {8,3,2,1,5,7,23,4,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    qsort(arr,size,sizeof(arr[0]),sortAscending); //array, sizeof entire array, size of an indidual array, function

    int pos = binarySearch(arr,size,23);

    if(pos != -1)
    {
        printf("%d\n",pos);
    }

    return 0;
}