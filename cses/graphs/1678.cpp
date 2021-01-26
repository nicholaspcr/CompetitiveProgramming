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
const int INF = 1e7;
vi g[MAXN];
vi vis(MAXN);
vi par(MAXN, 0);
vi sizes(MAXN);
int n, m;

int dfs(int u, int sz){
  vis[u] = true;
  sizes[u] = sz;
  int flag = 0;
  for(int i=0;i<(int)g[u].size();i++){
    int v = g[u][i];
    if(vis[v] && sizes[u] - sizes[v] >= 1){
      par[v] = u;
      return u;
    }
    
    if(!vis[v]){
      par[v] = u;
      flag = dfs(v, sz+1);
      if(flag > 0) break;
    }
  }
  return flag;
}

void solve(){	
  cin>>n>>m;
  while(m--){
    int a, b; cin>>a>>b;
    g[a].pb(b);
  }

  int op = 0;
  for(int i=1;i<=n;i++){
    int x;
    if(!vis[i])
      op = dfs(i, 0);
    if(op > 0)
      break;
  }

  if(op <= 0)
    cout<<"IMPOSSIBLE\n";
  else{
    vi cycle;
    int x = op;
    while(1){
      cycle.pb(x);
      x = par[x];
      if(x == op) break;
      if(x == 0) break;
    }
    cycle.pb(op);
    reverse(all(cycle));
    cout<<cycle.size()<<endl;
    for(auto e:cycle){
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
