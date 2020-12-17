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

void solve(){	
  int n, x;
  cin>>n>>x;
  vi v(n);
  for(int i=0;i<n;i++) cin>>v[i];

  int ans = 0;
  for(int i=0;i<n*n;i++){
    pair<int,int> op = { 1e5, -1 };
    for(int j=0;j<n;j++){
      if(v[j] > x && v[j] <= op.F){
          op = {v[j], j};
      }
    }
    if(op.S >= 0){
      int t = x;
      x = v[op.S];
      v[op.S] = t;
      ans++;
    }
  }

  for(auto e: v)
    cout<<e<<" ";
  cout<<endl;

  int big = 0;
  for(int i=0;i<n;i++){
    if(v[i] < big){
      cout<<-1<<endl;
      return;
    }
    max_self(big,v[i]);
  }

  cout<<ans<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while(t--) solve();
  //
  //solve();
  return 0;
}
