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
  int n; cin >> n;
  vi v(n);
  for(int i=0;i<n;++i) cin>>v[i];
  sort(all(v));
  int odd = 0, even = 0, diff = 0;
  vpi vd;
  for(int i=0;i<n;i++){
    if(i > 0 && v[i]-v[i-1] == 1){
      diff++;
    }
    if(v[i] & 1) odd++;
    else even++;
  }
  if(odd%2 == 0 && even%2==0)
    cout<<"YES\n";
  else{
    if(odd%2 == 1 && even%2 == 1 && diff)
      cout<<"YES\n";
    else
      cout<<"NO\n";
  }
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
