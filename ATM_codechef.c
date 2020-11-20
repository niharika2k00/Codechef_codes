
#include <stdio.h>
#include <conio.h>

int main()
{
    int amtwithdraw;
    float total, netbalance, x;
    scanf("%d", &amtwithdraw);
    scanf("%f", &total);

    if (amtwithdraw + 0.50 > total)
        printf("%.2f\n", total);

    else if ((amtwithdraw + 0.50 <= total) && (amtwithdraw % 5 == 0))
    {
        x = total - amtwithdraw;
        netbalance = x - 0.50;
        printf("%.2f\n", netbalance);
    }
    else if ((amtwithdraw + 0.50 <= total) && (amtwithdraw % 5 != 0))
        printf("%.2f\n", total);
}