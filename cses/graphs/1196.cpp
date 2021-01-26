#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;

const ll INF = 1e15;
void solve(){	
  ll n,m,k;
  cin>>n>>m>>k;
  vector<vector<pair<ll,ll>>> g(n+1);
  while(m--){
    ll a,b,w;
    cin>>a>>b>>w;
    g[a].pb({b,w});
  }

  // best k distantaces from 1 to all N nodes
  vector<vll> dist(n+1, vll(k, INF));
  dist[1][0] = 0;
  //djsktra
  priority_queue<
    pair<ll,ll>,
    vector<pair<ll,ll>>,
    greater<pair<ll,ll>>
  > pq;
  pq.push({0,1});
  while(!pq.empty()){
    pair<ll,ll> t = pq.top(); pq.pop();
    ll uDst = t.f,  u = t.s;

    if(uDst > dist[u][k-1]) continue;

    for(auto it : g[u]){
      ll v = it.f;
      ll vDst = it.s;

      if(dist[v][k-1] > vDst+uDst){
        dist[v][k-1] = vDst + uDst;
        pq.push( {dist[v][k-1], v} );
        sort(all(dist[v]));
      }
    }
  }
  for(int i=0;i<k;i++)
    cout<<dist[n][i]<<" ";
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
