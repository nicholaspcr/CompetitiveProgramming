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
  int n, m; cin>>n>>m;
  set<int> s;
  for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    s.insert(a);
    s.insert(b);
  }
  set<int>::iterator it;
  vi mov;
  for(it = s.begin(); it != s.end(); ++it){
    mov.PB(*it);
  }

  int const MOD = 998244353;
  vi ans(n+1);
  ans[0] = 1;
  for(int i=1;i<=n;i++){
    for(int j=0;j<(int)mov.size();j++){
      if(i - mov[j] >= 0)
        ans[i] += ans[i-mov[j]];
      ans[i] %= MOD;
    }
  }
  cout<<ans[n]<<endl;
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
