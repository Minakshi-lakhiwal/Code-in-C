#include <stdio.h>
int main()
{
    int i, n;
    int a[50];
    printf("How many elements you want in array");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("a[%d]=%d", i, a[i]);
    }
    printf("Elements of the array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
}