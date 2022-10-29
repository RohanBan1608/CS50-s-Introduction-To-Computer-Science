#include <stdio.h>
#include <cs50.h>

void swap(int arr[], int arr1[])
{
    int temp = arr[];
    arr[] = arr1[];
    arr1[] = temp;
}

void bubble_sort(int arr[], int n)
{
    int i, j;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void print_array(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}


int main(void)
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr[], n);
    printf("Sorted Array:\n");
    print_array(arr[], n);
}


