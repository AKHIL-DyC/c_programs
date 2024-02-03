#include <stdio.h>

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int left, int right, int key)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    int size, key,result;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    int o = 0;
    while (o < 3)
    {   printf("Enter the element to search: ");
        scanf("%d", &key);
        printf("which search \n1)linear\n2)binary\n");
        scanf("%d", &o);
        switch (o)
        {
        case 1:
             result = linearSearch(arr, size, key);
            if (result != -1)
                printf("Element %d found at index %d\n", key, result);
            else
                printf("Element %d not found in the array\n", key);
            break;

        case 2:
             result = binarySearch(arr, 0, size - 1, key);
            if (result != -1)
            {
                printf("Element %d found at index %d\n", key, result);
            }
            else
            {
                printf("Element %d not found in the array\n", key);
            }

        default:
            printf("exiting..");
            break;
        }
    }
    return 0;
}