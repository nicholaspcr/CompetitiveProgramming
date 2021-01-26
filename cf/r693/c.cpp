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

void solve(){	
  int n; cin>>n;
  vi v(n);
  for(int &it : v)cin>>it;
  vector<ll> calc(n);
  ll ans = 0;
  for(int i=n-1;i>=0;i--){
    ll op = i + v[i];
    ll best = v[i];
    if(op < n){
      best += calc[op];
    }
    calc[i] = best;
    ans = max(ans, best);
  }
  cout<<ans<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while(t--) solve();
  //
  //solve();
  return 0;
}
