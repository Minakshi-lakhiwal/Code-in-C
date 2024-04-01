#include <stdio.h>
int main()
{
    int i, s_first, s_second, n;
    int a[50];
    printf("How many elements you want in array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    s_first = s_second = a[0];
    for (i = 0; i < n; i++)
    {
        if (s_first < a[i])
        {
            s_first = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (s_second < a[i] && a[i] != s_first)
        {
            s_second = a[i];
        }
    }
    printf("Second largest number in array is:%d", s_second);
}