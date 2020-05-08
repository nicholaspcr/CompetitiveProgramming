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
  int n,k;cin>>n>>k;
  int mat[k][n+1];
  memset(mat,0,sizeof mat);
  for(int i=0;i<k;i++){
    int amount; cin>>amount;
    for(int j=0;j<amount;j++){
      int person;cin>>person;
      mat[i][person] = 1;
    }
  }
  int ans = 0;
  for(int i=1;i<=n;i++){
    bool t = true;
    for(int j=0;j<k;j++){
      if(mat[j][i] == 1){
        t = false;
        break;
      }
    }
    if(t){
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
