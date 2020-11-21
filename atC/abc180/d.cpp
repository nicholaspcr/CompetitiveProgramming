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
  ll x,y,a,b;
  cin>>x>>y>>a>>b;

  ll ans = 0;
  // binary search
  ll l = 0, r = y/x;
  while(l<r){
    ll mid = l + (r-l)/2;
    if(x*pow(a,mid) >= b)
      r = mid-1;
    else
      r = mid+1;
  }
  while(x*a<b){
    x*=a;
    ans++;
  }
  ll op = y - x;
  ans += op/b;

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
