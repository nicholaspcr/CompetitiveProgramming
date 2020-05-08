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

ll calcSum(ll n, vi op){
  ll s = 0;
  for(int i=0;i<(int)op.size();i++){
    s += n/(ll)op[i];
  }
  return s;
}

ll minTime(ll currMax, vi op, ll k){
  ll l = 1, r = currMax;
  while(l < r){
    if(l == r-1) break;
    ll mid = l + (r-l)/2;
    ll sum = calcSum(mid, op);
    if(sum > k){
      r = mid-1;
    }else{
      l = mid;
    }
    //cout<<sum<<endl;
  //cout<<l<<"-"<<r<<endl;
  }
  if(calcSum(l,op) >= k)
    return l;
  else
    return k;
}

void solve(){	
  ll n,k;
  cin>>n>>k;
  vi v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  sort(all(v));
  vi op; op.PB(v[0]);
  ll ans = k*v[0];
  int pos = 1;
  while(pos < n){
    op.PB(v[pos++]);
    ll t = minTime(2e5, op, k);
    if(t > ans) break;
    else min_self(ans,t);
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
