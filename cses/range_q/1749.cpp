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
vi tree(MAXN);
int n;

void set_tree(int k){
  k += n;
  tree[k]++;
  for(k/=2; k>=1;k/=2)
    tree[k] = tree[k*2] + tree[2*k + 1];
}

int get_tree(int a,int b){
  a+=n, b+=n;
  int s = 0;
  while(a<=b){
    if(a&1)     s += tree[a++];
    if((~b)&1)  s += tree[b--];
    a/=2; b/=2;
  }
  return s;
}

void solve(){	
  cin>>n;
  vi v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  vi ans;
  for(int i=0;i<n;i++){
    int x;cin>>x;
    int l = 1, r = n;
    while(l != r){
      int mid = l+(r-l)/2;
      int op = get_tree(1,mid);
      if( mid - op > x)
        r = mid-1;
      else if(mid - op < x)
        l = mid+1;
      else{
        if(get_tree(mid,mid) == 0){
          l = r = mid; break;
        }else
          r = mid-1;
      }
    }
    ans.pb(v[l-1]);
    set_tree(l);
  }
  for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
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
