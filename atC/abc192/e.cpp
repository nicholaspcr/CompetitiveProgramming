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
const ll INF = 1e10;
int n, m;

struct train{
  int t, w;
};

train new_t(int t, int w){
  train tr;
  tr.t = t;
  tr.w = w;
  return tr;
}


vector<pair<int, train>> g[MAXN];
vector<bool> vis(MAXN, false);

void solve(){
  cin>>n>>m;
  while(m--){
    int a,b,t,k;
    cin>>a>>b>>t>>k;
    g[a].pb({b, new_t(t,k)});
    g[b].pb({a, new_t(t,k)});
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //int t; cin >> t;
  //while(t--) solve();
  //
  //solve();
  return 0;
}
