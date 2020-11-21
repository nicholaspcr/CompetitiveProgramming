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
  ll ans = 0;
  
  ll a = 1, b = 1;
  for(int i=1; i <= n/2; i++){
    a*=i;
    b*=(i+n/2);
  }
  ans = b/a;

  a =1;
  for(int i=1;i<n/2;i++){
    a*= i;
  }
  ans *= a;
  ans *= a;
  ans/=2;
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
