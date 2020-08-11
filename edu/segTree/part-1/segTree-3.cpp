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
  vector<pi> res;
  void init(int n){
    size = 1;
    while(size < n) size=size<<1;
    res.assign(2*size, MP(INT_MAX,0));
  }
  void set(int i, int v, int x, int lx, int rx){
    if(rx - lx == 1){
      res[x] = MP(v, 1);
      return;
    }
    int m = (lx+rx)/2;
    if(i<m)
      set(i,v,2*x+1,lx, m);
    else
      set(i,v,2*x+2,m, rx);
    
    pi a = res[2*x+1];
    pi b = res[2*x+2];
    if(a.F < b.F)
      res[x] = a;
    else if(a.F > b.F)
      res[x] = b;
    else
      res[x] = MP(a.F,a.S+b.S);
  }

  void set(int i, int v){
    set(i, v, 0, 0, size);
  }

  pi getRes(int l,int r, int x, int lx, int rx){
    if(lx>=r || l>=rx) return MP(INT_MAX,0);
    if(lx>=l && rx<=r) return res[x];
    int m = (lx+rx)/2;
    pi a = getRes(l,r,2*x+1,lx,m);
    pi b = getRes(l,r,2*x+2,m,rx);

    if(a.F < b.F)
      return a;
    else if (a.F > b.F)
      return b;
    else
      return MP(a.F, a.S+b.S);
  }

  pi getRes(int l, int r){
    return getRes(l,r,0,0,size);
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
      pi ans = st.getRes(l,r);
      cout<<ans.F<<" "<<ans.S<<"\n";
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
