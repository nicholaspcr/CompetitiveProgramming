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

typedef int item;

struct segTree {
  int size;
  vector<item> values;
  
  item NEUTRAL_ELEMENT = 0;

  item merge(item a, item b){
    return a + b;
  }

  item single(int v){
    return v;
  }

  void init(int n){
    size = 1;
    while(size < n) size=size<<1;
    values.resize(size<<1);
  }
  void build(vector<int> &a, int x, int lx, int rx) {
    if(rx-lx == 1){
      if(lx < (int)a.size()){
        values[x] = single(a[lx]);
      }
      return;
    }
    int m = (lx+rx) / 2;
    build(a, 2*x+1, lx, m);
    build(a, 2*x+2, m, rx);
    values[x] = merge( values[2*x+1], values[2*x+2]);
  }

  void build(vector<int> &a) {
    build(a, 0, 0 ,size);
  }

  void set(int i,int v, int x, int lx, int rx) {
    if(rx-lx == 1){
      values[x] = single(v);
      return;
    }
    int m = (lx+rx)/2;
    if( i < m )
      set(i,v,2*x+1,lx,m);
    else
      set(i,v,2*x+2,m,rx);

    values[x] = merge(values[2*x+1], values[2*x+2]);
  }

  void set(int i, int v){
    set(i,v, 0, 0 ,size);
  }

  item calc(int l,int r, int x, int lx, int rx){
    if(lx >= r || l >= rx) return NEUTRAL_ELEMENT;
    if(lx >= l && rx <= r) return values[x];
    int m = (lx+rx)/2;
    item s1 = calc(l,r,2*x+1,lx,m);
    item s2 = calc(l,r,2*x+2,m,rx);
    return merge(s1,s2);
  }
  item calc(int l, int r){
    return calc(l,r,0,0,size);
  }


  int find(int k, int x, int lx, int rx){
    if(rx-lx == 1)
      return lx;

    int m = (lx+rx)/2;
    int sl = values[2*x+1];
    if(k < sl){
      return find(k, 2*x+1, lx, m);
    }else{
      return find(k-sl, 2*x+2, m, rx);
    }
  }

  int find(int k){
    return find(k,0,0,size);
  }
};


void solve(){	
  int n,m; 
  cin>>n>>m;
  segTree st;
  st.init(n);
  vector<int> a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  st.build(a);
  while(m--){
    int op; cin>>op;
    if(op == 1){
      int i; cin>>i;
      int v = (a[i] == 0) ? 1 : 0;
      a[i] = v;
      st.set(i,a[i]);
    }else{
      int k;
      cin>> k;
      cout<<st.find(k)<<"\n";
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
