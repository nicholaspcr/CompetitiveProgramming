#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef long long ll;

template <typename T> void max_self(T& a, T b){
  a = max(a,b);
}

template <typename T> void min_self(T& a, T b){
  a = min(a,b);
}

bool comp(pair<pi,ll> a, pair<pi,ll> b){
  if(a.S == b.S){
    if(a.F.F == b.F.F)
      return a.F.S < b.F.S;
    return a.F.F < b.F.F;
  }
  return a.S < b.S;
}

void solve(){	
  pair<pi,ll> p;
  int n;cin>>n;
  vector<pair<pi,ll>> pts(n);
  for(int i=0;i<n;i++){
    cin>>pts[i].F.F>>pts[i].F.S;
    pts[i].S = pts[i].F.F + pts[i].F.S;
  }
  sort(all(pts), comp);

  ll ans = 0;
  for(int i=n-1;i >= 0 && pts[i].S == pts[n-1].S; i--){
    max_self(ans, (ll)abs(pts[i].F.F - pts[0].F.F)+ abs(pts[i].F.S - pts[0].F.S));
  }
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
