#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;

const ll MOD = 1e9+7;

void solve(){
    int n, x;
    cin >> n >> x;
    vi v(n);
    vector<ll> ans(x+1);
    ans[0] = 1;
    for(int i = 0; i < n; i++){
       cin >> v[i];
    }
    for(int i = 1; i <= x; i++){
        for(int j = 0; j < n; j++){
            if(i-v[j] >= 0)
                ans[i] += ans[i-v[j]];
            ans[i] %= MOD;
        }
    }
    cout << ans[x] << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
