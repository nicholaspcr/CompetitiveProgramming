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

ll getTime(vector<ll> oper, ll qtd){
  ll maxi = 0, mini = 1e18;
  for(int i=0;i<oper.size();i++){
    max_self(maxi,oper[i]);
    min_self(mini,oper[i]);
  }
  ll l = 0, r = mini*qtd + 1;
  ll ans;
  while(l<=r){
    ll mid = l + (r-l)/2;
    ll currQtd = 0;
    for(int i=0;i<oper.size();i++){
      currQtd += mid/oper[i];
    }
    if(currQtd >= qtd){
      ans = mid;
      r = mid-1;
    }else
      l = mid+1;
  }
  //cout<<l<<" "<<r<<endl;
  return ans;
}

void solve(){
  ll n,t; cin>>n>>t;
  vector<ll> v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  cout<<getTime(v, t)<<endl;
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
