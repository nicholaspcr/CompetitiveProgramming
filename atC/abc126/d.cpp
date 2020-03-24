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

vpi g[MAXN];
int vis[MAXN];
bool color[MAXN];

void dfs(int u){
    vis[u] = 1;
    for(int i = 0; i < g[u].size(); i++){
        pi v = g[u][i];
        if(v.S&1)
            color[v.F] = !color[u];
        else
            color[v.F] = color[u];

        if(!vis[v.F])
            dfs(v.F);
    }
    vis[u] = 2;
}

void solve(){
    memset(vis, 0 , sizeof(vis));
    memset(color, 0, sizeof(color));
    for(int i = 0; i < MAXN; i++)
        g[i].clear();
    int n; cin >> n;
    for(int i = 0; i < n-1; i++){
        int u, v, w;
        cin >> u >> v >> w;
        u--; v--;
        g[u].PB(MP(v,w));
        g[v].PB(MP(u,w));
    }
    for(int i = 0; i < n; i ++){
        if(!vis[i])
            dfs(i);
    }

    for(int i = 0; i < n; i++){
        printf("%d\n", color[i]);
    }
}

int main(){
    //int t; cin >> t;
    //while(t--) solve();

    solve();
    return 0;
}
