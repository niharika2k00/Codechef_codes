# cook your dish here
# LINKS :: https://www.codechef.com/problems/LAPIN


""" t = int(input())
for _ in range(t): """

w = input()
r = len(w)//2
print(r)
if len(w) % 2 != 0:
    w = w[:r] + w[r+1:]
w1 = w[:r]
w2 = w[r:]
if sorted(w1) == sorted(w2):
    print('YES')
else:
    print('NO')
