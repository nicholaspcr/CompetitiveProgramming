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

const int MAXN = 2e6;
const int INF = 1e9+1;
vi tree(MAXN,INF);
int n,q;

int get_min(int a, int b){
  a += n, b += n;
  int s = INF;
  while(a <= b){
    if(a&1)     s = min(s,tree[a++]);
    if((~b)&1)  s = min(s,tree[b--]);
    a/=2;
    b/=2;
  }
  return s;
}

void set_min(int k, int x){
  k += n;
  tree[k] = min(tree[k], x);
  for(k /= 2; k >= 1; k /= 2){
    tree[k] = min(tree[k*2], tree[k*2+1]);
  }
}

void solve(){	
  cin>>n>>q;
  for(int i=1;i<=n;i++){
    int x; cin>>x;
    set_min(i,x);
  }
  while(q--){
    int a, b;
    cin>>a>>b;
    cout<<get_min(a,b)<<endl;
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
