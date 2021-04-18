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
  int n; cin>>n;
  vi v(n);
  for(auto &x : v) cin>> x;
  map<int,int> m;
  for(auto x : v) {
    m[x]++;
  }

  int ans = 1;
  for(auto p : m){
    ans = max(ans, p.S);
  }
  cout<<ans<<endl;
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
