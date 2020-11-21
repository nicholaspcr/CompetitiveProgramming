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

string str;
int ans = 0;
vector<vi> mat(7, vi(7));
pi dir[4] = {{0,1}, {1,0}, {0,-1}, {-1,0}};
int lim[4] = {0,0,0,0}; // left,right, bottom, up !


void solve(pi p, int pStr, int steps){
  if(steps == 48){
    ans++;
    return;
  }

  if(str[pStr] == '?'){
    for(int i=0;i<4;i++){
      p.F += dir[i].F;
      p.S += dir[i].S;

      // check limits of board
      if( lim[1] - p.F > 7 ||
          p.F - lim[0] > 7 ||
          p.S - lim[2] > 7 ||
          lim[3] - p.S > 7){
        p.F -= dir[i].F;
        p.S -= dir[i].S;
        continue;
      }
      solve(p, pStr+1, steps+1);
      p.F -= dir[i].F;
      p.S -= dir[i].S;
    }
  }else{
    if(str[pStr] == 'D'){
      p.F++;
      if( lim[1] - p.F > 7 ||
          p.F - lim[0] > 7){
        return;
      }
    }
    if(str[pStr] == 'L'){
      p.F--;
      if( lim[1] - p.F > 7 ||
          p.F - lim[0] > 7){
        return;
      }
    }
    if(str[pStr] == 'U'){
      p.S++;
      if( lim[3] - p.S > 7 ||
          p.S - lim[2] > 7){
        return;
      }
    }
    if(str[pStr] == 'R'){
      p.S--;
      if( lim[3] - p.S > 7 ||
          p.S - lim[2] > 7){
        return;
      }
    }
    solve(p, pStr+1, steps+1); 
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //int t; cin >> t;
  //while(t--) solve();
  //
  cin>>str;
  solve({0,0},0, 0);
  cout<<ans<<endl;
  return 0;
}
