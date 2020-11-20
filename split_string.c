
#include <stdio.h>
#include <string.h>

int main(void)
{
    // your code goes here

    /*  int t;
    scanf("%d", &t);
    while (t--)
    { */
    int  i, n;
    char s[100] , ch;

    scanf("%d", &n);
    scanf("%s", s);    
    
    ch = s[n-1];
    for (i = 0; i < n-1; i++)
    {
        if (ch == s[i])
        {
           printf("YES\n");
            break;
        }       
    }
    if (i == n - 1) 
      printf("NO\n");
   
    /*  } */

    return 0;
}
