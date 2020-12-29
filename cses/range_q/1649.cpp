#include <bits/stdc++.h>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;

int n,q;
const int MAXN = 6e5;
const int INF = 1e9+1;
vi tree(MAXN,INF);

int min_tree(int a,int b){
  a+=n;
  b+=n;
  int s = INF;
  while(a<=b){
    if(a&1)     s = min(s,tree[a++]);
    if((~b)&1)  s = min(s,tree[b--]);
    a/=2;
    b/=2;
  }
  return s;
}

void set_tree(int t, int x){
  t += n;
  tree[t] = x;
  for(t/=2; t >= 1; t/=2){
    tree[t] = min(tree[t<<1], tree[(t<<1) + 1]);
  }
}

void solve(){	
  cin>>n>>q;
  for(int i=1;i<=n;i++){
    int x; cin>>x;
    set_tree(i,x);
  }
  while(q--){
    int t,a,b;
    cin>>t>>a>>b;
    if(t == 1){
      set_tree(a,b);
    }else{
      cout<<min_tree(a,b)<<endl;
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
