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

const int MAXN = 1e5+1;
vi g[MAXN];
vector<bool> vis(MAXN);
vi pre(MAXN, -1);
vi sz(MAXN, MAXN);
int n, m;

void solve(){	
  cin>>n>>m;
  while(m--){
    int a, b; cin>>a>>b;
    a--;b--;
    g[a].pb(b);
    g[b].pb(a);
  }
  
  queue<int> q;
  q.push(0);
  sz[0] = 0; vis[0] = true; 
  while(!q.empty()){
    int u = q.front(); q.pop();
    for(int i=0;i<g[u].size();i++){
      int v = g[u][i];
      if(!vis[v]){
        vis[v] = true;
        pre[v] = u;
        q.push(v);
      }
    }
  }
  if(vis[n-1]){
    int op = n-1;
    vi ans;
    while(op != -1){
      ans.pb(op+1);
      op = pre[op];
    }
    cout<<ans.size()<<endl;
    reverse(all(ans));
    for(auto e:ans)
      cout<<e<<" ";
    cout<<endl;
  }else{
    cout<<"IMPOSSIBLE\n";
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
