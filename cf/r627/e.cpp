#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MAXN 2001

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

int n, h, l, r;

int check(int x){
    return( x >= l && x <= r );
}

void solve(){
    cin >> n >> h >> l >> r;
    vi v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<vector<int>> dp(n+1, vector<int>(n+1, INT_MIN));
    dp[0][0] = 0;
    int best = 0;
    for(int i = 0; i < n; i++){
        best += v[i];
        for(int  j = 0; j <= i; j++){
            dp[i+1][j] = max(dp[i+1][j], dp[i][j] + check((best-j)%h));

            dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j] + check((best-j-1)%h));
        }
    }

    int ans = 0;
    for(int i = 0; i <= n; i++)
        for(int j = 0; j <= n; j++)
            ans = max(ans, dp[i][j]);

    cout << ans << endl;
}

int main() {
    //int t; cin >> t;
    //while(t--) solve();
    solve();
    return 0;
}
