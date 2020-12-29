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
typedef vector<pair<ll,ll>> vpl;

const int MAXN = 3e3;
const ll INF = 4e16;
vll dist(MAXN, INF);
vi g[MAXN];
vi vis(MAXN, 0);

int dfs(int u){
  vis[u] = 1;
  for(auto v : g[u]){
    // cycle detected
    if(vis[v.f] == 1){
      if(dist[u]+v.s <= dist[v.f]){
        par[v.f] = u;
        return v.f;
      }
    }else{
      dist[v.f] = dist[u] + v.s;
      par[v.f] = u;
      int flag = dfs(v.f);
      if(flag >= 0) return flag;
    }
  }
  vis[u] = 2;
  return -1;
}

void solve(){	
  int n,m;
  cin>>n>>m;

  vector<tuple<int,int,int>> edges;
  while(m--){
    int a,b,w;
    cin>>a>>b>>w;
    edges.pb(make_tuple(a,b,w));
    // inverse graph
    g[b].pb(a);
  }
  for(int i=0;i<=n;i++){
  }
  for(int i=1;i<=n;i++){
    int flag = -1;
    if(!vis[i]){
      flag = dfs(i);
    }
    if(flag >= 0){
      vi ans;
      ans.pb(flag);
      int op = par[flag];
      while(op != flag){
        ans.pb(op);
        op = par[op];
      }
      ans.pb(flag);
      reverse(all(ans));
      cout<<"YES\n";
      for(int e : ans)
        cout<<e<<" ";
      cout<<endl;
      return;
    }
  }
  cout<<"NO\n";
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
