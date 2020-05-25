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

const int MAXN = 2e5+3;
vi g[MAXN];
int vis[MAXN];
vi ans(MAXN);


void solve(){	
  int n,m;
  cin>>n>>m;
  memset(vis,0,sizeof(vis));
  queue<int> q;
  for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    g[a].PB(b);
    g[b].PB(a);
  }
  q.push(1);
  vis[1] = true;
  ans[1] = 0;
  while(!q.empty()){
    int u = q.front(); q.pop();
    for(int i=0;i<g[u].size();i++){
      int v = g[u][i];
      if(!vis[v]){
        q.push(v);
        ans[v] = ans[u] + 1;
        vis[v] = 1;
      }
    }
  }
  for(int i=2;i<=n;i++){
    if(ans[i] == 0){
      cout<<"No\n";
      return;
    }
  }
  cout<<"Yes\n";
  for(int i=2;i<=n;i++)
    cout<<ans[i]<<endl;
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
