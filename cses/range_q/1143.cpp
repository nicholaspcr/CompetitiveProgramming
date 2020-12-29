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

const int MAXN = 5e5;
const int INF = 1e9+1;
vi tree(MAXN, 0);
int n,q;

int get_tree(int a, int b){
  a+=n, b+=n;
  int s = 0;
  while(a<=b){
    if(a&1) s = max(s, tree[a++]);
    if((~b)&1) s = max(s, tree[b--]);
    a/=2;
    b/=2;
  }
  return s;
}

void set_tree(int k, int x){
  k+=n;
  tree[k] = x;
  for(k/=2; k >= 1; k/=2)
    tree[k] = max(tree[(k<<1)], (tree[(k<<1)+1]));
}

void solve(){	
  cin>>n>>q;
  for(int i=1;i<=n;i++){
    int x; cin>>x;
    set_tree(i, x);
  }
  vi ans;
  while(q--){
    int x; cin>>x;
    int l=1, r = n;
    // binary search on indices
    while(l < r){
      int mid = l + (r-l)/2;
      if( get_tree(l, mid) >= x ) {
        r = mid;
      }else{
        l = mid+1;
      }
    }

    //cout<<l<<" "<<r<<endl;
    if(l == n && get_tree(l,l) < x)
      ans.pb(0);
    else{
      set_tree(l, get_tree(l,l) - x);
      ans.pb(l);
    }
  }
  for(auto v:ans)
    cout<<v<<" ";
  cout<<endl;
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
