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

bool compare(pi l, pi r){
  if(l.S == r.S)
    return l.F<r.F;
  return l.S<r.S;
}

void solve(){	
  int n; cin>>n;
  vpi v(n);
  for(int i=0;i<n;i++) cin>>v[i].F>>v[i].S;
  sort(all(v));
  ll t = 0;
  ll ans = 0;
  for(int i=0;i<n;i++){
    t+=v[i].F;
    ans += v[i].S - t;
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
