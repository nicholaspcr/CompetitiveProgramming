#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define MAXN 1002

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

vector<int> g[MAXN];
vector<int> vis[MAXN*MAXN+1];
bool flag = false;
pi orig, dest;



void solve(){	
  int h, w; cin>>h>>w;
  pi moves = {0,0};
  char mat[h][w];
  cin>>orig.F>>orig.S;
  cin>>dest.F>>dest.S;
  for(int i=0;i<h;i++){
    string str;
    cin>>str;
    for(int j=0;j<w;j++)
      mat[i][j] = str[j];
  }
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      if(i+1 < h && mat[i+1][j] == '.'){
        g[i*h+j].PB((i+1)*h+j);
      }
      if(i-1 >= 0 && mat[i-1][j] == '.'){
        g[i*h+j].PB((i-1)*h+j);
      }
      if(j+1 < h && mat[i][j+1] == '.'){
        g[i*h+j].PB(i*h+j+1);
      }
      if(j-1 < h && mat[i][j-1] == '.'){
        g[i*h+j].PB(i*h+j-1);
      }
    }

    for(int k=5;k>=2;k--){
      if(i+k < h && mat[i+k][j] == '.'){
        g[i*h+j].PB((i+k)*h+j);
      }
      if(i-k >= 0 && mat[i-k][j] == '.'){
        g[i*h+j].PB((i-k)*h+j);
      }
      if(j+k < h && mat[i][j+k] == '.'){
        g[i*h+j].PB(i*h+j+k);
      }
      if(j-k < h && mat[i][j-k] == '.'){
        g[i*h+j].PB(i*h+j-k);
      }
    }
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
