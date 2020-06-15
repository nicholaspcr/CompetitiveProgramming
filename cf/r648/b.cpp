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
  int n; cin>>n;
  vpi v(n);
  bool flag = false;
  for(int i=0;i<n;++i) cin>>v[i].F;
  int a = 0, b = 0;
  for(int i=0;i<n;++i){
    cin>>v[i].S;
    if(v[i].S)
      b++;
    else
      a++;
  }
  if(a && b)
    sort(all(v));
  for(int i=0;i<n-1;i++){
    if(v[i+1] < v[i]){
      cout<<"No\n";
      return;
    }
  }
  cout<<"Yes\n";
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
