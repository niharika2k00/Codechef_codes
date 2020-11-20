
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, k, remain, i, result;
    scanf("%d %d", &n, &k);
    int a[n];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] >= k)
        {
            carry = a[i] - k;
            a[i + 1] = carry + a[i + 1];
        }
        if (a[i] < k)
        {
            printf("%d\n", i + 1);
        }
        if ()
        {
            remain = a[i + 1] / k;
            result = remain + n + 1;
            printf("%d\n", result);
        }
    }
}
