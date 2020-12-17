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

int n, m;
const int MAXN = 1e5+1;
vi g[MAXN];
vector<bool> vis(MAXN);
vector<bool> colors(MAXN);

bool dfs(int u){
  vis[u] = true;
  bool flag = true;
  for(int i=0;i<(int)g[u].size();i++){
    int v = g[u][i];
    if(!vis[v]){
      colors[v] = !colors[u];
      flag = dfs(v);
    }else if(colors[v] == colors[u]){
        flag = false;
    }
    if(!flag) break;
  }
  return flag;
}

void solve(){	
  cin>>n>>m;
  while(m--){
    int a,b;
    cin>>a>>b;
    a--; b--;
    g[a].pb(b);
    g[b].pb(a);
  }
  for(int i=0;i<n;i++){
    if(!vis[i]){
      colors[i] = false;
      if(dfs(i) == false){
        cout<<"IMPOSSIBLE\n";
        return;
      }
    }
  }
  for(int i=0;i<n;i++)
    cout<<colors[i]+1<<" ";
  cout<<endl;
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
