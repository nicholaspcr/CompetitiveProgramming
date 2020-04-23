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

void solve(){	
  ll n; cin>>n;
  ll op = 1;
  for(int i = 1; i < 60; i++){
    //cout << (1<<i) <<endl;
    op += (1 << i);
    if(n%op == 0){
      cout<<n/op<<endl;
      break;
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
