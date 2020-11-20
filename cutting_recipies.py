
t = int(input())
for _ in range(t):

    list = []

    n = int(input("Enter number of elements : "))

    for i in range(0, n):
        ele = int(input())
        list.append(ele)

    small = min(list)







    """ def get_gcd(a, b):
    while(b):
        a, b = b, a%b
    return a
t = int(input())
for _ in range(t):
    l = list(map(int, input().split(' ')))
    gcd = get_gcd(l[1], l[2])
    for i in range(2, len(l)):
        gcd = get_gcd(gcd,l[i])
    for i in range(1, len(l)):
        print(l """[i]//gcd,end = ' ')
    print()