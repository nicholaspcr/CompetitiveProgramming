#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MAXN 1000007

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

void solve(){
    int n; cin >> n;
    vi ans(n+1);
    const int MOD = 1e9+7;

    ans[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int coin = 1; coin <= 6; coin++){
            if(i - coin >= 0)
                ans[i] += ans[i-coin];
            ans[i] %= MOD;
        }
    }
    cout << ans[n] << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
