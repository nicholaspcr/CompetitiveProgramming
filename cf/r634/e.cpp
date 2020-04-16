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

void solve(){	
  int n;cin>>n;
  vi v(n);
  int memo[27][n];
  memset(memo,0,sizeof(memo));
  for(int i=0;i<n;i++){
    cin>>v[i];
    for(int j=1;j<=26;j++){
      memo[j][i] = memo[j][max(i-1,0)];
    }
    memo[v[i]][i] = memo[v[i]][max(i-1,0)] + 1;
  }
  if(n == 1){
    cout << "1\n";
    return;
  }
  int ans = 0;
  for(int i=0;i<n;i++){
    for(int l=1;l<=26;l++){
      int a = memo[l][i];

      max_self(ans,a);
      for(int j=i+1;j<n;j++){
        for(int r=1;r<=26;r++){
          if(l==r)continue;
          int b = memo[r][j] - memo[r][i];
          int c = memo[l][n-1] - memo[l][j];
          if(!a || !c) a = c = 0;
          if(a != c){
            a = min(a,c);
            c = a;
          }
          max_self(ans,a+b+c);
        }
      }
    }
  }
  cout<<ans<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while(t--) solve();
  //solve();
  return 0;
}
