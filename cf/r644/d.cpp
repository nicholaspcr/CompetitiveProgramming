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

void solve(){	
  ll n,k;
  cin>>n>>k;
  if(k >= n){
    cout<<1<<endl;
    return;
  }
  ll ans = n;
  for(ll i=1;i*i<=n; i++){
    if(n%i == 0){
      if(i <= k)
        min_self(ans, n/i);
      if(n/i <= k)
        min_self(ans, i);
    }
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
