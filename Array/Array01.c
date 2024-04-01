#include <stdio.h>
int main()
{
    int i, n, min;
    int a[50];
    printf("How many elements you want in array:");
    scanf("%d", &n);
    printf("Enter array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    for (i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("Smallest element in array is:%d", min);
}