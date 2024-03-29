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
  int k; cin>>k;
  ll t = 7;
  ll MOD = 1e18;
  int c = 1;
  bool f = false;
  while(c < 1e7){
    if(t%k == 0){
      f = true;
      break;
    }
    c++;
    t = t*10 + 7;
    t = t%MOD;
  }
  if(f)
    cout<<c<<endl;
  else
    cout<<-1<<endl;
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
