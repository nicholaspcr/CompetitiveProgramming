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
    ll n, k;
    cin >> n >> k;
    vll v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    ll ans = 0;
    ll limit = (k > 1000) ? k -((ll)sqrt((ll)sqrt(k))) : (ll)max((ll)0, k - 100);
    for(ll i = k; i >= limit;i--){
        ll best = 0;
        for(int j = 0; j < n; j++){
            best += (v[j]^i);
        }
        ans = max(best,ans);
    }
    cout << ans << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
