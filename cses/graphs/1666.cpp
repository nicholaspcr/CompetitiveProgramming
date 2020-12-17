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

const int MAXN=1e5+2;
vi g[MAXN];
vector<bool> vis(MAXN);

void dfs(int u){
  vis[u] = true;
  for(int i=0;i<g[u].size();i++){
    int v = g[u][i];
    if(!vis[v])
      dfs(v);
  }
}

void solve(){	
  int n,m;cin>>n>>m;
  for(int i=0;i<MAXN;i++){
    g[i].clear();
    vis[i] = false;
  }
  for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    g[a].PB(b);
    g[b].PB(a);
  }
  vi ans;
  for(int i=1;i<=n;i++){
    if(!vis[i]){
      ans.PB(i);
      dfs(i);
    }
  }
  cout<<ans.size()-1<<endl;
  for(int i=1;i<ans.size();i++){
    cout<<ans[i-1]<<" "<<ans[i]<<endl;
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
