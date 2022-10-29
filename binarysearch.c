#include <stdio.h>
#include <cs50.h>

int binary_search(int arr[], int first, int last, int x);

int main(void)
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int x = get_int("Number to be searched:");
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, 0, n-1, x);
    if(result == -1)
    {
        printf("Not found!\n");
    }
    else
    {
        printf("Element found at index %d\n", result);
    }
}

int binary_search(int arr[], int first, int last, int x)
{
    if(first > last)
    {
        return -1;
    }
    int mid = (first+last)/2;
    if(arr[mid] == x)
    {
        return mid;
    }
    if(arr[mid] < x)
    {
        return binary_search(arr, mid + 1, last, x);
    }
    if(arr[mid] > x)
    {
        return binary_search(arr, first, mid - 1, x);
    }
    else
    {
        return -1;
    }
}