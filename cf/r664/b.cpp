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

int n,m;

void recur(vector<vector<int>> &mat, int x, int y){
    cout<<x+1<<" "<<y+1<<"\n";
    mat[x][y] = 1;
    for(int i=x;i<n;i++){
      if(mat[i][y] == 0){
        recur(mat,i,y);
        break;
      }
    }
    for(int i=x;i>=0;i--){
      if(!mat[i][y]){
        recur(mat,i,y);
        break;
      }
    }
    for(int i=y;i<m;i++){
      if(!mat[x][i]){
        recur(mat,x,i);
        break;
      }
    }
    for(int i=y;i>=0;i--){
      if(!mat[x][i]){
        recur(mat,x,i);
        break;
      }
    }
}

void solve(){	
  int x,y;
  cin>>n>>m>>x>>y;
  vector<vector<int>> mat(n,vector<int> (m));
  x--;y--;
  recur(mat,x,y);
  
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
