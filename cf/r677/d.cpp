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
const int MAXN = 5001;
int n;
vector<int> g[MAXN];
vector<int> path[MAXN];
bool vis[MAXN];

void dfs(int u){
  vis[u] = true;
  for(int i=0;i<g[u].size();i++){
      int v = g[u][i];
      if(!vis[v]){
        path[u].PB(v);
        dfs(v);
      }
  }
}

void solve(){	
  int n; cin>>n;
  for(int i=0;i<MAXN;i++){
    g[i].clear();
    path[i].clear();
    vis[i] = false;
  }
  vi v(n);
  for(int i=0;i<n;i++) cin>>v[i];

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(v[i] != v[j] && i != j){
        g[i].PB(j);
      }
    }
  }

  dfs(0);
  bool flag = true;
  for(int i=0;i<n;i++){
    if(vis[i] == false){
      flag = false;
      break;
    }
  }

  if(!flag){
    cout<<"NO\n";
  }else{
    cout<<"YES\n";
    for(int i=0;i<n;i++){
      for(int j=0;j<path[i].size();j++){
        cout<<i+1<<" "<<path[i][j]+1<<endl;
      }
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while(t--) solve();
  //
  //solve();
  return 0;
}
