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

struct ent{
  int a,b,c,d;
};

bool comp(ent l, ent r){
  return l.d > r.d;
}

void solve(){	
  int n,m,q;
  cin>>n>>m>>q;
  vector<ent> ve(q);
  int ans = 0;
  for(int i=0;i<q;i++){
    cin>>ve[i].a>>ve[i].b>>ve[i].c>>ve[i].d;
  }
  sort(all(ve), comp);
  int memo[n][q+1];
  memset(memo,0,sizeof memo);
  for(int i=0;i<=q;i++){
    int best = 0;
    for(int j=0;j<i;j++){
      if((memo[ve[j].a][i-1] && memo[ve[j].b][i-1] && memo[ve[j].a][i-1] != ve[j].a && memo[ve[j].b][i-1] != ve[j].b)
          ||(memo[ve[j].a] && memo[ve[j].a] == ve[j].a && n - ve[j].a < 1)
          ||(memo[ve[j].b] && memo[ve[j].b] == ve[j].b && n - ve[j].b < 1))
            continue;
      else{
        best += ve[j].d;
        memo[ve[j].a] = ve[j].a;
        memo[ve[j].b] = ve[j].b;
      }
    }
    max_self(ans,best);
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
