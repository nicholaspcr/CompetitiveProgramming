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

const int MAXN = 2e5+1;
vi par(MAXN);
vi rk(MAXN,0);

int find_set(int v){
  if(v == par[v])
    return v;
  return par[v] = find_set(par[v]);
}

void union_sets(int a,int b){
  a = find_set(a);
  b = find_set(b);
  if (a!=b){
    if(rk[a] < rk[b]){
      int t = a;
      a = b;
      b = t;
    }
    par[b] = a;
    if(rk[a] == rk[b])
      rk[a]++;
  }
}

void solve(){	
  int n, q;
  cin>>n>>q;
  for(int i=0;i<MAXN;i++) par[i] = i;
  while(q--){
    int t,a,b;
    cin>>t>>a>>b;
    // add edge
    if(t == 0){
      union_sets(a,b);
    }else{
      int A = find_set(a);
      int B = find_set(b);
      if(A == B)
        cout<<1<<endl;
      else
        cout<<0<<endl;
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
