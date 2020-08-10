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
  int h,w,k;
  cin>>h>>w>>k;
  char mat[h][w];
  string str;
  for(int i=0;i<h;i++){
    cin>>str;
    for(int j=0;j<w;j++){
      mat[i][j] = str[j];
    }
  }

  int ans = 0;
  for(int maskR=0;maskR<(1<<h)-1;maskR++){
    for(int maskC=0;maskC<(1<<w)-1;maskC++){
      int black = 0;
      for(int i=0;i<h-1;i++){
        for(int j=0;j<w-1;j++){
          if(((maskR>>i)&1) == 0 && ((maskC>>j)&1) == 0 && mat[i][j] == '#')
            black++;
        }
      }
      if(black == k) ans++;
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
