#include <stdio.h>
int main()
{ // O(n^2) time complexity
    int a[5] = {12, 4, 53, 1, 6};
    int i, j, temp;
    int n = 5;

    for (i = 0; i < n - 1; i++) // < 4
    {
        for (j = 0; j < n - 1 - i; j++) // < 5 - 1 = 4 - i
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
// 0 1 2 3 ;;;0 0123 ,1 012 ,2 01,3 0 1
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}