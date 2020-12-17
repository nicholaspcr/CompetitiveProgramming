#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef long long ll;

const int MAXN = 1e4+1;
vector<vi> vis(MAXN, vi(MAXN));
vector<vector<char>> par(MAXN, vector<char>(MAXN, ' '));
int n,m;
ii plr;
vii mons;

int dirX[4] = { 0, 0, -1, 1};
int dirY[4] = { 1, -1, 0, 0};
string dirStr = "LRDU";

void solve(){
  cin>>n>>m;
  vector<string> vs(n);
  for(int i=0;i<n;i++){
    cin>>vs[i];
    for(int j=0;j<m;j++){
      if(vs[i][j] == 'M')
        mons.pb(mp(i,j));
      if(vs[i][j] == 'A')
        plr = mp(i,j);
    }
  }
  
  // position ans type of movement
  queue<pair<ii, bool>> q;
  q.push(mp(plr,false));
  // vis = 1 -> player, -1 -> fire
  vis[plr.f][plr.s] = 1;
  for(auto monster : mons){
    q.push(mp(monster, true));
  }
  
  // flag is true when a player leaves
  pair<ii, bool> flag = { {-1, -1}, false };
  while(!q.empty()) {
    ii piece = q.front().f;
    bool state = q.front().s;
    q.pop();
    // if player
    if(state == false){
      if(vis[piece.f][piece.s] == -1) continue;
      for(int i=0;i<4;i++){
        int nX = piece.f + dirX[i];
        int nY = piece.s + dirY[i];

        if(nX < 0 || nX >= n || nY < 0 || nY >= m){
          flag = { {piece.f, piece.s}, true };
          break;
        }
        if(vis[nX][nY] == 0 && vs[nX][nY] != '#'){
          vis[nX][nY] = 1;
          par[nX][nY] = dirStr[i];
          q.push({{nX, nY}, false});
        }
      }
      if(flag.s) break;
    }else{ // if monster
      for(int i=0;i<4;i++){
        int nX = piece.f + dirX[i];
        int nY = piece.s + dirY[i];
        if(nX < 0 || nX >= n || nY < 0 || nY >= m)  continue;
        if(vis[nX][nY] != -1 && vs[nX][nY] != '#'){
          vis[nX][nY] = -1;
          q.push({{nX, nY}, true});
        }
      }
    }
  }
  
  if(flag.s){
    cout<<"YES\n";
    ii op = flag.f;
    vector<char> ans;
    while(par[op.f][op.s] != ' '){
      char ch = par[op.f][op.s];
      ans.pb(ch);
      if(ch == 'U')
        op.f--;
      if(ch == 'D')
        op.f++;
      if(ch == 'L')
        op.s--;
      if(ch == 'R')
        op.s++;
    }
    reverse(all(ans));
    cout<<ans.size()<<endl;
    for(auto ch : ans){
      char out = ' ';
      if(ch == 'L') out = 'R';
      if(ch == 'R') out = 'L';
      if(ch == 'D') out = 'U';
      if(ch == 'U') out = 'D';
      cout<<out;
    }
    cout<<endl;
  }else{
    cout<<"NO\n";
  }
  /*
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
      cout<<par[i][j]<<" ";
    cout<<endl;
  }
  */
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
