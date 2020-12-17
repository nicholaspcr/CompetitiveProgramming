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

const int MAXN = 1e5+2;
const ll INF = 1e15;

vector<pair<int,ll>> g[MAXN];
vector<ll> dist(MAXN, INF);
vi vis(MAXN);

void solve(){	
  int n,m;
  cin>>n>>m;
  while(m--){
    int a,b,c;
    cin>>a>>b>>c;
    g[a].pb(mp(b,c));
  }

  priority_queue<pair<ll,ll>> q;
  dist[1] = 0;
  q.push(mp(0, 1));
  while(!q.empty()){
    int a = q.top().s; q.pop();
    if(vis[a]) continue;
    vis[a] = true;
    for(auto u : g[a]){
        int b = u.f; ll w = u.s;
        if(dist[a]+w < dist[b]){
          dist[b] = dist[a]+w;
          q.push({-dist[b], b});
        }
    }
  }
  for(int i=1;i<=n;i++)
    cout<<dist[i]<<" ";
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
