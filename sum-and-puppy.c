
#include <stdio.h>
#include <conio.h>

int sum(int num);
int main()
{
    int t, total, i, num, times, k;
    scanf("%d", &t);

    while (t--)
    {
        // printf("Enter the TIMES & NUM : ");
        scanf("%d %d", &times, &num);
        for (i = 0; i < times; i++)
        {
            k = sum(num);
            num = k;
        }
        printf("%d\n", num);
    }
}

int sum(int n)
{
    int z;
    z = (n * (n + 1) / 2);
    return z;
}


// increment
#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
scanf("%d",&n);
if (n % 4 == 0)
printf("%d",++n);
else
printf("%d",--n);
   
	return 0;
}

// hrlpongchef
# cook your dish here

testcase = int(input())

for i in range(testcase):
    n = int(input())
    if (n < 10):
          print("Thanks for helping Chef!")
    else:
          print("-1")


// 