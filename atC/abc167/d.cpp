#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef long long ll;

template <typename T> void max_self(T& a, T b){
  a = max(a,b);
}

template <typename T> void min_self(T& a, T b){
  a = min(a,b);
}

const int MAXN = 2e5+2;

vi g[MAXN];
vi vis(MAXN);
vi steps(MAXN);
ll n, k;

pi dfs(int u, int st){
  vis[u] = 1;
  steps[u] = st;
  for(int i=0;i<g[u].size();i++){
    int v = g[u][i];
    if(vis[v] == 1){
      k -= steps[v];
      return MP(steps[u] - steps[v]+1 , v);
    }else if(!vis[v]) return dfs(v, st+1);
  }
  vis[u] = 2;
  return MP(0,0);
}

void solve(){	
  cin>>n>>k;
  vi v(n);
  for(int i=0;i<n;++i) cin>>v[i];
  for(int i=0;i<n;++i){
    v[i]--;
    g[i].PB(v[i]);
  }
  pi cycle = dfs(0, 0);
  //cout<<cycle<<" "<<k<<endl;
  k = k%cycle.F;
  vi par(n);
  for(int i=0;i<n;++i) par[i] = v[i];
  int pos = 0;
  //cout<<cycle.F<<endl;
  while(cycle.F--){
    pos = par[pos];
  }
  //cout<<v[pos]+1<<endl;
  cout<<v[par[pos]]+1<<endl;
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
