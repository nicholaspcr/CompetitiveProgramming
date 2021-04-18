

def base_d(x, d, m):
    dgs = []
    while x > 0:
        dgs.append(x%10)
        x = x//10

    op = 1
    ans = 0
    for num in dgs:
        ans += op*num
        op = op * d

        if (ans > m ):
            ans = m + 1
            break

    return ans


def get_big(x):
    b = 0
    while x > 0:
        b = max(b,x%10)
        x = x // 10

    return b

def solve():
    x = int( input() )
    m = int( input() )

    d = get_big(x) + 1

    ans = 0
    while( base_d(x,d,m) <= m ):
        ans = ans + 1
        d = d + 1

    print(ans)

if __name__ == "__main__":
    solve()
