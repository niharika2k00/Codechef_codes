
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
      int t;
      scanf("%d", &t);

      while (t--)
      {
            int l, r;
            scanf("%d %d", &l, &r);
            if (r < l * 2)
                  printf("%d\n", r);
            else
                  printf("-1\n");
      }
      return 0;
}
