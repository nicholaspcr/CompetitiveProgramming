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
  int n,m,x; cin>>n>>m>>x;
  vector<vi> a(n, vi(m));
  vi c(n);
  for(int i=0;i<n;i++){
      cin>>c[i];
      for(int j=0;j<m;j++)
        cin>>a[i][j];
  }
  int all = 1<<n;
  int ans = INT_MAX;
  for(int mask=0;mask<all;mask++){
    vi level(m);
    int cost = 0;
    for(int i=0;i<n;i++){
      if((mask>>i)&1){
        cost+=c[i];
        for(int j=0;j<m;j++){
          level[j] += a[i][j];
        }
      }
    }
    bool ok = true;
    for(int i=0;i<m;i++)
      if(level[i] < x) ok = false;
    if(ok)
      min_self(ans, cost);
  }
  if(ans == INT_MAX) cout<<-1<<endl;
  else
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
