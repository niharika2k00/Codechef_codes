
//pancake problem in the codechef.
#include <stdio.h>
#include <conio.h>

int main()
{
    int t, n, pack;
    printf("enter t value : ");
    scanf("%d", &t);
    while (t--)
    {
        printf("enter n value : ");
        scanf("%d", &n);
        pack = (n / 2) + 1;
        printf("%d \n", pack);
    }
}
