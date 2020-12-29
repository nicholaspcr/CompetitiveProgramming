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

vll tree(1<<25,0);
int n, q;

ll sum(int k){
  ll s = 0;
  while(k >= 1){
    s += tree[k];
    k -= k&-k;
  }
  return s;
}

void add(int k, int x){
  while(k <= n){
    tree[k] += x;
    k += k&-k;
  }
}


void solve(){	
  cin>>n>>q;
  for(int i=0;i<n;i++){
    int x;cin>>x;
    add(i+1, x);
  }
  while(q--){
    int a, b;
    cin>>a>>b;
    cout<<sum(b) - sum(a-1)<<endl;
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
