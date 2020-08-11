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
  int n, k;
  cin>>n>>k;
  int x = 0;
  vi v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  int mx = 0;
  map<int,int> cnt;
  for(auto &it : v){
    if(it%k ==0) continue;
    cnt[k-it%k]++;
    max_self(mx, cnt[k-it%k]);
  }
  ll ans = 0;
  for(auto it : cnt){
    if(it.S == mx)
      ans = k* 1ll * (it.S-1) + it.F + 1;
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