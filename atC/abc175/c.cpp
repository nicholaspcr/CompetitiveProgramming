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
  ll x,k,d;
  cin>>x>>k>>d;
  x = abs(x);
  ll extra = x%d;
  ll moves = x/d;
  if( moves >= k ){
    ll ans = x-(d*k);
    cout<<abs(ans)<<endl;
  }else{
    k -= moves;
    x = x%d;
    ll ans;
    if(k & 1){
      ans = abs(x-d);
    }else{
      ans = x;
    }
    cout<<abs(ans)<<endl;
  }
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
