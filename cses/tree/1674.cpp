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
vi cnt(MAXN);

void dfs(int s, int e){
  cnt[s] = 1;
  for(int u : g[s]){
    if(u == e) continue;
    dfs(u, s);
    cnt[s] += cnt[u];
  }
}


void solve(){	
  int n; cin>>n;
  for(int i=1;i<n;i++){
    int x; cin>>x;
    g[x-1].pb(i);
    g[i].pb(x-1);
  }
  dfs(0, 0);
  for(int i=0;i<n;i++)
    cout<<cnt[i]-1<<" ";
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
