n = int(input())

ans = 0
op = 5
while(op <= n):
    ans += n//op
    op*=5

print(ans)
