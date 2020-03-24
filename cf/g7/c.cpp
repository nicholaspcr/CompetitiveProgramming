#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define INF 0x3f3f3f3f

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<pi> vpi;

const int MOD = 998244353;

void solve(){
    int n, k;
    cin >> n >> k;
    vpi v(n);
    vi dist;
    for(int i = 0; i < n; i++){
       cin >> v[i].F;
       if(v[i].F <= n && v[i].F > n-k)
           dist.PB(i+1);
       v[i].S = i;
    }
    int mini = INT_MAX;
    int op = 0;
    for(int i = 1; i < (int)dist.size(); i++){
        mini = min(dist[i]-dist[i-1]+1, mini);
        if(i == 1)
            op += abs(dist[i] - 1);
        else
            op += abs(dist[i] - dist[i-1]);
        op %= MOD;
    }
    if(mini == INT_MAX){
       if((int)dist.size() == 1)
            mini = dist[0];
       else
            mini = 1;
    }
    ll ans = 0;
    for(int i = 0; i < k; i++){
        ans += n-i;
        ans %= MOD;
    }
    if(n == k) op = 1;
    cout << ans << " " << op << endl;
}

int main() {
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}

