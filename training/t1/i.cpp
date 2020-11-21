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

bool comp(pi a, pi b){
  if(a.F == b.F)
      return a.S < b.S;
  return a.F > b.F;
}


void solve(){	
  int n,c;
  cin>>n>>c;
  vpi v(n); // dSz, sSz
  for(int i=0; i<n;i++)
      cin>>v[i].F>>v[i].S;
  
  sort(all(v),comp);

  vector<vector<pair<int,string>>> mat(n+1, vector<pair<int,string>>(c+1));
  for(int i=0;i<=n;i++){
    for(int j=0;j<=c;j++){
      if(i == 0 || j == 0) continue;
      //cout<< mat[i][j].F<<"|"<<mat[i][j].S<<" ";
      int memSz = max(v[i-1].F, v[i-1].S);
      int op = (v[i-1].F > v[i-1].S) ? v[i-1].F-v[i-1].S : v[i-1].S; 
      if(memSz <= j){
        /*
        mat[i][j] = max(
          MP(mat[i-1][j-op].F+1, mat[i-1][j-op].S+to_string(i)),
          MP(mat[i-1][j].F, mat[i-1][j].S)
        );
        */
        if(mat[i-1][j-memSz].F+1 > mat[i-1][j-op].F){
          mat[i][j-op].F = mat[i-1][j-memSz].F+1;
          mat[i][j-op].S = mat[i-1][j-memSz].S +  to_string(i) + " ";
        }else{
          mat[i][j-op] = mat[i-1][j-op];
        }
      }else{
        mat[i][j] = mat[i-1][j];
      }
    }
    
    for(int j=1;j<=c;j++){
      if(mat[i][j-1].F > mat[i][j].F){
        mat[i][j] = mat[i][j-1];
      }
    }
    
  }
  /*
  for(int i=0;i<=n;i++){
    for(int j=0;j<=c;j++){
      cout<<"'"<<mat[i][j].F<<"|"<<mat[i][j].S<<"' ";
    }
    cout<<endl;
  }
  */

  pair<int,string> ans = MP(0,"");
  for(int i=0;i<=c;i++){
    if(mat[n][i].F > ans.F)
        ans = mat[n][i];
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
