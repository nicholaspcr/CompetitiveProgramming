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
#define MAXN 100001

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;

vi g[MAXN];
int vis[MAXN];
void dfs(int u){
    vis[u] = 1;
    for(int i = 0; i < g[u].size(); i++){
        int v = g[u][i];
        if(!vis[v])
            dfs(v);
    }
    vis[u] = 2;
}

void solve(){
    int n, m;
    cin >> n >> m;
    int u, v, w;
    for(int i = 0; i < m; i++){
        cin >> u >> v >> w;
        u--; v--;
        g[u].PB(v);
        g[v].PB(u);
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            ans++;
            dfs(i);
        }
    }
    cout << ans << endl;
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
