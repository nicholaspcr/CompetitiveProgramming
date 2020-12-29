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
  int n;cin>>n;
  vi a(n);
  for(auto &v : a) cin>>v;
  vi res(n+1,1);
  n = unique(all(a)) - a.begin();
  a.resize(n);
  for(int i=0;i<n;i++){
    res[a[i]]++;
  }
  res[a[0]]--;
  res[a[n-1]]--;
  int ans = 1e9;
  for(int i=0;i<n;i++)
    ans = min(ans, res[a[i]]);
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
