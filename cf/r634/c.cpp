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

void solve(){	
  int n;cin>>n;
  vi v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  map<int,int> m;
  for(int i=0;i<n;i++){
    m[v[i]]++;
  }
  int best = 0;
  for(auto it:m){
    max_self(best,it.S);
  }
  int ans = min(best,(int)m.size()-1);
  max_self(ans, min(best-1, (int)m.size()));
  cout <<ans<<endl;
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
