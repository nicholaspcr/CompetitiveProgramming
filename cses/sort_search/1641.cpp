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

pair<ll,int> findPair(vector<pair<ll,int>> v, int op){
  int l = 0, r = v.size();
  int ans = 0;
  while(l<=r){
    int mid = l + (r-l)/2;
    if(v[mid].F >= op){
      ans = mid;
      r = mid-1;
    }else
      l = mid+1;
  }
  return v[ans];
}

void solve(){	
  ll n, x; cin>>n>>x;
  vector<pair<ll, int>> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i].F;
    v[i].S = i;
  }
  sort(all(v));
  int limit = (n >= 1000) ? n-sqrt(n) : 0;
  for(int i=n-1;i>=limit;i--){
    for(int j=0;j<i;j++){
      if(v[i].F + v[j].F >= x) break;
      ll op = x - (v[i].F+v[j].F);
      pair<ll,int> t = findPair(v, op);
      if(t.F == op && t.S != v[i].S && t.S != v[j].S){
        cout<<t.S+1<<" "<<v[i].S+1<<" "<<v[j].S+1<<endl;
        return;
      }
    }
  }
  cout<<"IMPOSSIBLE\n";
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
