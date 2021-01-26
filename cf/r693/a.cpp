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

void solve(){	
  int w,h,n;
  cin>>w>>h>>n;
  ll x = 1;
  while(1){
    if(x >= n){
      cout<<"YES\n";
      break;
    }
    if(w&1 && h&1){
      cout<<"NO\n";
      break;
    }
    if(w == h && h == 0){
      cout<<"NO\n";
      break;
    }
    if((~w)&1){
      w/=2;
      x = (x<<1);
    }else if((~h)&1){
      h/=2;
      x = (x<<1);
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
