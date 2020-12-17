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
  int n;cin>>n;
  vector<ll> v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  ll ops = 0;
  for(int i=1;i<n;i++)
    ops+=abs(v[i]-v[i-1]);

  ll opts[3] = { 0, 0, 0};
  opts[0] = abs(v[1] - v[0]);
  opts[1] = abs(v[n-1] - v[n-2]);
  for(int i=1;i<n-1;i++){
    ll op = abs(v[i]-v[i-1]) + abs(v[i+1]-v[i]) - abs(v[i+1] - v[i-1]);
    max_self(opts[2], op);
  }
  ll ans = ops - max(opts[0], max(opts[1],opts[2]));
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
