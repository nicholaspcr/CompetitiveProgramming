#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 0x3f3f3f3f
#define all(x) x.begin(), x.end()
#define forn(i,n) for(int i = 0; i < n; i++)
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORR(i,a,b) for(int i = a; i >= b; i--)

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;


void solve(){
    int n; cin >> n;
    vi v(n);
    map<int,int> m;
    pi big = MP(-1 ,0);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        m[v[i]]++;
        if(m[v[i]] > big.S)
            big = MP(v[i], m[v[i]]);
    }
    vi ans(n);
    for(int i = 0; i < n; i++){
        ans[i] = m[v[i]] - 1;
    }


    for(int i = 0 ; i < n; i++)
        if(v[i] != big.F)
            cout << ans[i]+big.S-1 << endl;
        else
            cout << ans[i] << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
