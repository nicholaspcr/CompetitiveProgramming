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
  int n,m;
  cin>>n>>m;
  vector<vi> dp(n+1, vi(m+1));
  for(int i=0;i<=n; i++){
    for(int j=0;j<=m;j++){
      if(i == j)
        dp[i][j] = 0;
      else{
        dp[i][j] = 1e9;
        for(int k=1;k<i;k++){
          min_self(dp[i][j], dp[i-k][j]+dp[k][j]+1);
        }
        for(int k=1;k<j;k++){
          min_self(dp[i][j], dp[i][j-k]+dp[i][k]+1);
        }
      }
    }
  }
  cout<<dp[n][m]<<endl;
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
