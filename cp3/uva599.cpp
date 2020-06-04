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

vector<int> g[26];
int vis[26];

void dfs(int u){
  vis[u] = 1;
  for(int i=0;i<g[u].size();i++){
    int v = g[u][i];
    if(!vis[v])
      dfs(v);
  }
}

void solve(){
  for(int i=0;i<26;i++) g[i].clear();
  string str; cin>>str;
  while(str[0] != '*'){
    //cout<<str<<endl;
    //cout<<str[1]-'A'<<" "<<str[3]-'A'<<endl;
    g[str[1]-'A'].PB(str[3]-'A');
    g[str[3]-'A'].PB(str[1]-'A');
    cin>>str;
  }
  cin>>str;
  memset(vis, 0, sizeof vis);
  int trees = 0;
  int acorn = 0;
  for(int i=0;i<str.size();i++){
    if(str[i] < 'A' || str[i] > 'Z') continue;
    int pos = (int)str[i] - (int)'A';
    if(!vis[pos]){
      if(g[pos].size() == 0)
        acorn++;
      else
        trees++;
      dfs(pos);
    }
  }
  cout<<"There are "<<trees<<" tree(s) and "<<acorn<<" acorn(s)."<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while(t--) solve();
  //
  //solve();
  return 0;
}
