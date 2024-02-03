#include <stdio.h>
void display(int arr[], int n)
{   printf("\n");
    for (int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int bubblesort(int arr[15], int n)
{
    int flag = 0, temp;
    for (int i = 0; i < n, flag == 0; i++)
    {
        flag = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 0;
            }
        }
    }
}

void insertionSort(int arr[], int n)
{
    int key, j, i = 1;
    while (i < n)
    {
        key = arr[i];
        j = i;
        while (j > 0 && arr[j - 1] > key)
        {
            arr[j] = arr[j - 1];
            j = j - 1;
        }
        arr[j] = key;
        printf("\nPass %d: ", i);
        for (int k = 0; k < n; k++)
            printf("%d ", arr[k]);
        printf("\n");
        i = i + 1;
    }
}

void selectionsort(int arr[], int n)
{
    int min, temp;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
        printf("\nSorting process: ");
        display(arr, n);
    }
}

int partition(int a[], int lb, int ub)
{
    int pivot, start, end, temp;
    pivot = a[lb];
    start = lb;
    end = ub;
    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while (a[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }
    temp = a[lb];
    a[lb] = a[end];
    a[end] = temp;
    return end;
}
void quickSort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(a, lb, ub);
        quickSort(a, lb, loc - 1);
        quickSort(a, loc + 1, ub);
    }
}

void merge(int a[], int lb, int mid, int ub)
{
    int i, j, k;
    int b[100];
    i = lb;
    j = mid + 1;
    k = lb;
    int n = ub - lb + 1;
    while (i <= mid && j <= ub)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= ub)
    {
        b[k] = a[j];
        j++;
        k++;
    }
    for (int i = lb; i <= ub; i++)
    {
        a[i] = b[i];
    }
    printf("Sorted array:");
    for (int i = lb; i <= ub; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void mergesort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergesort(a, lb, mid);
        mergesort(a, mid + 1, ub);
        merge(a, lb, mid, ub);
    }
}

void heap_sort(int arr[], int n)
{
    int temp;
    build_heap(arr, n);
    for (int i = n - 1; i >= 0; i--)
    {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}
void build_heap(int arr[], int n)
{
    int i;
    for (i = (n / 2) - 1; i >= 0; i--)
        heapify(arr, n, i);
}
void heapify(int arr[], int n, int i)
{
    int temp;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;
    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i)
    {
        temp = arr[largest];
        arr[largest] = arr[i];
        arr[i] = temp;
        heapify(arr, n, largest);
    }
}

int main()
{
    int arr[15];
    int i, num;
    int o = 0;
    while (o < 7)
    {
        printf("enter the number of elements in the array: ");
        scanf("%d", &num);
        for (i = 0; i < num; i++)
        {
            printf("enter the element: ");
            scanf("%d", &arr[i]);
        }
        printf("choose the sorting method\n1)bubble sort\n2)insertion sort\n3)Selection sort\n4)quick sort\n5)merge sort\n6)heap sort\n7)exit\n");
        scanf("%d", &o);
        switch (o)
        {
        case 1:
            display(arr, num);
            bubblesort(arr, num);
            display(arr, num);
            break;
        case 2:
            display(arr, num);
            insertionSort(arr, num);
            display(arr, num);
            break;
        case 3:
            display(arr, num);
            selectionsort(arr, num);
            display(arr, num);
            break;
        case 4:
            display(arr, num);
            quickSort(arr, 0, num - 1);
            display(arr, num);
            break;
        case 5:
            display(arr, num);
            mergesort(arr, 0, num - 1);
            display(arr, num);
            break;
        case 6:
            display(arr, num);
            heap_sort(arr, num);
            display(arr, num);
            break;
        default:
            printf("not valid option");
            break;
        }
    }
}