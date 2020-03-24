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
    int n, m;
    cin >> n >> m;
    vi t(n), p(m);
    FOR(i,0,n){
       cin >> t[i];
    }
    FOR(i,0,m){ 
        cin >> p[i];
    }
    sort(all(t));
    
    vi vis(m);
    vi ans(m);
    for(int i = 0; i < m; i++){
        auto it = lower_bound(all(t), p[i]);
        int pos = 0;
        pos += t.end() - it;
        if(*it != p[i]) pos--;
        
        if(pos < 0)
            cout << -1 << endl;
        else
            cout << t[pos] << " -> " << pos << endl;
        t.erase(it);
    }
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
