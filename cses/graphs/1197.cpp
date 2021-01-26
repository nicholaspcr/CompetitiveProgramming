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
typedef vector<pair<ll,ll>> vpl;

const int MAXN = 3e3;
const ll INF = 4e16;
vll dist(MAXN, INF);

void solve(){	
  int n,m;
  cin>>n>>m;
  vector<tuple<ll,ll,ll>> edges;
  while(m--){
    int a,b,w;
    cin>>a>>b>>w;
    edges.pb(make_tuple(a,b,w));
  }
  vll d(n+1);
  vi p(n+1, -1);
  ll x = -1;
  for(int i=0;i<n;i++){
    x = -1;
    for(auto e : edges){
      ll a,b,c;
      tie(a,b,c) = e;
      if(d[a] + c < d[b]){
        d[b] = d[a] + c;
        p[b] = a;
        x = b;
      }
    }
  }
  if(x == -1)
    cout<<"NO\n";
  else{
    for(int i=0;i<n;++i)
      x = p[x];

    vi cycle;
    for(int it = x;;it = p[it]){
      cycle.push_back(it);
      if(it == x && cycle.size() > 1)
        break;
    }
    reverse(all(cycle));
    cout<<"YES\n";
    for(int c : cycle)
      cout<<c<<" ";
    cout<<endl;
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
