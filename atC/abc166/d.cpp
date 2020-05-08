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

ll getNum(int a){
  ll n = (ll)a;
  return n*n*n*n*n;
}

void solve(){	
  ll x; cin>>x;
  for(int i = -1000; i <= 1000; i++){
    for(int j = -1000; j <= 1000; j++){
      if(getNum(i) - getNum(j) == x){
        cout<<i<< " "<<j<<endl;
        return;
      }
    }
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
