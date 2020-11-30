// LINKS :: https://www.codechef.com/problems/FLIP

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int t, c = 0;
    scanf("%d", &t);

    while (t--)
    {
        char a[10000], b[10000];
        int i;
        scanf("%d %d", &a, &b);
        for (i = 0; i < strlen(a); i++)
        {
            if (a[i] != b[i])
            {
                if (a[i] == 0)
                {
                    a[i] = 1;
                    c++;
                }

                else
                {
                    a[i] = 0;
                    c++;
                }
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
