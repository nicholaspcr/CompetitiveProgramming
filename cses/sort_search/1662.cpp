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
  ll n;cin>>n;
  vi v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  ll sum = 0;
  ll ans = 0;
  vi op(n);
  op[0]++;
  for(int i=0;i<n;i++){
    sum = (sum + v[i]) % n;
    while(sum < 0) sum += n;
    op[sum]++;
  }
  for(int i=0;i<n;i++){
    ans += (ll)op[i] * (ll)(op[i]-1) / 2;
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
