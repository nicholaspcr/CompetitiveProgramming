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
  ll x,y;
  cin>>x>>y;
  ll r;
  if(x<y){
    if(y&1){
      r = y*y;
      cout<<r-x+1<<endl;
    }else{
      r = (y-1)*(y-1) + 1;
      cout<<r+x-1<<endl;
    }
  }else{
    if(x&1){
      r = (x-1)*(x-1)+1;
      cout<<r+y-1<<endl;
    }else{
      r = x*x;
      cout<<r-y+1<<endl;
    }
  }
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
