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
  int n,k; cin>>n>>k;
  vi v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  vi pref(2*k), suff(2*k);
  for(int i=0;i<n/2;i++){
    int a = v[i];
    int b = v[n-1-i];
    pref[min(a,b) + 1]++;
    suff[max(a,b) + k]++;
  }
  int ans = 0;
  int best = 0;
  for(int i = 0; i < 2*k; i++){
    best += pref[i];
    best -= suff[i];
    max_self(ans, best);
  }
  cout<<ans<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin>>t;
  while(t--) solve();
  //
  //solve();
  return 0;
}
