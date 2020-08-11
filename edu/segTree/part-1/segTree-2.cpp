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

struct segTree {
  int size;
  vector<ll> mins;
  void init(int n){
    size = 1;
    while(size < n) size=size<<1;
    mins.assign(2*size, LLONG_MAX);
  }
  void set(int i, int v, int x, int lx, int rx){
    if(rx - lx == 1){
      mins[x] = v;
      return;
    }
    int m = (lx+rx)/2;
    if(i<m)
      set(i,v,2*x+1,lx, m);
    else
      set(i,v,2*x+2,m, rx);

    mins[x] = min(mins[2*x+1],mins[2*x+2]);
  }

  void set(int i, int v){
    set(i, v, 0, 0, size);
  }

  ll getMin(int l,int r, int x, int lx, int rx){
    if(lx>=r || l>=rx) return LLONG_MAX;
    if(lx>=l && rx<=r) return mins[x];
    int m = (lx+rx)/2;
    ll s1 = getMin(l,r,2*x+1,lx,m);
    ll s2 = getMin(l,r,2*x+2,m,rx);
    return min(s1,s2);
  }

  ll getMin(int l, int r){
    return getMin(l,r,0,0,size);
  }
};

void solve(){	
  int n,m;
  cin>>n>>m;
  segTree st;
  st.init(n);
  for(int i=0;i<n;i++){
    int v; cin>>v;
    st.set(i,v);
  }
  while(m--) {
    int op; cin>>op;
    if(op == 1){
      int i, v;
      cin>>i>>v;
      st.set(i,v);
    }else {
      int l, r;
      cin>>l>>r;
      cout<<st.getMin(l,r)<<"\n";
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
