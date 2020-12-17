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
 
void solve(){
  const ll INF = 1e18;
  int n,m,q;
  cin>>n>>m>>q;
  vector<vector<ll>> g(n+1, vector<ll> (n+1, INF));
  for(int i=1;i<=n;i++)
    g[i][i] = 0;
  for(int i=0;i<m;i++){
    ll a,b, w;
    cin>>a>>b>>w;
    g[a][b] = min(g[a][b], w);
    g[b][a] = min(g[a][b], w);
  }
  for(int k=1;k<=n;k++)
    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
        g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
  while(q--){
    int a,b;
    cin>>a>>b;
    if(g[a][b] == INF)
      cout<<-1<<endl;
    else
      cout<<g[a][b]<<endl;
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
