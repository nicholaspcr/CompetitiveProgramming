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
  ll a,b;
  cin>>a>>b;
  ll op = 2*a*b;
  for(ll i=max(a,b);i<=300;i++){
    ll t = i*i;
    if(t >= op && (i/2 >= a || i/2 >= b )){
      cout<<i*i<<endl;
      break;
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;cin>>t;
  while(t--) solve();
  //
  //solve();
  return 0;
}
