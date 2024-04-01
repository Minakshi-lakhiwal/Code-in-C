#include <stdio.h>

int main()
{
    int i, n;
    int a[50];

    printf("Enter how many elements you want in array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int *start_ptr = a;
    int *end_ptr = a + n - 1;
    while (start_ptr < end_ptr)
    {
        int temp = *start_ptr;
        *start_ptr = *end_ptr;
        *end_ptr = temp;
        start_ptr++;
        end_ptr--;
    }

    printf("Reverse array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
