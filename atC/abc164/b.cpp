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
  pi l, r;
  cin>>l.F>>l.S;
  cin>>r.F>>r.S;
  bool t = false;
  while(l.F && r.F){
    if(!t){
      r.F -= l.S;
      if(r.F < 0) r.F = 0;
    }else{
      l.F -= r.S;
      if(l.F < 0) l.F = 0;
    }
    t = !t;
  }
  if(l.F == 0)
    cout<<"No\n";
  else
    cout<<"Yes\n";

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
