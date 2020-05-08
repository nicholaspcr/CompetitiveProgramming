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
  int n;cin>>n;
  vi v(n);
  for(int i=0;i<n;i++) cin >> v[i];
  map<int,int> m;
  for(int i=0;i<n;i++){
    m[v[i] + abs(v[i])%n]++;
  }
  for(auto it:m){
    if(it.S > 1){
      cout<<"NO\n";
      return;
    }
  }
  cout<<"YES\n";

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
