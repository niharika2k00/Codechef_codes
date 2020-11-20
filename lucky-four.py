
t = int(input("Enter value of test-case : "))
for i in range(t):
    counter = 0
    n = int(input("Enter a number : "))
    while(n > 0):
        digit = n % 10  # mod - remainder

        if (digit == 4):
            counter = counter + 1

        n = n // 10

    print(counter)
