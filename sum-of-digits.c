
#include <stdio.h>
#include <conio.h>

int main()
{
    int x, i, k, n, t;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &x);
        int sum = 0;
        
        for (i = x; i > 0; i = i / 10)
        {
            k = i;
            n = k % 10;
            sum = sum + n;
        }
        printf("%d \n", sum);       
        // t--;
    }
}