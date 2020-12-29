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

const int MAXN = 1e5+1;
const ll INF = 1e16;
vii g[MAXN];

void solve(){	
  int n, m;
  cin>>n>>m;
  while(m--){
    int a,b,w;
    cin>>a>>b>>w;
    a--; b--;
    g[a].pb(mp(b,w));
  }
  vector<vll> dist(2, vll(n,INF));
  dist[0][0] = 0; // without cupon
  dist[1][0] = 0; // with cupon
  priority_queue<pair<ll,ll>> q;
  q.push(mp(0,0));
  while(!q.empty()){
    // already found a smaller path !
    if( (-1)*q.top().f > max(dist[0][n-1], dist[1][n-1])){
      break;
    }

    int a = q.top().s; q.pop();
    for(auto v : g[a]){
      int b = v.f, w = v.s;
      //cout<<b<<" - "<<w<<endl;
      if(dist[0][a]+w < dist[0][b]){
        dist[0][b] = dist[0][a]+w;
        q.push({-dist[0][b], b});
      }
      if(dist[1][a]+w < dist[1][b]){
        dist[1][b] = dist[1][a]+w;
        q.push({-dist[1][b], b});
      }
      if(dist[0][a]+(w/2) < dist[1][b]){
        dist[1][b] = dist[0][a] + (w/2);
        q.push({-dist[1][b], b});
      }
    }
  }
  /*
  for(int i=0;i<n;i++)
    cout<<dist[0][i]<<"\t";
  cout<<endl;
  for(int i=0;i<n;i++)
    cout<<dist[1][i]<<"\t";
  cout<<endl;
  */
  cout<<min(dist[0][n-1], dist[1][n-1])<<endl;
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
