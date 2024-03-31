#include <stdio.h>
int main()
{
    int i, n, max;
    int a[50];
    printf("How many elements you want in array");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    printf("Elements of the array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("largest element:%d", max);
}