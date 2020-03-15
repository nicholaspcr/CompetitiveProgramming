#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MAXN 1e9 + 2

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

const ll MOD = 1e9 + 7;

vector<ll> v(MAXN, 1);

void fill(){
    v[0] = 1;
    for(int i = 1; i < MAXN; i++){
        v[i] = (i*v[i-1])%MOD;
    }
}

void solve(){
    fill();
    int n, a, b;
    cin >> n >> a >> b;
    if(!n) cout << "0" << endl;
    else{
        ll ans = 0;
        for(int i = 1; i <= n; i++){
            if( i == a || i == b) continue;
            ans += ( v[n]/(v[i]*v[n-i]) );
            ans = ans % MOD;
        }
        cout << ans << endl;
    }
}

int main(){
    /*
    int t; cin >> t;
    while(t--) solve();
    */
    solve();
    return 0;
}
