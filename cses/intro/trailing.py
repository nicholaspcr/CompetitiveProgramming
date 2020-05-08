n = int(input())
op = 1;
for i in range(1,n+1):
    op = op * i

ans = 0
while(op%10 == 0):
    ans+=1
    op=op//10

print(ans)
