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

const int MAXN = 2e5+1;
vi g[MAXN];
vi dst(MAXN);

void dfs(int s, int e){
  for(int u : g[s]){
    if(u == e) continue;
    dst[u] = dst[s]+1;
    dfs(u, s);
  }
}


void solve(){	
  int n; cin>>n;
  for(int i=1;i<n;i++){
    int a, b;
    cin>>a>>b;
    g[a].pb(b);
    g[b].pb(a);
  }
  for(int i=0;i<=n;i++) dst[i]=0;
  dfs(1, 1);
  pii best = {0,0};
  for(int i=1;i<=n;i++){
    if(dst[i] > best.f)
      best = { dst[i], i };
    dst[i]=0;
  }
  dfs(best.s, best.s);
  int ans = 0;
  for(int i=1;i<=n;i++)
    ans = max(ans, dst[i]);
  cout<<ans<<endl;
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
