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
    int n, m;
    cin >> n >> m;
    vi v(m);
    forn(i,m) cin >> v[i];
    sort(all(v));

    vpi diff;
    for(int i = 0; i < m-1; i++){
        pi op;
        op.F = v[i+1] - v[i];
        op.S = i+1;

        diff.PB(op);
    }
    for(int i = 0; i < (int)diff.size(); i++)
        cout << diff[i].F << " ";
    cout << endl;

    for(int i = 0; i < (int)diff.size(); i++)
        cout << diff[i].S << " ";
    cout << endl;

    vi pos;
    pos.PB(0);
    sort(diff.rbegin(), diff.rend());
    for(int i = 1; i < n; i++){
        pos.PB(diff[i].S);
    }

    map<int,int> oper;
    for(int i = 0; i < pos.size(); i++){
        for(int j = 0; j < m; j++){
            if(j == 0)
                oper[pos[i]] = v[j] - pos[i];
            else
                oper[pos[i]] = min(oper[pos[i]], v[j]-pos[i]);
        }
    }

}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
