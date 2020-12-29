#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;

const int MAXN = 3e5;

void solve(){	
  int n,q;
  cin>>n>>q;
  vector<vi> dp(n+1, vi(n+1));
  for(int i=1;i<=n;i++){
    string str; cin>>str;
    for(int j=1;j<=n;j++){
      if(str[j-1] == '*')
        dp[i][j]++;
      dp[i][j] += (dp[i-1][j] - dp[i-1][j-1]) + dp[i][j-1];
    }
  }
  /*
  cout<<endl;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
      cout<<dp[i][j]<<" ";
    cout<<endl;
  }
  */

  while(q--){
    int y1,x1,y2,x2;
    cin>>y1>>x1>>y2>>x2;
    cout<< ( dp[x2][y2] - dp[x1-1][y1] - dp[x1][y1-1] ) << endl;
    //cout<<dp[y2][x2]+ dp[y1-1][x1-1] - dp[y2][x1-1] - dp[y1-1][x2]<<endl;
  }
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
