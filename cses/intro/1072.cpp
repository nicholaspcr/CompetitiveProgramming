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

const int maxn = 1e4;
const int piece = 1, occupied = 2;
int m[maxn][maxn];
pi mv[8] = { {2,1}, {2,-1}, {-2,1}, {-2,-1},
            {1,2}, {1,-2}, {-1,2}, {-1,-2} };


void recur(int x, int y){
  bool t = true;
  if(m[x][y]) t = false;
  else{
    for(int i=0;i<8;i++){
      int nX = x + mv[i].F;
      int nY = y + mv[i].S;
      if(nX < 0 || nX>=1e4) continue;
      if(nY < 0 || nY>=1e4) continue;

      if(m[nX][nY]) t = false;
    }
  }
  if(t){
    m[x][y] = piece;
    for(int i=0;i<8;i++){
      int nX = x + mv[i].F;
      int nY = y + mv[i].S;
      if(nX < 0 || nX>=1e4) continue;
      if(nY < 0 || nY>=1e4) continue;
      m[nX][nY] = occupied;
    }
  }
  if(x>=0 && x<1e4)
    recur(x+1,y);
  if(y>=0 && y<1e4)
    recur(x,y+1);
}

void solve(){	
  for(int i=0;i<maxn;i++)
    for(int j=0;j<maxn;j++)
      m[i][j] = 0;
  recur(0,0);

  int t; cin>>t;
  for(int tt=1;tt<=t;tt++){
    ll value = 0;
    for(int i=0;i<tt;i++)
      if(m[i][tt-1] == piece) value++;
    for(int i=0;i<tt-1;i++)
      if(m[tt-1][i] == piece) value++;
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
