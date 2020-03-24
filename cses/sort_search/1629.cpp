#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 0x3f3f3f3f
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<pi> vpi;

bool comp(pi a, pi b){
    return a.S < b.S;
}
void solve(){
    int n; cin >> n;
    vpi v(n);
    FOR(i,0,n) cin >> v[i].F >> v[i].S;
    sort(all(v), comp);
    int ans = 0;
    int curr = 0;
    FOR(i,0,n){
//        cout << v[i].F << " " << v[i].S << endl;
        if(v[i].F >= curr){
            ans++;
            curr = v[i].S;
        }
    }
    cout << ans << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
