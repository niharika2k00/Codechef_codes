
#include<bits/stdc++.h>
#include <stdio.h>

int main(void)
{
     int t;
    scanf("%d", &t);

    while (t--)
    { 
    int i, n, a, first = 0, sec = 0, diff, j;
    scanf("%d", &n);
    int c[n];

    for (i = 0; i < n; i++)
        scanf("%d", &c[i]);

    // reverse sorting
    Sort(c,c+n);
    Reverse(c,c+n);
    /* for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (c[i] < c[j])
            {
                a = c[i];
                c[i] = c[j];
                c[j] = a;
            }
        }
    } */

    first = first + c[0];

    for (i = 1; i < n; i++)
    {

        if (first > sec)
        {
            sec = sec + c[i];
        }
        else
        {
            first = first + c[i];
        }
    }

    if (first >= sec)
        printf("%d\n", first);

    else
        printf("%d\n", sec);
    }
    return 0;
}
