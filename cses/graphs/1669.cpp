#include <bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef long long ll;

const int MAXN = 1e5 +1;
vi g[MAXN];
vi vis(MAXN);
vi par(MAXN, -1);
vi sizes(MAXN);
int n, m;

ii dfs(int u, int sz){
  vis[u] = true;
  sizes[u] = sz;
  ii flag = mp(-1,-1);
  for(int i=0;i<(int)g[u].size();i++){
    int v = g[u][i];
    if(vis[v] && sizes[u] - sizes[v] >= 2){
      return mp(u,v);
    }
    if(!vis[v]){
      par[v] = u;
      flag = dfs(v, sz+1);
      if(flag.F >= 0) break;
    }
  }
  return flag;
}

void solve(){	
  cin>>n>>m;
  while(m--){
    int a, b; cin>>a>>b;
    g[a].pb(b);
    g[b].pb(a);
  }
  ii op;
  for(int i=1;i<=n;i++){
    if(!vis[i]){
      op = dfs(i, 0);
    }
    if(op.F >= 0){
      break;
    }
  }

  if(op.F < 0)
    cout<<"IMPOSSIBLE\n";
  else{
    vi ans;
    while(op.F != op.S){
      ans.pb(op.F);
      op.F = par[op.F];
    }
    ans.pb(op.F);
    reverse(all(ans));
    ans.pb(op.S);
    cout<<ans.size()<<endl;
    for(auto e:ans){
      cout<<e<<" ";
    }
    cout<<endl;
  }
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
