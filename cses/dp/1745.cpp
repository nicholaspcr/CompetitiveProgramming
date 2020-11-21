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
  vi v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  sort(all(v));

  vector<vector<bool>> dp(n+1, vector<bool>(100001, false));
  dp[0][0] = true;
  for(int i=1;i<=n;i++){
    for(int j=100000; j>=0; j--){
      if(dp[i-1][j]) dp[i][j]=true;

      if(dp[i][j] && j+v[i-1] <= 100000)
        dp[i][j+v[i-1]] = true;
    }
  }
  vi ans;
  for(int i=1;i <= 100000;i++){
    if(dp[n][i]) ans.PB(i);
  }
  cout<<ans.size()<<endl;
  for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
  cout<<endl;
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
