#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 0x3f3f3f3f
#define all(x) x.begin(), x.end()
#define forn(i,n) for(int i = 0; i < n; i++)
#define FOR(i,a,b) for(int i = a; i < b; i++)

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;


bool comp(pi a, pi b){
    return a.S > b.S;
}

void solve(){
    int n, k;
    cin >> n >> k;
    vpi v(n);
    forn(i,n) cin >> v[i].F >> v[i].S;
    sort(all(v), comp);
    
    map<int,int> cont;
    ll diver = 0;
    ll temp = 0;

    for(int i = 0; i < k; i++){
        temp += v[i].S;
        if(!cont[v[i].F]) diver++;
        cont[v[i].F]++;
    }

    ll ans = temp + diver*diver;
    
    // two pointers
    int l = k-1;
    int r = k;
    while( l >= 0 && r < n ){
        while(l >= 0 && cont[v[l].F] == 1) l--;
        if(l < 0) break;
        cont[v[l].F]--;
        temp -= v[l].S;


        while(r < n && cont[v[r].F] != 0) r++;
        if(r >= n) break;
        
        cont[v[r].F]++;
        diver++;
        temp += v[r].S;
        ll t = temp + (diver*diver);
        ans = max(ans, t);

        l--;
        r++;
    }
    cout << ans << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
