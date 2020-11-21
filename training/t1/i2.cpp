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

bool comp(pair<int,pi> a, pair<int,pi> b){
  return abs(a.S.S - a.S.F) > abs(b.S.S - b.S.F);
}


void solve(){	
  int n,c;
  cin>>n>>c;
  vector<pair<int,pi>> v(n); // index, dSz, sSz
  for(int i=0; i<n;i++){
      v[i].F = i;
      cin>>v[i].S.F>>v[i].S.S;
  }
  sort(all(v),comp);

  vector<pair<int,string>> dp(c+1, {-1, ""});
  dp[0] = MP(0,"");
  for(int i=0;i<n;i++){
    for(int j=c;j>=0;j--){
      if(dp[j].F != -1 && j + max(v[i].S.F,v[i].S.S) <= c){
        if(dp[j+v[i].S.S].F < dp[j].F + 1 ){
          dp[j+v[i].S.S].F = dp[j].F + 1;
          dp[j+v[i].S.S].S = dp[j].S + to_string(v[i].F+1) + " ";
        }
      }
    }
  }

  /*
  for(int i=0;i<=c;i++){
      cout<<dp[i].F<<"|"<<dp[i].S<<endl;
  }
  */

  pair<int,string> ans = {0, ""};
  for(int i=0;i<=c;i++){
    if(dp[i].F > ans.F)
        ans= dp[i];
  }
  cout<<ans.F<<endl;
  cout<<ans.S<<endl;
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
