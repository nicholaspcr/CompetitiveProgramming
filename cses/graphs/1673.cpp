#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;

const int MAXN = 2e4+1;
const ll INF = 1e17;

vll dist(MAXN, -INF);
vector<tuple<int,int,int>> edges;
vi g[MAXN];
vi vis(MAXN, 0);
vi op;

bool dfs(int u){
  cout<<u<<" ";
  vis[u] = 1;
  for(auto v : g[u]){
    for(auto marked : op){
      if(v == marked){
        return true;
      }
    }
    if(!vis[v]){
      bool f = dfs(v);
      if (f)
        return true;
    }
  }
  return false;
}


void solve(){
  int n, m;
  cin>>n>>m;
  while(m--){
    int a, b, w;
    cin>>a>>b>>w;
    edges.pb(make_tuple(a,b,w));
    g[b].pb(a);
  }
  dist[1] = 0;
  for(int i=1;i <= n; i++){
    for(auto e: edges){
      int a,b,w;
      tie(a,b,w) = e;
      dist[b] = max(dist[b],dist[a]+w);
    }
  }
  
  // marking nodes that change 
  for(auto e: edges){
    int a,b,w;
    tie(a,b,w) = e;
    if(dist[a]+w < dist[b]){
      op.pb(b);
    }
  }
  for(int e : op)
    cout<<e<<" ";
  cout<<endl;

  bool flag = dfs(n);
  if(flag)
    cout<<-1<<endl;
  else
    cout<<dist[n]<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //int t; cin >> t;
  //while(t--) solve();
  //
  solve();
  return 0;
}
