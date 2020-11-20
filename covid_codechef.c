
#include <stdio.h>
#include <conio.h>

int main()
{
	int t;
	printf("enter t value : ");
	scanf("%d", &t);

	while (t--)
	{
		int n, k, x, y, i, flag = 0;
		printf("enter the 4 values : ");
		scanf("%d %d %d %d", &n, &k, &x, &y);

		for (i = 0; i <= n + 2; i++)
		{
			// printf("YES2\n");
			if (((x + k * i) % n) == y)
			{
				printf("YES\n");
				flag = 1;
				break;
			}
		}

		// printf("hii");
		if (flag == 0)
			printf("NO\n");

		// printf("hii$$");
		flag = 0;
	}
}

/* for (i = x; i < n ; i = i % n)
		{
			printf("YES2\n");
			i = i + k;
			if (((x + k) % n) == y)
			{
				printf("YES3\n");
				// flag = 1;
				break;
			}

			 else
			  {
				printf("NO");
		     	
		} */