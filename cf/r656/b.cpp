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
  int n; cin>>n;
  vi vis(n+1);
  vi a(2*n);
  for(int i=0;i<2*n;++i)cin>>a[i];
  vi ans;
  for(int i=0;i<2*n;i++){
    if(vis[a[i]]) continue;
    ans.PB(a[i]);
    vis[a[i]]++;
  }
  for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
  cout<<endl;
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
