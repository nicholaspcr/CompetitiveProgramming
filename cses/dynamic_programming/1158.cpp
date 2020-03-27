#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 0x3f3f3f3f
#define all(x) x.begin(),x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<pi> vpi;

void solve(){
    int n, x;
    cin >> n >> x;
    vpi books(n);
    int numPages = 0;
    for(int i = 0; i < n; i++)
        cin >> books[i].F;
    for(int i = 0; i < n; i++){
        cin >> books[i].S;
        numPages += books[i].S;
    }

    //sort(all(books));
    pi dp[n+1][n+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            dp[i][j] = MP(0,0);
        }
    }
    dp[0][0] = MP(0, x);
    for(int i = 0; i < n; i++){
        for(int j = 0
    }
    int ans = 0;
    for(int i = 0; i <= numPages; i++){
        ans = max(dp[i].F, ans);
    }
    printf("%d\n", ans);
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
