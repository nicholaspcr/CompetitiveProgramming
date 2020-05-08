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
  int n,m; cin>>n>>m;
  vi h(n);
  for(int i=0;i<n;i++) cin>>h[i];
  vi g[n];
  for(int i=0;i<m;i++){
    int l,r; cin>>l>>r;
    l--;r--;
    g[l].PB(r);
    g[r].PB(l);
  }
  
  int ans = 0;
  for(int i=0;i<n;i++){
    if(g[i].size() == 0) ans++;
    else{
      bool t = true;
      for(int j=0;j<g[i].size(); j++){
        if(h[i] <= h[g[i][j]]){
          t = false;
          break;
        }
      }
      if(t)
        ans++;
    }
  }
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
